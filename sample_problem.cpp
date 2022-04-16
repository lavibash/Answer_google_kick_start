/*You have gathered N bags of candy and you want to distribute the candy amongst M kids. The i-th bag contains Ci pieces of candy. 
You want to make sure that every kid get the same amount of candy and that the number of pieces of candy they receive is the greatest possible. 
You can open each bag and mix all pieces of candy before distributing them to the kids.
How many pieces of candy will remain after you share the candy amongst kids, based on the rules described above? */


/*
2 - Test cases
---------------
7 3
1 2 3 4 5 6 7
-------------------
5 10
7 7 7 7 7
*/

#include <iostream>

using namespace std;

int main(){
    int num_testcases;
    cin >> num_testcases;
    //Add validation check like not negative or
    // within boundries

    for (int t = 1; t <= num_testcases; ++t){
        int num_of_bags, num_of_kids = 0;
        long num_of_all_candies = 0;
        //cin ends on white space ' ' \t \n
        cin>>num_of_bags;
        cin>>num_of_kids;

        int num_of_candies_in_bag = 0;
        for (int j=0; j< num_of_bags; j++){
            cin>>num_of_candies_in_bag;
            num_of_all_candies +=num_of_candies_in_bag;
        }
        cout<<"Case #"<<t<<": "<<num_of_all_candies%num_of_kids<<endl;
    }
    return 0;
}
