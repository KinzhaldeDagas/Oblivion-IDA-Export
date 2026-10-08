float *__stdcall sub_74F910(__int16 a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  float *v5; // eax
  NiObject *v7; // eax

  if ( a1 ) /*0x74f918*/
  {
    if ( a1 == 1 ) /*0x74f948*/
    {
      v7 = (NiObject *)FormHeapAlloc(0x34u); /*0x74f94c*/
      if ( v7 ) /*0x74f956*/
        return (float *)sub_6EB460(v7, a2, a4, a5); /*0x74f971*/
    }
  }
  else
  {
    v5 = (float *)FormHeapAlloc(0x34u); /*0x74f91c*/
    if ( v5 ) /*0x74f926*/
      return sub_6D2480(v5, a2, a4, a5); /*0x74f941*/
  }
  return 0; /*0x74f941*/
}
