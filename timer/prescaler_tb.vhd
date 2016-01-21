
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY prescaler_tb IS
END prescaler_tb;
 
ARCHITECTURE behavior OF prescaler_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT prescaler
    PORT(
         sal : OUT  std_logic;
         clk : IN  std_logic;
         sel1 : IN  std_logic;
         sel2 : IN  std_logic;
         sel3 : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal sel1 : std_logic := '0';
   signal sel2 : std_logic := '0';
   signal sel3 : std_logic := '0';

 	--Outputs
   signal sal : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: prescaler PORT MAP (
          sal => sal,
          clk => clk,
          sel1 => sel1,
          sel2 => sel2,
          sel3 => sel3
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
   
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		sel3<='1';
		wait for 100 ns;	
		sel2<='1';
		wait for 100 ns;	
		sel2<='0';
		sel3<='1';
		sel1<='0';
		wait for 2000 ns;
      wait for clk_period*10;

    assert false
	 report "Fin de la simulacion"
	 severity failure;
	 
   end process;

END;
