----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:00:30 12/28/2015 
-- Design Name: 
-- Module Name:    post_div - Behavioral 
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

--SACA EN BCD POR DIG1, DIG2, DIG3,Y DIG4, LOS MILLARES,CENTENARES,
--DECENAS Y UNIDADES RESPECTIVAMENTE EN BCD.

entity post_div is
generic(width:integer:=25);
	port(
			clk : in std_logic;
			ent: in std_logic_vector(width downto 0);
			dig1: out std_logic_vector (3 downto 0);
			dig2: out std_logic_vector (3 downto 0);
			dig3: out std_logic_vector (3 downto 0);
			dig4: out std_logic_vector (3 downto 0)
	);

end post_div;

architecture Behavioral of post_div is
begin
	process (clk)
		variable result : integer :=0;
		variable a : integer :=0;
	begin
		if clk'event and clk='1' then
			--EN a SE GUARDAN LOS MILLARES Y SE SACAN POR DIG1
			result:=to_integer(unsigned(ent));
			a:=result*(1024/1000)/1024;
			dig1<=std_logic_vector( to_unsigned(a,4));
			--SE RESTAN LOS MILLARES
			result:=result-1000*a;
			--EN a SE GUARDAN LOS CENTENARES Y SE SACAN POR DIG2
			a:=result*(1024/100)/1024;
			dig2<=std_logic_vector( to_unsigned(a,4));
			--SE RESTAN LOS CENTENARES
			result:=result-100*a;
			--EN a SE GUARDAN LOS DECENAS Y SE SACAN POR DIG3
			a:=result*(1024/10)/1024;
			dig3<=std_logic_vector( to_unsigned(a,4));
			--SE RESTAN LOS DECENAS
			result:=result-10*a;
			--EN a SE GUARDAN LAS UNIDADES Y SE SACAN POR DIG3
			a:=result*(1024/1)/1024;
			dig4<=std_logic_vector( to_unsigned(a,4));
		end if;
	
end process;

end Behavioral;

