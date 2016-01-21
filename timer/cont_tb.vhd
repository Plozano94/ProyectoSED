--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:04:44 01/10/2016
-- Design Name:   
-- Module Name:   C:/Users/Pablo Lozano/Desktop/timer/cont_tb.vhd
-- Project Name:  timer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cont
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
 
ENTITY cont_tb IS
END cont_tb;
 
ARCHITECTURE behavior OF cont_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cont
    PORT(
         clk : IN  std_logic;
         sal : OUT  std_logic_vector(25 downto 0);
         ent_prescaler : IN  std_logic;
         ent : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal ent_prescaler : std_logic := '0';
   signal ent : std_logic := '0';

 	--Outputs
   signal sal : std_logic_vector(25 downto 0);

   -- Clock period definitions
   constant clk_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cont PORT MAP (
          clk => clk,
          sal => sal,
          ent_prescaler => ent_prescaler,
          ent => ent
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
     	
		wait for 30 ns;	
		ent_prescaler<='0';
		for x in 0 to 3 loop
			wait for 30 ns;
			ent<='1';
			wait for 30 ns;
			ent<='0';
		end loop;	
		ent_prescaler<='1';
		wait for 30 ns;
		ent_prescaler<='0';
		wait for 30 ns;
		for x in 0 to 15 loop
			wait for 30 ns;
			ent<='1';
			wait for 30 ns;
			ent<='0';
		end loop;	
		ent_prescaler<='1';
		wait for 30 ns;
		ent_prescaler<='0';
		wait for 30 ns;
		for x in 0 to 63 loop
			wait for 30 ns;
			ent<='1';
			wait for 30 ns;
			ent<='0';
		end loop;	
		ent_prescaler<='1';
		wait for 30 ns;
		ent_prescaler<='0';
		wait for 30 ns;
		for x in 0 to 127 loop
			wait for 30 ns;
			ent<='1';
			wait for 30 ns;
			ent<='0';
		end loop;	
		ent_prescaler<='1';
		wait for 30 ns;
		ent_prescaler<='0';
		for x in 0 to 255 loop
			wait for 30 ns;
			ent<='1';
			wait for 30 ns;
			ent<='0';
		end loop;	
		ent_prescaler<='1';
		wait for 30 ns;
		ent_prescaler<='0';
		for x in 0 to 1023 loop
			wait for 30 ns;
			ent<='1';
			wait for 30 ns;
			ent<='0';
		end loop;	
		ent_prescaler<='1';
		wait for 30 ns;
		ent_prescaler<='0';
		for x in 0 to 4095 loop
			wait for 30 ns;
			ent<='1';
			wait for 30 ns;
			ent<='0';
		end loop;	
		ent_prescaler<='1';

      wait for clk_period*10;
		
	 assert false
	 report "Fin de la simulacion"
	 severity failure;
   
     
   end process;

END;
