/*
 * synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2015 Synergy Si Ltd.
 * 
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file LICENSE that should have accompanied this file.
 * 
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "PluginVersion.h"

#include <string.h>

static const int kpluginCount = 1;
static const char kUnknownVersion[] = "unknown";
static const char* s_pluginNames[] = {"ns"};
static const char* s_pluginVersions[] = {"1.2"};

const char* pluginVersion(const char* pluginName)
{
	for (int i = 0; i < kpluginCount; i++) {
		if (strcmp(pluginName, s_pluginNames[i]) == 0) {
			return s_pluginVersions[i];
			break;
		}
	}

	return kUnknownVersion;
}