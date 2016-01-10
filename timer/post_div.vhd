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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity post_div is
generic(width:integer:=25);
	port(
			ent: in std_logic_vector(width downto 0);
			dig1: out std_logic_vector (3 downto 0);
			dig2: out std_logic_vector (3 downto 0);
			dig3: out std_logic_vector (3 downto 0);
			dig4: out std_logic_vector (3 downto 0)
	);

end post_div;

architecture Behavioral of post_div is
begin

process (ent)
variable result : integer :=0;
variable a : integer :=0;
begin
result:=to_integer(unsigned(ent));
a:=result/1000;
dig1<=std_logic_vector( to_unsigned(a,4));
result:=result-1000*a;
a:=result/100;
dig2<=std_logic_vector( to_unsigned(a,4));
result:=result-100*a;
a:=result/10;
dig3<=std_logic_vector( to_unsigned(a,4));
result:=result-10*a;
dig4<=std_logic_vector( to_unsigned(result,4));

	
end process;




end Behavioral;

