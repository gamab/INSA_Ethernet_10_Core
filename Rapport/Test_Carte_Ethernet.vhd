--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:05:08 02/25/2015
-- Design Name:   
-- Module Name:   /home/mabille/Documents/4IR/FPGA-Proj/Ethernet_10_Core/Test_Carte_Ethernet.vhd
-- Project Name:  Ethernet_10_Core
-- Target Device:  
-- Tool versions,:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Ethernet
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
-- arithmetic functions, with Signed or Uns,igned values
--USE ieee.numeric_std.ALL;
 
ENTITY Test_Reception IS
END Test_Reception;
 
ARCHITECTURE behavior OF Test_Reception IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Ethernet
     Port ( RBYTEP : out  STD_LOGIC;
           RCLEANP : out  STD_LOGIC;
           RCVNGP : out  STD_LOGIC;
           RDATAO : out  STD_LOGIC_VECTOR (7 downto 0);
           RDATAI : in  STD_LOGIC_VECTOR (7 downto 0);
           RDONEP : out  STD_LOGIC;
           RENABP : in  STD_LOGIC;
           RSMATIP : out  STD_LOGIC;
           RSTARTP : out  STD_LOGIC;
           RESETN : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
			  TSOCOLP : out  STD_LOGIC;
           TABORTP : in  STD_LOGIC;
           TAVAILP : in  STD_LOGIC;
           TRNSMTP : out  STD_LOGIC;
           TDATAI : in  STD_LOGIC_VECTOR (7 downto 0);
           TDATAO : out  STD_LOGIC_VECTOR (7 downto 0);
           TDONEP : out  STD_LOGIC;
           TLASTP : in  STD_LOGIC;
           TREADDP : out  STD_LOGIC;
           TSTARTP : out  STD_LOGIC;
           TBACKOFF : out  STD_LOGIC;
           TSMCOLP : out  STD_LOGIC);
        
    END COMPONENT;   
    

   --Inputs
   signal RDATAI : std_logic_vector(7 downto 0) := (others => '0');
   signal RENABP : std_logic := '0';
   signal RESETN : std_logic := '0';
   signal CLK : std_logic := '0';
        
   signal TABORTP : std_logic := '0';
   signal TAVAILP : std_logic := '0';
   signal TDATAI : std_logic_vector(7 downto 0) := (others => '0');
   signal TLASTP : std_logic := '0';

 	--Outputs
   signal RBYTEP : std_logic;
   signal RCLEANP : std_logic;
   signal RCVNGP : std_logic;
   signal RDATAO : std_logic_vector(7 downto 0);
   signal RDONEP : std_logic;
   signal RSMATIP : std_logic;
   signal RSTARTP : std_logic;
   signal TSOCOLP : std_logic;
   signal TRNSMTP : std_logic;
   signal TDATAO : std_logic_vector(7 downto 0);
   signal TDONEP : std_logic;
   signal TREADDP : std_logic;
   signal TSTARTP : std_logic;
   signal TBACKOFF : std_logic;
   signal TSMCOLP : std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Ethernet PORT MAP (
          RBYTEP => RBYTEP,
          RCLEANP => RCLEANP,
          RCVNGP => RCVNGP,
          RDATAO => RDATAO,
          RDATAI => RDATAI,
          RDONEP => RDONEP,
          RENABP => RENABP,
          RSMATIP => RSMATIP,
          RSTARTP => RSTARTP,
          RESETN => RESETN,
          CLK => CLK,	
			 TSOCOLP => TSOCOLP,
			 TABORTP => TABORTP,
          TAVAILP => TAVAILP,
          TRNSMTP => TRNSMTP,
          TDATAI => TDATAI,
          TDATAO => TDATAO,
          TDONEP => TDONEP,
          TLASTP => TLASTP,
          TREADDP => TREADDP,
          TSTARTP => TSTARTP,
          TBACKOFF => TBACKOFF,
          TSMCOLP => TSMCOLP
        ); 

   -- Clock process definitions,
	CLK <= not CLK after 5 ns;

  -- Stimulus process
  

	-- insert stimulus here 
	--
	-- BONNE ADRESSE et ensuite mauvaise addresse
	--
	-- Tous les 8 tops d'horloge on change de case de la trame
--	-- RECEPTION TEST
--	RESETN <= '0','1' after 10 ns;
--	RENABP <= '0','1' after 30 ns;
--	
--	RDATAI <= "10101011" after 80 ns,
--	X"AA" after 160 ns,
--	X"BB" after 240 ns,
--	X"CC" after 320 ns,
--	X"DD" after 400 ns,
--	X"EE" after 480 ns,
--	X"FF" after 560 ns,
--	X"1A" after 640 ns,
--	X"2B" after 720 ns,
--	X"3C" after 800 ns,
--	X"4D" after 880 ns,
--	X"5E" after 960 ns,
--	X"6F" after 1040 ns,
--	X"00" after 1120 ns,
--	X"01" after 1200 ns,
--	X"02" after 1280 ns,
--	"10101011" after 1360 ns,
--	"00000000" after 1440 ns;

