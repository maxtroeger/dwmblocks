//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/bar_modules/sb_music",	1,		10},
	{"", "~/.local/bin/bar_modules/sb_mail",	10,		8},
	{"", "~/.local/bin/bar_modules/sb_feed",	10,		7},
	{"", "~/.local/bin/bar_modules/sb_pack",	10,		9},
	{"", "~/.local/bin/bar_modules/sb_tor", 	3,		6},
	{"", "~/.local/bin/bar_modules/sb_jobs",	0,		5},
	{"", "~/.local/bin/bar_modules/sb_traf",	1,		4},
	{"", "~/.local/bin/bar_modules/sb_vol", 	0,		3},
	{"", "~/.local/bin/bar_modules/sb_batt",	15,		2},
	{"", "~/.local/bin/bar_modules/sb_date",	60,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "\0";
/*static unsigned int delimLen = 5;*/
