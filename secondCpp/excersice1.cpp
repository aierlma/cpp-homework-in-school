# include <iostream>
int main()
{
    using namespace std;
    cout << " Enter the number of seconds: ";
    long long seconds;
    cin >> seconds;
    const int year_seconds =  24 * 60 * 60;
    int days = seconds / year_seconds;
    int hours = (seconds % 86400) / 3600;
    int minutes = (seconds % 3600) / 60;
    int n_seconds = seconds % 60;
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << n_seconds << " seconds " << endl;
    return 0;
    
}