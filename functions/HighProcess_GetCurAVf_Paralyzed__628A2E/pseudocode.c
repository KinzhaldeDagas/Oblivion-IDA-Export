// positive sp value has been detected, the output may be wrong!
double __userpurge HighProcess_GetCurAVf__::Paralyzed@<st0>(
        int a1@<eax>,
        _DWORD *a2@<ecx>,
        _DWORD *a3@<esi>,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax
  double result; // st7

  if ( a1 == 0x30 ) /*0x628a31*/
  {
    if ( (int)a3[0xA6] < 0 ) /*0x628a3a*/
    {
      MiddleProcess_GetAViCur(a2, a4, 0x30, a6); /*0x628a47*/
      a3[0xA6] = v6; /*0x628a4c*/
    }
    return (double)(int)a3[0xA6]; /*0x628a52*/
  }
  else
  {
    HighProcess_GetCurAVf__::OtherAV(a1, a3, a4, a5, a6); /*0x628a31*/
  }
  return result; /*0x628a59*/
}
