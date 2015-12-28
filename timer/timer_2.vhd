----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:28:52 11/29/2015 
-- Design Name: 
-- Module Name:    timer_2 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;car

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity timer is
	port(
			entry: in std_logic;
			disp:   out std_logic_vector(15 downto 0);
			clk : in std_logic
			
	
	
	);
end timer;

architecture Behavioral of timer is

signal disp_i:std_logic_vector(disp'range):=(others=>'0');
signal cont : std_logic_vector(disp'range):=(others => '0');
begin

process (clk,entry)

begin
if clk'event and clk='1' then
	cont<=cont+'1';
end if;	
if entry'event and entry='1' then
	disp_i<=cont;
	cont<=(others=>'0');

end if;

	
end process;
disp<=disp_i;
end Behavioral;
