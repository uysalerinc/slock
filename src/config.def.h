/* user and group to drop privileges to */
static const char *user  = "wisteria";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
static const char* background_image = "";

/* enable or disable (1 means enable, 0 disable) bell sound when password is incorrect */
static const int xbell = 0;

/*Font settings for the time text*/
static const float textsize=64.0;
static const char* textfamily="Hack Nerd Font Mono";
// #caa9fa
/* static const double textcolorred=0.792; */
/* static const double textcolorgreen=0.662; */
/* static const double textcolorblue=0.980; */

// #574b70
static const double textcolorred=0.341;
static const double textcolorgreen=0.294;
static const double textcolorblue=0.439;
