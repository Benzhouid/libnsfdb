/*
 * The file header definition of a Notes Storage Facility (NSF) database file
 *
 * Copyright (C) 2010-2015, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _NSFDB_FILE_HEADER_H )
#define _NSFDB_FILE_HEADER_H

#include <common.h>
#include <types.h>

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct nsfdb_file_header nsfdb_file_header_t;

struct nsfdb_file_header
{
	/* The signature
	 * Consists of 2 bytes
	 * Contains: 0x1a 0x00
	 */
	uint8_t signature[ 2 ];

	/* The database header size
	 * Consists of 4 bytes
	 */
	uint8_t database_header_size[ 4 ];
};

#if defined( __cplusplus )
}
#endif

#endif

