/*
 Copyright (C) 2009-2013 wxLauncher Team
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "ModDefaults.h"

#include <wx/intl.h>

#include "global/ids.h"

const wxString DEFAULT_MOD_LAUNCHER_INFO_TEXT				(_("No information available."));

const long DEFAULT_MOD_RESOLUTION_MIN_HORIZONTAL_RES =		640;
const long DEFAULT_MOD_RESOLUTION_MIN_VERTICAL_RES =		480;

const wxString DEFAULT_MOD_RECOMMENDED_LIGHTING_NAME		(_T("Baseline recommended"));
const wxString DEFAULT_MOD_RECOMMENDED_LIGHTING_FLAGSET
	(_T("-ambient_factor 75 -spec_exp 11 -spec_point 0.6 -spec_static 0.8 -spec_tube 0.4 -ogl_spec 60"));
