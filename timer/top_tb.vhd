--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:35:59 01/03/2016
-- Design Name:   
-- Module Name:   /home/pablo/timer/top_tb.vhd
-- Project Name:  timer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top
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
 
ENTITY top_tb IS
END top_tb;
 
ARCHITECTURE behavior OF top_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         clk_gl : IN  std_logic;
         ent_gl : IN  std_logic;
         sel1_gl : IN  std_logic;
         sel2_gl : IN  std_logic;
         sel3_gl : IN  std_logic;
         num_gl : OUT  std_logic_vector(3 downto 0);
         digctrl_gl : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_gl : std_logic := '0';
   signal ent_gl : std_logic := '0';
   signal sel1_gl : std_logic := '0';
   signal sel2_gl : std_logic := '0';
   signal sel3_gl : std_logic := '0';

 	--Outputs
   signal num_gl : std_logic_vector(3 downto 0);
   signal digctrl_gl : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_gl_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          clk_gl => clk_gl,
          ent_gl => ent_gl,
          sel1_gl => sel1_gl,
          sel2_gl => sel2_gl,
          sel3_gl => sel3_gl,
          num_gl => num_gl,
          digctrl_gl => digctrl_gl
        );

   -- Clock process definitions
   clk_gl_process :process
   begin
		clk_gl <= '0';
		wait for clk_gl_period/2;
		clk_gl <= '1';
		wait for clk_gl_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		sel1_gl<='1';
for x in 0 to 3 loop
			wait for 1 ns;
			ent_gl<='1';
			wait for 1 ns;
			ent_gl<='0';
		end loop;	
      wait for clk_gl_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
