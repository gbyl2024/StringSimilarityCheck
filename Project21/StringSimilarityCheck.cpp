#include<iostream>
#include<algorithm>
using namespace std;

class StringSimilarityChecker {
public:
	int getSimilarityLengthScore(string input1, string input2) { 
		int ALength = getLongLength(input1, input2);
		int BLength = getShortLength(input1, input2);

		if (isDoubleGapLength(ALength, BLength)) return 0;

		return getLengthScore(ALength, BLength);
	}

	int getLongLength(string input1, string input2) {
		if (input1.length() > input2.length())return input1.length();
		return input2.length();
	}

	int getShortLength(string input1, string input2) {
		if (input1.length() > input2.length())return input2.length();
		return input1.length();
	}

	int getLengthScore(int ALength, int BLength)
	{
		int Gap = ALength - BLength;
		return MAX_LENGTH_SCORE - MAX_LENGTH_SCORE * Gap / BLength;
	}

	bool isDoubleGapLength(int ALength, int BLength)
	{
		if (ALength >= 2 * BLength)return true;
		return false;
	}
private:
	const int MAX_LENGTH_SCORE{ 60 };
};
