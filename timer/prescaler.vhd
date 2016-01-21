library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


--SACA UN PULSO CADA x PULSOS DE RELOJ (X=PULSE, CONFIGURABLE MEDIANTE LOS SELECTORES)

entity prescaler is
	port(
			sal: out std_logic; 
			clk : in std_logic;
			sel1: in std_logic;
			sel2: in std_logic;
			sel3: in std_logic
	);
end prescaler;

architecture Behavioral of prescaler is

begin
process(clk)
variable cont : integer :=0;
variable pulse : integer :=0;
begin

if clk'event and clk='1' then -- Flanco de subida de reloj
	if sel1 = '1' then
			pulse:=50000000; --EL BLOQUE SACA UN PULSO CADA SEGUNDO SI ESTA SELECCIONADO
	elsif sel2='1' then			
			pulse:=50000; --EL BLOQUE SACA UN PULSO CADA MILISEGUNDO SI ESTA SELECCIONADO
	elsif sel3='1' then
			pulse:=50;		--EL BLOQUE SACA UN PULSO CADA MICROSEGUNDO SI ESTA SELECCIONADO
	end if;
	cont:=cont + 1;
	if cont >= pulse then --si cont=pulse, se saca un pulso y se resetea cont
		sal <= '1';
		cont:=0;
	else
		sal<='0';
	end if;
 
end if;

end process;
end Behavioral;

