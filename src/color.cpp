/*
 * Copyright (C) 2013-2016 Phokham Nonava
 *
 * Use of this source code is governed by the MIT license that can be
 * found in the LICENSE file.
 */

#include "color.h"

namespace pulse {

const std::array<int, Color::VALUES_SIZE> Color::values = {
		WHITE, BLACK
};

int Color::opposite(int color) {
	switch (color) {
		case WHITE:
			return BLACK;
		case BLACK:
			return WHITE;
		default:
			throw std::exception();
	}
}

}
