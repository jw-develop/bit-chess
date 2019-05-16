/*
 * Copyright (C) 2013-2016 Phokham Nonava
 *
 * Use of this source code is governed by the MIT license that can be
 * found in the LICENSE file.
 */

#include "square.h"
#include "file.h"
#include "rank.h"

#include "gtest/gtest.h"

using namespace pulse;

TEST(squaretest, testValues) {
	for (auto rank : Rank::values) {
		for (auto file : File::values) {
			int square = Square::valueOf(file, rank);

			EXPECT_EQ(file, Square::getFile(square));
			EXPECT_EQ(rank, Square::getRank(square));
		}
	}
}
