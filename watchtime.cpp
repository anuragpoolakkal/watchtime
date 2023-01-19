/* This program is used to calculate YouTube watch time with the input of video duration and number of views considering that viewers watched 100% of the video. 

The output of program will be like this:

YOUTUBE WATCHHOUR CALCULATOR 

Select calculation method 
1. Calculate watch time
2. Calculate views
3. Calculate video duration
Choose your calculation (1 / 2 / 3): 

Choose an option to perform the calculation you needed.*/

// DEVELOPED BY Anurag - anuragp.ml

#include <iostream>
using namespace std;
int main()
{
    int selection;
    float watchhour,duration,hr,min,sec,views;
    cout<<"YOUTUBE WATCHTIME CALCULATOR \n\n";
    cout<<"Select calculation method \n1. Calculate watch time\n2. Calculate views\n3. Calculate video duration\nChoose your calculation (1 / 2 / 3): ";
    cin>>selection;
    if (selection==1)
    {
        cout<<"Enter video duration (Ex: hour minute second): ";
        cin>>hr>>min>>sec;
        cout<<"Enter number of views: ";
        cin>>views;
        watchhour = views*(hr+(min / 60)+(sec / 3600));
        if (watchhour == 1)
        {
            cout<<watchhour<<" watchhour";
        }
        else
        {
            cout<<watchhour<<" watchhours";
        }
    }
    else if (selection == 2)
    {
        cout<<"Enter video duration (Ex: hour minute second): ";
        cin>>hr>>min>>sec;
        cout<<"Enter number of watchhours: ";
        cin>>watchhour;
        views = watchhour/(hr+(min / 60)+(sec / 3600));
        if (views == 1)
        {
            cout<<views<<" view";
        }
        else
        {
            cout<<views<<" views";
        }
    }
    else if (selection == 3)
    {
        cout<<"Enter number of watchhours: ";
        cin>>watchhour;
        cout<<"Enter number of views: ";
        cin>>views;
        duration = watchhour/views;
        if (duration == 1)
        {
            cout<<"Duration ="<<duration<<" hour";
        }
        else
        {
            cout<<"Duration = "<<duration<<" hours OR "<<duration * 60<<" minutes OR "<<duration * 3600<<" seconds";
        }
    }
    else
    {
        cout<<"Invalid selection. Choose 1 / 2 / 3";
    }
    return 0;
}
