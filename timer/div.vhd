
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE ieee.numeric_std.ALL;

--DEPENDIENDO DE COMO ESTÉ EL SELECTOR, DIVIDE EL NUMERO DE LA ENTRADA ENTRE 1
-- 1000 O 1000000 (PARA OBTENER HERCIOS, KHERCIOS O MHERCIOS) 

entity div is
generic(width:integer:=25);
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
			sal<= std_logic_vector( to_unsigned((to_integer(unsigned(ent))*(1024/1000)/1024),sal'length));
		elsif sel3='1' then
			sal<= std_logic_vector( to_unsigned((to_integer(unsigned(ent))*(1024/1000000)/1024),sal'length));
		end if;

	
end process;
end Behavioral;

