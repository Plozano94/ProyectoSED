--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:20:12 12/26/2015
-- Design Name:   
-- Module Name:   /home/pablo/timer/div_tb.vhd
-- Project Name:  timer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: div
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
 
ENTITY div_tb IS
END div_tb;
 
ARCHITECTURE behavior OF div_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT div
    PORT(
         ent : IN  std_logic_vector(7071 downto 0);
         sal : OUT  std_logic_vector(7071 downto 0);
         sel1 : IN  std_logic;
         sel2 : IN  std_logic;
         sel3 : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal ent : std_logic_vector(7071 downto 0) := (others => '0');
   signal sel1 : std_logic := '0';
   signal sel2 : std_logic := '0';
   signal sel3 : std_logic := '0';
	signal clock : std_logic := '0';

 	--Outputs
   signal sal : std_logic_vector(7071 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: div PORT MAP (
          ent => ent,
          sal => sal,
          sel1 => sel1,
          sel2 => sel2,
          sel3 => sel3
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
		ent<=std_logic_vector( to_unsigned(500000,sal'length));
		wait for 100 ns;	
		sel3<='1';
		ent<=std_logic_vector( to_unsigned(500000,sal'length));
		wait for 100 ns;	
		sel2<='1';
		ent<=std_logic_vector( to_unsigned(500000,sal'length));
		wait for 100 ns;	
		sel1<='1';
		wait for 100 ns;

      wait for clock_period*10;
		
      -- insert stimulus here 

      wait;
   end process;

END;
