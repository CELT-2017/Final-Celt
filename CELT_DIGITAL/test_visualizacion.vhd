--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_visualizacion IS
END test_visualizacion;
 
ARCHITECTURE behavior OF test_visualizacion IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT visualizacion
    PORT(
         E0 : IN  std_logic_vector(3 downto 0);
         E1 : IN  std_logic_vector(3 downto 0);
         E2 : IN  std_logic_vector(3 downto 0);
         E3 : IN  std_logic_vector(3 downto 0);
         CLK : IN  std_logic;
         SEG7 : OUT  std_logic_vector(6 downto 0);
         AN : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal E0 : std_logic_vector(3 downto 0) := (others => '0');
   signal E1 : std_logic_vector(3 downto 0) := (others => '0');
   signal E2 : std_logic_vector(3 downto 0) := (others => '0');
   signal E3 : std_logic_vector(3 downto 0) := (others => '0');
   signal CLK : std_logic := '0';

 	--Outputs
   signal SEG7 : std_logic_vector(6 downto 0);
   signal AN : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: visualizacion PORT MAP (
          E0 => E0,
          E1 => E1,
          E2 => E2,
          E3 => E3,
          CLK => CLK,
          SEG7 => SEG7,
          AN => AN
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
