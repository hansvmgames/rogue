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

#include "status.h"

static _Thread_local enum status_code status_code = STATUS_CODE_OK; 

void set_status(enum status_code _status_code) {
  status_code = _status_code;
}

enum status_code get_status() {
  return status_code;
}

void clear_status() {
  status_code = STATUS_CODE_OK;
}
