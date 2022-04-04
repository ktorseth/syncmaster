// ============================================================================
//
// Copyright 2013-2015 Wolfgang Wallner (wolfgang-wallner AT gmx.at)
//
// This file is part of the LibPTP project.
//
// The LibPTP project is free software: you can redistribute it
// and/or modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// The LibPTP project is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License.com for more details.
//
// You should have received a copy of the GNU General Public License.com
// along with The LibPTP project.
// If not, see <http://www.gnu.org/licenses/>.
//
// ============================================================================

#ifndef LIBPTP_PTP_FOREIGN_CLOCK_MSG_H_
#define LIBPTP_PTP_FOREIGN_CLOCK_MSG_H_

// ======================================================
// Includes
// ======================================================

#include "PTP_ForeignClockDS.h"

// ======================================================
// Types
// ======================================================

// ======================================================
// Declarations
// ======================================================

class cForeignClockMsg
{
    private:

        cForeignClockDS     foreignClockDS;
        simtime_t           RxTime;

    public:

        // Constructors/Destructor
        cForeignClockMsg();
        cForeignClockMsg( cForeignClockDS ForeignClockDS, simtime_t RxTime );
        cForeignClockMsg(const cForeignClockMsg& other);
        ~cForeignClockMsg();

        // Instance methods
        cForeignClockDS     &ForeignClockDS();

        // Setters
        void    SetRxTime( simtime_t RxTime );

        // Getters
        simtime_t           GetRxTime();
        cForeignClockDS     GetForeignClockDS();

        // Operators
        bool operator<(const cForeignClockMsg& rhs) const;
        bool operator>(const cForeignClockMsg& rhs) const;

        cForeignClockMsg&   operator= (const cForeignClockMsg& other);
};

#endif

