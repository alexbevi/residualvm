/* Residual - A 3D game interpreter
 *
 * Residual is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 *
 */

#ifndef GRIM_SOUND_COMPONENT_H
#define GRIM_SOUND_COMPONENT_H

#include "engines/grim/costume/component.h"

namespace Grim {

class SoundComponent : public Component {
public:
	SoundComponent(Component *parent, int parentID, const char *name, tag32 tag);
	~SoundComponent();

	void setKey(int val);
	void reset();

private:
	Common::String _soundName;
};

} // end of namespace Grim

#endif
