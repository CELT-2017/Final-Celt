----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:26:02 11/29/2017 
-- Design Name: 
-- Module Name:    deco_dia_sem - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity deco_dia_sem is
    Port ( CODIGO : in  STD_LOGIC_VECTOR (2 downto 0);
           DIA : out  STD_LOGIC_VECTOR(6 downto 0));
end deco_dia_sem;


architecture Behavioral of deco_dia_sem is

begin

with CODIGO select DIA <=
			"1000000" when "000", --lunes
			"0100000" when "001", --martes
			"0010000" when "010", --miercoles
			"0001000" when "011", --jueves
			"0000100" when "100", --viernes
			"0000010" when "101", --sabado
			"0000001" when "110", --domingo
			"0000000" when others;


end Behavioral;

