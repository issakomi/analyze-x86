/*      analyze-x86
 *
 *      Copyright 2019 Mihail Isakov <mihail.isakov@gmail.com>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */

/*
 * https://en.wikipedia.org/wiki/Bit_Manipulation_Instruction_Sets
 *
 *
 * ABM (Advanced Bit Manipulation):
 * popcnt
 * lzcnt
 *
 * All AMD processors support both instructions or neither.
 * Intel considers POPCNT as part of SSE4.2 and LZCNT as part of BMI1,
 * POPCNT has a separate CPUID flag; however, Intel uses AMD's
 * ABM flag to indicate LZCNT support.
 * 
 */

static const char *setpopcnt[] = {
	"popcnt",
	NULL
};

static const char *setbmi[] = {
	"andn",
	"bextr", // with register
	"blsi",
	"blsmsk",
	"blsr",
	/*
	https://stackoverflow.com/questions/43880227/why-does-tzcnt-work-for-my-sandy-bridge-processor
	"lzcnt",
	"tzcnt",
	*/
	NULL
};

static const char *setbmi2[] = {
	"bzhi",
	"mulx",
	"pdep",
	"pext",
	"rorx",
	"sarx",
	"shrx",
	"shlx",
	NULL
};

static const char *settbm[] = {
	"bextr", // with immediate
	"blcfill",
	"blci",
	"blcic",
	"blcs",
	"blsfill",
	"blsic",
	"t1mskc",
	"tzmsk",
	NULL
};
