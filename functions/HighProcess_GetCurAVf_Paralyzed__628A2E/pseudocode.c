// positive sp value has been detected, the output may be wrong!
double __userpurge HighProcess_GetCurAVf__::Paralyzed@<st0>(
        int a1@<eax>,
        _DWORD *a2@<ecx>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax
  double result; // st7

  if ( a1 == 0x30 )
  {
    if ( *(int *)(a3 + 0x298) < 0 )
    {
      MiddleProcess_GetAViCur(a2, a4, 0x30, a6);
      *(_DWORD *)(a3 + 0x298) = v6;
    }
    return (double)*(int *)(a3 + 0x298);
  }
  else
  {
    HighProcess_GetCurAVf__::OtherAV(a4, a5, a6);
  }
  return result;
}
