----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:06:39 12/24/2015 
-- Design Name: 
-- Module Name:    div - Behavioral 
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
USE ieee.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity div is
generic(width:integer:=7071);
	port(
			ent: in std_logic_vector(width downto 0);
			sal: out std_logic_vector (width downto 0);
			sel1: in std_logic;
			sel2: in std_logic;
			sel3: in std_logic
	);
end div;


architecture Behavioral of div is
begin
process (ent,sel1,sel2,sel3)
begin
if sel1 = '1' then
	sal<=ent;
elsif sel2='1' then
	sal<= std_logic_vector( to_unsigned((to_integer(unsigned(ent))/1000),sal'length));
elsif sel3='1' then
	sal<= std_logic_vector( to_unsigned((to_integer(unsigned(ent))/1000000),sal'length));
end if;

	
end process;
end Behavioral;

