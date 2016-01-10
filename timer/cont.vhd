
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE ieee.numeric_std.ALL;

--CUENTA PULSOS EN "ENT" ENTRE CADA PULSO DE "ENT_PRESCALER" Y COLOCA EL NUMERO A LA SALIDA
--CUENTA UN MAXIMO DE 2 ELEVADO A X PULSOS (X=WIDTH)

entity cont is
generic(width:integer:=25);
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
		-- CON FLANCO DE SUBIDA EN "ENT" , SUMA 1
		if ent'event and ent='1' then
			cont:=cont + 1;
		end if;	
		--CON FLANCO DE SUBIDA EN "ENT_PRESCALER", PONE LA CUENTA  A LA SALIDA Y RESETEA LA CUENTA
		if ent_prescaler'event and ent_prescaler='1' then
			sal <= std_logic_vector(to_unsigned(cont, width+1));
			cont:=0;
		end if;

	end process;

end Behavioral;

