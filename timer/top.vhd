library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is

	PORT (
		clk_gl: IN std_logic;
		ent_gl: IN std_logic;
		sel1_gl: IN std_logic;
		sel2_gl: IN std_logic;
		sel3_gl: IN std_logic;
		num_gl  : OUT std_logic_vector(6 DOWNTO 0);
		digctrl_gl: OUT std_logic_vector (3 downto 0)
	);
	
end top;
architecture Behavioral of top is

COMPONENT prescaler
	PORT(
			sal: out std_logic;
			clk : in std_logic;
			sel1: in std_logic;
			sel2: in std_logic;
			sel3: in std_logic
	);
END COMPONENT;
COMPONENT prescalersimple 
	generic(width:integer:=400);
	PORT(
			sal: out std_logic;
			clk : in std_logic
	);
END COMPONENT;

COMPONENT cont
	generic(width:integer:=25);
	PORT(
		clk: in std_logic;
		ent_prescaler : IN std_logic;
		ent : IN std_logic;
		sal: OUT std_logic_vector(width downto 0)
		);
END COMPONENT;

COMPONENT post_div
	generic(width:integer:=25);
	PORT(
		clk : in std_logic;
		ent : IN std_logic_vector(width downto 0);
		dig1: OUT std_logic_vector (3 downto 0);
		dig2: OUT std_logic_vector (3 downto 0);
		dig3: OUT std_logic_vector (3 downto 0);
		dig4: OUT std_logic_vector (3 downto 0)
	);
END COMPONENT;

COMPONENT mux
	PORT(
		clk  : IN std_logic;
		dig1 : IN std_logic_vector(3 DOWNTO 0);
		dig2 : IN std_logic_vector(3 DOWNTO 0);
		dig3 : IN std_logic_vector(3 DOWNTO 0);
		dig4 : IN std_logic_vector(3 DOWNTO 0);
		num  : OUT std_logic_vector(3 DOWNTO 0); 
		digctrl : OUT std_logic_vector(3 DOWNTO 0)
	);
END COMPONENT;

COMPONENT decoder 
	 PORT (
		code : IN std_logic_vector(3 DOWNTO 0);
		led : OUT std_logic_vector(6 DOWNTO 0)
 );
END COMPONENT;

signal signal_salpr, signal_salprsmp1,signal_ent_post_div :std_logic;
signal signal_salcont : std_logic_vector (25 downto 0);
signal signal_dig1, signal_dig2, signal_dig3, signal_dig4, signal_digctrl, signal_salmux: std_logic_vector (3 downto 0);
signal  signal_num : std_logic_vector (6 downto 0);
begin

Inst_prescaler: prescaler 
	PORT MAP(
		clk => clk_gl,
		sal => signal_salpr,
		sel1 => sel1_gl,
		sel2 => sel2_gl,
		sel3 => sel3_gl
	);

Inst_prescalersimple1: prescalersimple
	generic map (width => 200)
	PORT MAP (
		clk => clk_gl,
		sal => signal_salprsmp1
	);
Inst_prescalersimple2: prescalersimple
	generic map (width => 50000000)
	PORT MAP (
		clk => clk_gl,
		sal => signal_ent_post_div
	);

Inst_cont: cont 
	generic map (width => 25)
	PORT MAP(
		clk => clk_gl,
		ent_prescaler => signal_salpr,
		ent => ent_gl,
		sal =>signal_salcont
	);


Inst_post_div: post_div 
	generic map (width => 25)
	PORT MAP(
		clk => signal_ent_post_div,
		ent=> signal_salcont,
		dig1 => signal_dig1,
		dig2 => signal_dig2,
		dig3 => signal_dig3,
		dig4 => signal_dig4
	);

Inst_mux: mux 
	PORT MAP(
		clk => signal_salprsmp1,
		dig1 => signal_dig1,
		dig2 => signal_dig2,
		dig3 => signal_dig3,
		dig4 => signal_dig4,
		num => signal_salmux,
		digctrl => signal_digctrl
	);
	
Inst_decoder: decoder
	PORT MAP(
		code => signal_salmux,
		led  => signal_num
	);
	
num_gl <= signal_num;
digctrl_gl <= signal_digctrl;
end Behavioral;