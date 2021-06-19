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
