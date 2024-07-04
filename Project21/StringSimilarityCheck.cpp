#include<iostream>

using namespace std;

class StringSimilarityChecker {
public:
	int getSimilarityLengthScore(string A, string B) {
		int ALength = A.length();
		int BLength = B.length();
		int Gap = ALength - BLength;

		if (Gap > 0) {
			return 60 - 60 * Gap / BLength;
		}
		
		return 60 + 60 * Gap / ALength;
	}

};
