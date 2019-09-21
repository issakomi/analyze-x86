/*      analyze-x86
 *
 *      Copyright 2016 Ivan Shapovalov <intelfx100@gmail.com>
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
 */

static const char *setbmi[] = {
	"andn",
	"bextr",
	"blsi",
	"blsmsk",
	"blsr",
	"tzcnt",
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
