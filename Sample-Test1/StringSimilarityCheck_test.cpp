#include "pch.h"
#include "../Project21/StringSimilarityCheck.cpp"

class StringSimilarityCheckFixture : public testing::Test {
public:
	StringSimilarityCheck similarityChecker;
};

TEST_F(StringSimilarityCheckFixture, TestScoreWhenTwoStringSizeSame) {
	EXPECT_EQ(60, similarityChecker.getSimilarityLengthScore("ASD", "DSA"));
}

TEST_F(StringSimilarityCheckFixture, TestScoreWhenTwoStringIsTwoTImesDifference) {
	EXPECT_EQ(0, similarityChecker.getSimilarityLengthScore("A", "BB"));
}

TEST_F(StringSimilarityCheckFixture, TestScoreWhenTwoStringGetDifference) {
	EXPECT_EQ(20, similarityChecker.getSimilarityLengthScore("AAABB", "BAA"));
	EXPECT_EQ(30, similarityChecker.getSimilarityLengthScore("AA", "AAE"));
}
