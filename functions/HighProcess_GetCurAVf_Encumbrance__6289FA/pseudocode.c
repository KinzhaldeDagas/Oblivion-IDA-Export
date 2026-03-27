// positive sp value has been detected, the output may be wrong!
double __userpurge HighProcess_GetCurAVf__::Encumbrance@<st0>(char a1@<zf>, int a2@<esi>, int a3, int a4, int a5)
{
  if ( !a1 )
    return HighProcess_GetCurAVf__::Paralyzed(a3, a4, a5);
  if ( *(float *)(a2 + 0x294) < 0.0 )
    *(float *)(a2 + 0x294) = MiddleProcess_GetAVfCur((_DWORD *)a2, a3, 0xB, a5);
  return *(float *)(a2 + 0x294);
}
