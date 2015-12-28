--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:03:22 12/28/2015
-- Design Name:   
-- Module Name:   /home/pablo/timer/mux_tb.vhd
-- Project Name:  timer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mux
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
 
ENTITY mux_tb IS
END mux_tb;
 
ARCHITECTURE behavior OF mux_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mux
    PORT(
         clk : IN  std_logic;
         dig1 : IN  std_logic_vector(3 downto 0);
         dig2 : IN  std_logic_vector(3 downto 0);
         dig3 : IN  std_logic_vector(3 downto 0);
         dig4 : IN  std_logic_vector(3 downto 0);
         num : OUT  std_logic_vector(3 downto 0);
         digctrl : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal dig1 : std_logic_vector(3 downto 0) := (others => '0');
   signal dig2 : std_logic_vector(3 downto 0) := (others => '0');
   signal dig3 : std_logic_vector(3 downto 0) := (others => '0');
   signal dig4 : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal num : std_logic_vector(3 downto 0);
   signal digctrl : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux PORT MAP (
          clk => clk,
          dig1 => dig1,
          dig2 => dig2,
          dig3 => dig3,
          dig4 => dig4,
          num => num,
          digctrl => digctrl
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
      wait for 100 ns;	
		dig1<="0011";
		dig2<="0101";
		dig3<="1000";
		dig4<="0011";
      wait for clk_period*10;

    assert false
	 report "Fin de la simulacion"
	 severity failure;

      
   end process;

END;
