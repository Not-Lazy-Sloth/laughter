#include <math.h>
#include <vector>
using namespace std;

#ifndef _MATRIX_H_
#define _MATRIX_H_

vector<vector<int> > sumMatrix(vector<vector<int> >arr1, vector<vector<int> >arr2) {

	vector<vector<int> > answer;

	for (int i = 0; i < arr1.size(); i++) {
		vector<int> element(arr1[0].size(), 0); //Create array
		answer.push_back(element); // Add array
	}

	for (int i = 0; i < arr1.size(); i++) {
		for (int j = 0; j < arr1[0].size(); j++) {
			answer[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	return answer;
}

vector<vector<int> > subMatrix(vector<vector<int> >arr1, vector<vector<int> >arr2) {

	vector<vector<int> > answer;

	for (int i = 0; i < arr1.size(); i++) {
		vector<int> element(arr1[0].size(), 0); //Create array
		answer.push_back(element); // Add array
	}

	for (int i = 0; i < arr1.size(); i++) {
		for (int j = 0; j < arr1[0].size(); j++) {
			answer[i][j] = arr1[i][j] - arr2[i][j];
		}
	}

	return answer;
}

vector<vector<int> > productMatrix(vector<vector<int> >arr1, vector<vector<int> >arr2) {

	vector<vector<int> > answer;

	for (int i = 0; i < arr1.size(); i++) {
		vector<int> element(arr2[0].size(), 0); //Create array
		answer.push_back(element); // Add array
	}

	if (arr1[0].size() != arr2.size()) {
		return answer;
	}

	for (int row = 0; row < arr1.size(); row++) {
		for (int col = 0; col < arr1[0].size(); col++) {
			for (int idx = 0; idx < arr1[0].size(); idx++) {
				answer[row][col] += arr1[row][idx] * arr2[idx][col];
			}
		}
	}

	return answer;
}

#endif _MATRIX_H_