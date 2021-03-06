/*
 * This file is part of INAV
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

#define MSP2_COMMON_TZ              0x1001  //out message   Gets the TZ offset for the local time (returns: minutes(i16))
#define MSP2_COMMON_SET_TZ          0x1002  //in message    Sets the TZ offset for the local time (args: minutes(i16))
#define MSP2_COMMON_SETTING         0x1003  //in/out message   Returns the value for a setting
#define MSP2_COMMON_SET_SETTING     0x1004  //in message    Sets the value for a setting
