/*
Copyright (C) 2012, Juan Antonio Aldea Armenteros
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

/*
 * ppm.h
 *
 *  Created on: 22/04/2012
 *      Author: Juan Antonio Aldea Armenteros
 */

#ifndef PPM_H_
#define PPM_H_

int write_pgm(char *path, int height, int width, int grey_levels, unsigned char data[]);
int write_ppm(char *path, int height, int width, int grey_levels, unsigned char data[]);

#endif /* PPM_H_ */
