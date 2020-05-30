/* user and group to drop privileges to */
static const char *user  = "cezary";
static const char *group = "cezary";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#88C0D0",     /* after initialization */
	[INPUT] =  "#5E81AC",   /* during input */
	[FAILED] = "#BF616A",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 10;
