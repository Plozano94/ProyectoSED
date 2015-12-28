----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:15:24 11/29/2015 
-- Design Name: 
-- Module Name:    timer - Behavioral 
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
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity timer is
	port(
			entry: in std_logic;
			disp:   out real;
			clk : in std_logic
			
	
	
	);
end timer;

architecture Behavioral of timer is

signal disp_i:real;
--signal cont :std_logic_vector(disp'range):=(others=>'0');
begin

process (clk,entry)
variable cont: real:=0.0;
variable pulsos: real:=0.0;
variable result: real:=0.0;
begin
if clk'event and clk='1' then
	cont:=cont+1.0;
	if cont = 50.0 then
	result:=((pulsos)/(cont*0.02*10.0**(-9)));	
	 --disp_i<=conv_std_logic_vector(integer(result),disp_i'length);
     disp_i<=result;
	 pulsos:=0.0;
	 cont:=0.0;
	 end if;
		
	
end if;
	
if entry'event and entry='1' then
	pulsos:=pulsos+1.0;

end if;

	
end process;
disp<=disp_i;
end Behavioral;

