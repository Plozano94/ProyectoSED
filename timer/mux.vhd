----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:33:11 12/28/2015 
-- Design Name: 
-- Module Name:    mux - Behavioral 
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
use ieee.std_logic_unsigned.all;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mux is
 PORT(
			clk  : IN std_logic;
			dig1 : IN std_logic_vector(3 DOWNTO 0);
			dig2 : IN std_logic_vector(3 DOWNTO 0);
			dig3 : IN std_logic_vector(3 DOWNTO 0);
			dig4 : IN std_logic_vector(3 DOWNTO 0);
			num  : OUT std_logic_vector(3 DOWNTO 0);
         digctrl : OUT std_logic_vector(3 DOWNTO 0)
			
		);
end mux;


ARCHITECTURE behavioral OF mux IS
	signal sel_mux : std_logic_vector(1 DOWNTO 0):= "00";
   BEGIN
		PROCESS ( clk) 
		BEGIN
			if(clk'event and clk='1')then
				if (sel_mux="11") then
					sel_mux<="00";
				else 
					sel_mux<= sel_mux + 1;
				end if;
			end if;
         CASE sel_mux IS
				WHEN "00" => 
						digctrl <= "1110";
						num <= dig4;
				WHEN "01" => 
						digctrl <= "1101";
						num <= dig3;		  
				WHEN "10" => 
						digctrl <= "1011";
						num <= dig2;
				WHEN "11" => 
						digctrl <= "0111";
						num <= dig1;
				WHEN OTHERS => 
						digctrl <= (others => '0');
						num <= "1111";
         END CASE;

       END PROCESS;


END behavioral;

