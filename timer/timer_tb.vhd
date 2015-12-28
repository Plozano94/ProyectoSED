--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:59:09 11/29/2015
-- Design Name:   
-- Module Name:   /home/pablo/timer/timer_tb.vhd
-- Project Name:  timer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: timer
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY timer_tb IS
END timer_tb;
 
ARCHITECTURE behavior OF timer_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT timer
    PORT(
         entry : IN  std_logic;
         disp : OUT  real;
         clk : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal entry : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal disp : real;

   -- Clock period definitions
   constant clk_period : time := 0.02 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: timer PORT MAP (
          entry => entry,
          disp => disp,
          clk => clk
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		for i in 1 to 5000 loop
      wait for 0.04 ns;	
		entry<='1';
		wait for 0.04 ns;
		entry<='0';
		end loop;

      

    assert false
	 report "Fin de la simulacion"
	 severity failure;
   end process;

END;