--	-- RECEPTION TEST DESTINATAIRE PAS NOUS
--	RESETN <= '0','1' after 10 ns;
--	RENABP <= '0','1' after 30 ns;
--	
--	RDATAI <= "10101011" after 80 ns,
--	X"AA" after 160 ns,
--	X"BB" after 240 ns,
--	X"CC" after 320 ns,
--	X"DD" after 400 ns,
--	X"00" after 480 ns,
--	X"FF" after 560 ns,
--	X"1A" after 640 ns,
--	X"2B" after 720 ns,
--	X"3C" after 800 ns,
--	X"4D" after 880 ns,
--	X"5E" after 960 ns,
--	X"6F" after 1040 ns,
--	X"00" after 1120 ns,
--	X"01" after 1200 ns,
--	X"02" after 1280 ns,
--	"10101011" after 1360 ns,
--	"10101011" after 1440 ns,
--	X"AA" after 1520 ns,
--	X"BB" after 1600 ns,
--	X"CC" after 1680 ns,
--	X"DD" after 1760 ns,
--	X"EE" after 1840 ns,
--	X"FF" after 1920 ns,
--	X"1A" after 2000 ns,
--	X"2B" after 2080 ns,
--	X"3C" after 2160 ns,
--	X"4D" after 2240 ns,
--	X"5E" after 2320 ns,
--	X"6F" after 2400 ns,
--	X"00" after 2480 ns,
--	X"01" after 2560 ns,
--	X"02" after 2640 ns,
--	"10101011" after 2720 ns,
--	"00000000" after 2800 ns;
	
--	-- TRANSMISSION TEST
--	RESETN <= '0','1' after 25 ns;
-- TAVAILP <= '0','1' after 90ns, '0' after 1440ns;
-- TABORTP <= '0';
--	TLASTP<='0','1' after 1280ns,'0' after 1360ns;
--	
--	TDATAI <= X"00",
--	X"1A" after 160ns,
--	X"2B" after 240ns,
--	X"3C" after 320ns,
--	X"4D" after 400ns,
--	X"5E" after 480ns,
--	X"6F" after 560ns,
--	X"00" after 640ns,
--	X"01" after 1200ns,
--	X"02" after 1280ns,
--	X"00" after 1360ns;

--	-- MULTIPLE TRANSMISSION TEST
--	RESETN <= '0','1' after 25 ns;
--	TAVAILP <= '0','1' after 90 ns, '0' after 1450 ns, '1' after 1530 ns, '0' after 2890 ns;
--	TABORTP <= '0';
--	TLASTP<='0','1' after 1280 ns,'0' after 1360 ns,'1' after 2720 ns,'0' after 2800 ns;
--	
--	TDATAI <= X"00",
--	X"1A" after 160 ns,
--	X"2B" after 240 ns,
--	X"3C" after 320 ns,
--	X"4D" after 400 ns,
--	X"5E" after 480 ns,
--	X"6F" after 560 ns,
--	X"00" after 640 ns,
--	X"01" after 1200 ns,
--	X"02" after 1280 ns,
--	X"00" after 1360 ns,
--	X"1A" after 1600 ns,
--	X"2B" after 1680 ns,
--	X"3C" after 1760 ns,
--	X"4D" after 1840 ns,
--	X"5E" after 1920 ns,
--	X"6F" after 2000 ns,
--	X"00" after 2080 ns,
--	X"01" after 2640 ns,
--	X"02" after 2720 ns,
--	X"00" after 2800 ns;

--	-- MULTIPLE TRANSMISSION TEST avec TABORT
--	RESETN <= '0','1' after 25 ns;
--	TAVAILP <= '0','1' after 90 ns, '0' after 1280 ns, '1' after 1530 ns, '0' after 2890 ns;
--	TLASTP<='0','1' after 1280 ns,'0' after 1360 ns,'1' after 2720 ns,'0' after 2800 ns;
--	TABORTP <= '0','1' after 880 ns ,'0' after 960 ns; --Test Arret brutal de transmission
--	
--	TDATAI <= X"00",
--	X"1A" after 160 ns,
--	X"2B" after 240 ns,
--	X"3C" after 320 ns,
--	X"4D" after 400 ns,
--	X"5E" after 480 ns,
--	X"6F" after 560 ns,
--	X"00" after 640 ns,
--	X"01" after 1200 ns,
--	X"02" after 1280 ns,
--	X"00" after 1360 ns,
--	X"1A" after 1600 ns,
--	X"2B" after 1680 ns,
--	X"3C" after 1760 ns,
--	X"4D" after 1840 ns,
--	X"5E" after 1920 ns,
--	X"6F" after 2000 ns,
--	X"00" after 2080 ns,
--	X"01" after 2640 ns,
--	X"02" after 2720 ns,
--	X"00" after 2800 ns;

