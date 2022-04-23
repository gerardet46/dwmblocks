#define SC(ruta) "$HOME/.config/dwmblocks/" #ruta
//
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/             /*Update Interval*/ /*Update Signal*/
    {"",	SC("spotify.sh"),	5,	            0 },
    {"",	SC("mpc.sh"),    	5,	            13 },
    {"",	SC("checkupdates.sh"),	3600,               0 },
    {"",	SC("mail.sh"),      	300,                12 },
    {"",	SC("volume.sh"),	0,	            10 },
    {"",	SC("batt.sh"),	        15,	            0 },
    {"",	SC("cpu.sh"),           1,	            0 },
    {"",	SC("memoria.sh"),	10,	            0 },
    {"",	SC("date.sh"),	        15,	            0 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 5;
