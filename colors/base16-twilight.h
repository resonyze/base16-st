// Base16 Twilight dark - simple terminal color setup
// David Hart (https://github.com/hartbit)
static const char *colorname[] = {
	/* Normal colors */
	"#1e1e1e", /*  0: Base 00 - Black   */
	"#cf6a4c", /*  1: Base 08 - Red     */
	"#8f9d6a", /*  2: Base 0B - Green   */
	"#f9ee98", /*  3: Base 0A - Yellow  */
	"#7587a6", /*  4: Base 0D - Blue    */
	"#9b859d", /*  5: Base 0E - Magenta */
	"#afc4db", /*  6: Base 0C - Cyan    */
	"#a7a7a7", /*  7: Base 05 - White   */

	/* Bright colors */
	"#5f5a60", /*  8: Base 03 - Bright Black */
	"#cda869", /* 16: Base 09 */
	"#323537", /* 18: Base 01 */
	"#464b50", /* 19: Base 02 */
	"#838184", /* 20: Base 04 */
	"#c3c3c3", /* 21: Base 06 */
	"#9b703f", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#a7a7a7", /* default fg: Base 05 */
	[257] = "#1e1e1e", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
