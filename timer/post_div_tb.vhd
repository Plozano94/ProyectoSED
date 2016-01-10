--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:15:02 12/28/2015
-- Design Name:   
-- Module Name:   /home/pablo/timer/post_div_tb.vhd
-- Project Name:  timer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: post_div
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY post_div_tb IS
END post_div_tb;
 
ARCHITECTURE behavior OF post_div_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT post_div
    PORT(
         ent : IN  std_logic_vector(7071 downto 0);
         dig1 : OUT  std_logic_vector(3 downto 0);
         dig2 : OUT  std_logic_vector(3 downto 0);
         dig3 : OUT  std_logic_vector(3 downto 0);
         dig4 : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ent : std_logic_vector(7071 downto 0) := (others => '0');

 	--Outputs
   signal dig1 : std_logic_vector(3 downto 0);
   signal dig2 : std_logic_vector(3 downto 0);
   signal dig3 : std_logic_vector(3 downto 0);
   signal dig4 : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
	signal clock: std_logic;
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: post_div PORT MAP (
          ent => ent,
          dig1 => dig1,
          dig2 => dig2,
          dig3 => dig3,
          dig4 => dig4
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		ent<=std_logic_vector( to_unsigned(15,ent'length));
      wait for clock_period*10;

    assert false
	 report "Fin de la simulacion"
	 severity failure;

   end process;

END;
