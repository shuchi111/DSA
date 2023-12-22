/*
Algorithm:
Maximize Meetings (maxMeetings):
1. Create a vector of pairs (v), where each pair contains the end time, start time, and the meeting number.
2. Sort the vector v based on end times in ascending order.
3. Initialize an empty vector ans to store the meeting numbers.
4. Initialize a variable end with the end time of the first meeting.
5.Add the meeting number of the first meeting to the ans vector.
6.  Iterate through the remaining meetings (starting from the second meeting):
If the start time of the current meeting is greater than the end time (end) of the previous meeting:
Add the meeting number of the current meeting to the ans vector.
Update the end variable to the end time of the current meeting.
7. Sort the ans vector.
8. Return the sorted ans vector.

*/

//Solution 
class Solution {
public:
    vector<int> maxMeetings(int N, vector<int>& S, vector<int>& F) {
        // Create a vector of pairs, where each pair contains end time, start time, and meeting number.
        vector<pair<pair<int, int>, int>> v;
        for (int i = 0; i < N; i++) {
            v.push_back({{F[i], S[i]}, i + 1});
        }

        // Sort the vector based on end times in ascending order.
        sort(v.begin(), v.end());

        // Initialize an empty vector to store the meeting numbers.
        vector<int> ans;

        // Initialize the end time with the end time of the first meeting.
        int end = v[0].first.first;

        // Add the meeting number of the first meeting to the ans vector.
        ans.push_back(v[0].second);

        // Iterate through the remaining meetings.
        for (int i = 1; i < N; i++) {
            // If the start time of the current meeting is greater than the end time of the previous meeting.
            if (v[i].first.second > end) {
                // Add the meeting number of the current meeting to the ans vector.
                ans.push_back(v[i].second);
                // Update the end time to the end time of the current meeting.
                end = v[i].first.first;
            }
        }

        // Sort the ans vector.
        sort(ans.begin(), ans.end());

        // Return the sorted ans vector.
        return ans;
    }
};
