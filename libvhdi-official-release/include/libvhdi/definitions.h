/*
 * Definitions for libvhdi
 *
 * Copyright (C) 2012-2021, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBVHDI_DEFINITIONS_H )
#define _LIBVHDI_DEFINITIONS_H

#include <libvhdi/types.h>

#define LIBVHDI_VERSION			20210425

/* The version string
 */
#define LIBVHDI_VERSION_STRING		"20210425"

/* The access flags definitions
 * bit 1        set to 1 for read access
 * bit 2        set to 1 for write access
 * bit 3-8      not used
 */
enum LIBVHDI_ACCESS_FLAGS
{
	LIBVHDI_ACCESS_FLAG_READ	= 0x01,
/* Reserved: not supported yet */
	LIBVHDI_ACCESS_FLAG_WRITE	= 0x02
};

/* The file access macros
 */
#define LIBVHDI_OPEN_READ		( LIBVHDI_ACCESS_FLAG_READ )
/* Reserved: not supported yet */
#define LIBVHDI_OPEN_WRITE		( LIBVHDI_ACCESS_FLAG_WRITE )
/* Reserved: not supported yet */
#define LIBVHDI_OPEN_READ_WRITE		( LIBVHDI_ACCESS_FLAG_READ | LIBVHDI_ACCESS_FLAG_WRITE )

/* The file type definitions
 */
enum LIBVHDI_FILE_TYPES
{
	LIBVHDI_FILE_TYPE_UNKNOWN	= 0,
	/* Virtual Hard Disk version 1 (VHD) file */
	LIBVHDI_FILE_TYPE_VHD		= 1,
	/* Virtual Hard Disk version 2 (VHDX) file */
	LIBVHDI_FILE_TYPE_VHDX		= 2
};

/* The Virtual Hard Disk version 1 (VHD) disk type definitions
 */
enum LIBVHDI_DISK_TYPES
{
	LIBVHDI_DISK_TYPE_FIXED		= 0x00000002UL,
	LIBVHDI_DISK_TYPE_DYNAMIC	= 0x00000003UL,
	LIBVHDI_DISK_TYPE_DIFFERENTIAL	= 0x00000004UL
};

#endif /* !defined( _LIBVHDI_DEFINITIONS_H ) */

