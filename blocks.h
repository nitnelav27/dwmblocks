//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.config/scripts/clock",						60,		5},
	
	{"    ", "~/.config/scripts/asource",					0,		9},
	
	{"    ", "~/.config/scripts/volume",					0,		10},

	{"    ", "~/.config/scripts/weather",					10800,		11},

	{"    ", "~/.config/scripts/kblayout",					0,		12},
	//{"", "~/bin/statusbar/battery",						5,		0},

	//{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	//{"", "~/bin/statusbar/clock",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
