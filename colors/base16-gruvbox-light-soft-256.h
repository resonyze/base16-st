// Base16 Gruvbox light, soft dark - simple terminal color setup
// Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
static const char *colorname[] = {
	/* Normal colors */
	"#f2e5bc", /*  0: Base 00 - Black   */
	"#9d0006", /*  1: Base 08 - Red     */
	"#79740e", /*  2: Base 0B - Green   */
	"#b57614", /*  3: Base 0A - Yellow  */
	"#076678", /*  4: Base 0D - Blue    */
	"#8f3f71", /*  5: Base 0E - Magenta */
	"#427b58", /*  6: Base 0C - Cyan    */
	"#504945", /*  7: Base 05 - White   */

	/* Bright colors */
	"#bdae93", /*  8: Base 03 - Bright Black */
	"#9d0006", /*  9: Base 08 - Red          */
	"#79740e", /* 10: Base 0B - Green        */
	"#b57614", /* 11: Base 0A - Yellow       */
	"#076678", /* 12: Base 0D - Blue         */
	"#8f3f71", /* 13: Base 0E - Magenta      */
	"#427b58", /* 14: Base 0C - Cyan         */
	"#282828", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#af3a03", /* 16: Base 09 */
	"#d65d0e", /* 17: Base 0F */
	"#ebdbb2", /* 18: Base 01 */
	"#d5c4a1", /* 19: Base 02 */
	"#665c54", /* 20: Base 04 */
	"#3c3836", /* 21: Base 06 */

	[255] = 0,

	[256] = "#504945", /* default fg: Base 05 */
	[257] = "#f2e5bc", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