--	-- TRANSMISSION TEST avec TABORT
--	RESETN <= '0','1' after 25 ns;
--	-- faudra mettre TAVAILP à 0
--   TAVAILP <= '0','1' after 90ns;
--   TABORTP <= '0','1' after 800ns ,'0' after 1000ns,'1' after 1160ns; --Test Arret brutal de transmission
--	
--	TDATAI <= X"00",
--	X"AA" after 160ns,
--	X"BC" after 240ns,
--	X"CD" after 320ns,
--	X"DE" after 400ns,
--	X"EF" after 480ns,
--	X"FA" after 560ns,
--	X"01" after 640ns,
--	X"11" after 880ns,
--	"10101011" after 960ns,
--	"10101111" after 1040ns, 
--	"11110000" after 1120ns,-- (560 + 80 + 480 = 1120 ns)à partir de mtn Ces données seront ensuite transmis
--	"00001111" after 1200ns,
--	"00110011" after 1280ns,
--	"11001100" after 1360ns,
--	"00000000" after 1440ns;

	--TLASTP<='0','1' after 1360ns;


----	-- Collision Test
--	RESETN <= '0','1' after 10ns;
--	-- faudra mettre TAVAILP à 0
--   TAVAILP <= '0','1' after 90ns, '0' after 1140 ns;
--   --TABORTP <= '0','1' after 800ns,'0' after 1000ns;
--	
--	TDATAI <= X"00",
--	X"AA" after 160ns,
--	X"CC" after 240ns,
--	X"BB" after 320ns,
--	X"DD" after 400ns,
--	X"FF" after 480ns,
--	X"EE" after 560ns,
--	X"01" after 640ns,
--	X"11" after 880ns,
--	"10101011" after 960ns,
--	"00000000" after 1040ns,
--	X"AA" after 1160ns,
--	X"CC" after 1240ns,
--	X"BB" after 1320ns,
--	X"DD" after 1400ns,
--	X"FF" after 1480ns,
--	X"EE" after 1560ns,
--	X"01" after 1640ns,
--	X"11" after 1880ns,
--	"10101011" after 1960ns,
--	"00000000" after 2040ns;
--	
--	RENABP <= '0','1' after 800ns;
--	RDATAI <= "00000000", 
--	"10101011" after 800ns,
--	X"AA" after 880ns,
--	X"BB" after 960ns,
--	X"CC" after 1040ns,
--	X"DD" after 1120ns,
--	X"EE" after 1200ns,
--	X"FF" after 1280ns,
--	X"01" after 1360ns,
--	X"11" after 1440ns,
--	"10101011" after 1520ns,
--	"00000000" after 1600ns, 
--	"10101011" after 1800ns,
--	X"AA" after 1880ns,
--	X"BB" after 1960ns,
--	X"CC" after 2040ns,
--	X"DD" after 2120ns,
--	X"EE" after 2200ns,
--	X"FF" after 2280ns,
--	X"01" after 2360ns,
--	X"11" after 2440ns,
--	"10101011" after 2520ns,
--	"00000000" after 2600ns;
--	
--	TLASTP<='0','1' after 1300ns, '0' after 1400 ns, '1' after 2300 ns, '0' after 2400 ns;

	-- Collision Multiple Test (310 ns de backoff max).
	RESETN <= '0','1' after 10 ns;
	TAVAILP <= '0','1' after 90 ns, '0' after 890 ns, '1' after 1530 ns, '0' after 1850 ns;
	TLASTP<='0';
	
	TDATAI <= X"00",
	X"1A" after 160 ns,
	X"2B" after 240 ns,
	X"3C" after 320 ns,
	X"4D" after 400 ns,
	X"5E" after 480 ns,
	X"6F" after 560 ns,
	X"00" after 640 ns,
	X"01" after 1200 ns,
	X"02" after 1280 ns,
	X"00" after 1360 ns,
	X"1A" after 1600 ns,
	X"2B" after 1680 ns,
	X"3C" after 1760 ns,
	X"4D" after 1840 ns,
	X"5E" after 1920 ns,
	X"6F" after 2000 ns,
	X"00" after 2080 ns,
	X"01" after 2640 ns,
	X"02" after 2720 ns,
	X"00" after 2800 ns;
	
	RENABP <= '0','1' after 800 ns;
	RDATAI <= "00000000", 
	X"AB" after 800 ns,
	X"AA" after 880 ns,
	X"BB" after 960 ns,
	"10101010" after 1040 ns,
	"10101010" after 1120 ns,
	"10101010" after 1200 ns,
	"10101010" after 1280 ns,
	X"00" after 1360 ns,
	X"AB" after 1760 ns,
	X"AA" after 1840 ns,
	X"BB" after 1920 ns,
	"10101010" after 2000 ns,
	"10101010" after 2080 ns,
	"10101010" after 2160 ns,
	"10101010" after 2240 ns,
	X"00" after 2320 ns;
	
	
END;
