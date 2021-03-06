// Base16 Mocha dark - simple terminal color setup
// Chris Kempson (http://chriskempson.com)
static const char *colorname[] = {
	/* Normal colors */
	"#3b3228", /*  0: Base 00 - Black   */
	"#cb6077", /*  1: Base 08 - Red     */
	"#beb55b", /*  2: Base 0B - Green   */
	"#f4bc87", /*  3: Base 0A - Yellow  */
	"#8ab3b5", /*  4: Base 0D - Blue    */
	"#a89bb9", /*  5: Base 0E - Magenta */
	"#7bbda4", /*  6: Base 0C - Cyan    */
	"#d0c8c6", /*  7: Base 05 - White   */

	/* Bright colors */
	"#7e705a", /*  8: Base 03 - Bright Black */
	"#d28b71", /* 16: Base 09 */
	"#534636", /* 18: Base 01 */
	"#645240", /* 19: Base 02 */
	"#b8afad", /* 20: Base 04 */
	"#e9e1dd", /* 21: Base 06 */
	"#bb9584", /* 17: Base 0F */
	"#f5eeeb", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#d0c8c6", /* default fg: Base 05 */
	[257] = "#3b3228", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
