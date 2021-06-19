/* Enter your solutions in this file */
#include <stdio.h>
int max(int n[], int a)

{

  int max_tn = n[0];

  for (int i = 1; i < a; i++)

  {

    if (max_tn < n[i])

      max_tn = n[i];

  }

  return max_tn;

}

int mode(int a[], int n)

{

    int maxcount = 0, maxvalue = 0;

    for (int i = 0; i < n; i++)

    {

        int count = 0;

        for (int j = 0; j < n; j++)

        {

            if (a[i] == a[j])

                count = count + 1;

        }

        if (count > maxcount)

        {

            maxcount = count;

            maxvalue = a[i];

        }

    }

    return maxvalue;

}
