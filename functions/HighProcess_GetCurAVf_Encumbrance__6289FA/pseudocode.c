// positive sp value has been detected, the output may be wrong!
double __userpurge HighProcess_GetCurAVf__::Encumbrance@<st0>(
        char a1@<zf>,
        int a2@<esi>,
        int a3@<eax>,
        _DWORD *a4@<ecx>,
        int a5,
        int a6,
        int a7)
{
  if ( !a1 ) /*0x6289fa*/
    return HighProcess_GetCurAVf__::Paralyzed(a3, a4, a2, a5, a6, a7); /*0x6289fb*/
  if ( *(float *)(a2 + 0x294) < 0.0 ) /*0x628a09*/
    *(float *)(a2 + 0x294) = MiddleProcess_GetAVfCur((_DWORD *)a2, a5, 0xB, a7); /*0x628a1e*/
  return *(float *)(a2 + 0x294); /*0x628a2b*/
}
