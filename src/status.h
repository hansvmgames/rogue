/*
 * This file is part of rogue.
 * rogue is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
 * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 * rogue is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License along with rogue. 
 * If not, see <https://www.gnu.org/licenses/>. 
 */

#ifndef STATUS_H
#define STATUS_H

/**
 * A status code used to describe the general state of the program
 */
enum status_code {
		  /**
		   * Everything is OK
		   */
		  STATUS_CODE_OK
};

/**
 * Sets the status code for this thread
 * \param status_code: the status code to set
 */
void set_status(enum status_code status_code);

/**
 * Gets the status code from this thread
 * \returns the status code associated with this thread
 */
enum status_code get_status();

/**
 * Clears the status code for this thread
 */
void clear_status();

#endif
