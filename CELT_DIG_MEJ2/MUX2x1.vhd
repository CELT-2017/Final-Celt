----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:38:57 11/29/2017 
-- Design Name: 
-- Module Name:    MUX2x1 - Behavioral 
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

entity MUX2x1 is
    Port ( E0 : in  STD_LOGIC_VECTOR (13 downto 0);
           E1 : in  STD_LOGIC_VECTOR (13 downto 0);
           S : in  STD_LOGIC;
           Y : out  STD_LOGIC_VECTOR (13 downto 0));
end MUX2x1;

architecture Behavioral of MUX2x1 is

begin

Y <= E0 when S='1' else  -- se selecciona la salida en función de las entradas
     E1 when S='0';

end Behavioral;

