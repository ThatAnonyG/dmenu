/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;
static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;    /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"monospace:size=10"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#C6D0F5", "#1E1E2E"},
    [SchemeNormHighlight] = {"#74C7EC", "#1E1E2E"},
    [SchemeSel] = {"#1E1E2E", "#87B0F9"},
    [SchemeSelHighlight] = {"#C6D0F5", "#87B0F9"},
    [SchemeOut] = {"#1E1E2E", "#F9E2AF"},
    [SchemeOutHighlight] = {"#F38BA8", "#F9E2AF"},
    [SchemeMid] = {"#C6D0F5", "#313244"},
    [SchemeMidHighlight] = {"#74C7EC", "#313244"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 25;
static unsigned int min_lineheight = 25;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
