//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//add update signal to 34
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/statusbar/sb-music",		1,		10},
	{"", "~/.local/bin/statusbar/sb-mail",		180,		8},
	{"", "~/.local/bin/statusbar/sb-rss",		0,		7},
	{"", "~/.local/bin/statusbar/sb-package",	0,		9},
	{"", "~/.local/bin/statusbar/sb-torrent", 	20,		6},
	{"", "~/.local/bin/statusbar/sb-task",   	10,		5},
	{"", "~/.local/bin/statusbar/sb-forecast",	10800,		11},
	{"", "~/.local/bin/statusbar/sb-doppler",	10800,		12},
	{"", "~/.local/bin/statusbar/sb-network",	1,		4},
	{"", "~/.local/bin/statusbar/sb-volume", 	0,		3},
	{"", "~/.local/bin/statusbar/sb-battery",	5,		2},
	{"", "~/.local/bin/statusbar/sb-date",  	60,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "\0";
/*static unsigned int delimLen = 5;*/
