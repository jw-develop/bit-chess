/*
 * Copyright (C) 2013-2016 Phokham Nonava
 *
 * Use of this source code is governed by the MIT license that can be
 * found in the LICENSE file.
 */

#include "file.h"

#include "gtest/gtest.h"

using namespace pulse;

TEST(filetest, testValues) {
	for (auto file : File::values) {
		EXPECT_EQ(file, File::values[file]);
	}
}
