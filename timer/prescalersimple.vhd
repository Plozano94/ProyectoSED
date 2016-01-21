library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


--SACA UN PULSO CADA x PULSOS DE RELOJ (X=WIDTH)

entity prescalersimple is
	generic(width:integer:=50);
	port(
			sal: out std_logic;
			clk : in std_logic
	);
end prescalersimple;

architecture Behavioral of prescalersimple is

begin
process(clk)
variable cont : integer :=0;
begin

if clk'event and clk='1' then -- Flanco de subida de reloj
	cont:=cont + 1;
	if cont = width then --si cont=width, se saca un pulso y se resetea cont
		sal <= '1';
		cont:=0;
	else
		sal<='0';
	end if;
 
end if;

end process;
end Behavioral;

