#include "stats.h"
#include <algorithm>
#include <numeric>

    int main()
    {
        return 0;
    }

    Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>& vec)
    {
        //Implement statistics here
        int n = vec.size();
        Stats stat;
        if (n != 0)
        {
            // average of the vector elements 
            double avg = std::accumulate(vec.begin(), vec.end(), 0.0) / n;
            //std::cout << "Average: " << avg << endl;
            stat.average = avg;
            double max1 = *max_element(vec.begin(), vec.end());
            stat.max = max1;
            double min1 = *min_element(vec.begin(), vec.end());
            stat.min = min1;
        }
        return stat;
   
  }
