----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:26:35 12/21/2015 
-- Design Name: 
-- Module Name:    cont - Behavioral 
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

entity cont is
generic(width:integer:=7071);
	port(
			sal: out std_logic_vector(width downto 0);
			ent_prescaler : in std_logic;
			ent : in std_logic
	);
end cont;

architecture Behavioral of cont is

begin
process(ent_prescaler,ent)
variable cont : integer :=0;
begin
if ent'event and ent='1' then
	cont:=cont + 1;
end if;	
if ent_prescaler'event and ent_prescaler='1' then
		sal <= std_logic_vector(to_unsigned(cont, width+1));
		cont:=0;
	
 
end if;

end process;

end Behavioral;

