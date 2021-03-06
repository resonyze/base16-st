// Base16 Hopscotch dark - simple terminal color setup
// Jan T. Sott
static const char *colorname[] = {
	/* Normal colors */
	"#322931", /*  0: Base 00 - Black   */
	"#dd464c", /*  1: Base 08 - Red     */
	"#8fc13e", /*  2: Base 0B - Green   */
	"#fdcc59", /*  3: Base 0A - Yellow  */
	"#1290bf", /*  4: Base 0D - Blue    */
	"#c85e7c", /*  5: Base 0E - Magenta */
	"#149b93", /*  6: Base 0C - Cyan    */
	"#b9b5b8", /*  7: Base 05 - White   */

	/* Bright colors */
	"#797379", /*  8: Base 03 - Bright Black */
	"#fd8b19", /* 16: Base 09 */
	"#433b42", /* 18: Base 01 */
	"#5c545b", /* 19: Base 02 */
	"#989498", /* 20: Base 04 */
	"#d5d3d5", /* 21: Base 06 */
	"#b33508", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#b9b5b8", /* default fg: Base 05 */
	[257] = "#322931", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
