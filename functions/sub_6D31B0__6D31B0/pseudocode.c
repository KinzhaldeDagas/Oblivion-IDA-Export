// Finds the sorted insertion index for a requested key time using the registered record stride. Returns false when an exact timestamp already exists, preventing duplicate boundary insertion.
bool __cdecl NiAnimationKey_FindInsertionIndex(float a1, int a2, unsigned int a3, unsigned int *a4, unsigned __int8 a5)
{
  bool result; // al
  double v6; // st7
  unsigned int v7; // ecx
  double v8; // st6
  float *v9; // ecx
  unsigned int v10; // edx

  result = 1; /*0x6d31bc*/
  *a4 = 0; /*0x6d31be*/
  if ( a3 ) /*0x6d31c4*/
  {
    v6 = a1; /*0x6d31c6*/
    while ( 1 ) /*0x6d31d9*/
    {
      v7 = *a4 * a5; /*0x6d31d9*/
      v8 = *(float *)(v7 + a2); /*0x6d31dc*/
      v9 = (float *)(a2 + v7); /*0x6d31e3*/
      if ( v8 >= v6 ) /*0x6d31e8*/
        break; /*0x6d31e8*/
      v10 = *a4 + 1; /*0x6d31ea*/
      *a4 = v10; /*0x6d31ef*/
      if ( v10 >= a3 ) /*0x6d31f1*/
        return 1; /*0x6d31f1*/
    }
    return *v9 > v6; /*0x6d320a*/
  }
  return result; /*0x6d31f9*/
}
