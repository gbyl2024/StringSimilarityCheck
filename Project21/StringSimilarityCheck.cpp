#include<iostream>
#include<algorithm>
using namespace std;

class StringSimilarityChecker {
public:
	int getSimilarityLengthScore(string A, string B) { 
		int ALength = A.length();
		int BLength = B.length();
		int Gap = ALength - BLength;

		if (isDoubleGapLength(ALength, BLength)) return 0;

		return getLengthScore(Gap, BLength, ALength);
	}

	int getLengthScore(int Gap, int BLength, int ALength)
	{
		if (Gap > 0) {
			return MAX_LENGTH_SCORE - MAX_LENGTH_SCORE * Gap / BLength;
		}

		return MAX_LENGTH_SCORE + MAX_LENGTH_SCORE * Gap / ALength;
	}

	bool isDoubleGapLength(int ALength, int BLength)
	{
		if (ALength >= 2 * BLength)return true;
		if (BLength >= 2 * ALength)return true;
		return false;
	}
private:
	const int MAX_LENGTH_SCORE{ 60 };
};
