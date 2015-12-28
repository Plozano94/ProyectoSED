----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:22:54 12/21/2015 
-- Design Name: 
-- Module Name:    prescaler - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity prescaler is
	generic(width:integer:=50);
	port(
			sal: out std_logic;
			clk : in std_logic
	);
end prescaler;

architecture Behavioral of prescaler is

begin
process(clk)
variable cont : integer :=0;
begin
if clk'event and clk='1' then
	cont:=cont + 1;
	if cont = width then
		sal <= '1';
		cont:=0;
	else
		sal<='0';
	end if;
 
end if;

end process;
end Behavioral;

