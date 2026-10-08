// positive sp value has been detected, the output may be wrong!
int __userpurge sub_6E6973@<eax>(int a1@<edi>, int a2@<esi>, _DWORD **a3)
{
  if ( a2 ) /*0x6e697f*/
  {
    NiBSplineInterpolator::NiBSplineInterpolator((NiBSplineInterpolator *)a2, 0, 0); /*0x6e6987*/
    *(_DWORD *)a2 = &NiBSplineColorInterpolator::`vftable'; /*0x6e698e*/
    *(float *)(a2 + 0x1C) = 0.0; /*0x6e6994*/
    *(float *)(a2 + 0x20) = 0.0; /*0x6e6997*/
    *(float *)(a2 + 0x24) = 0.0; /*0x6e699a*/
    *(float *)(a2 + 0x28) = 0.0; /*0x6e699d*/
    *(_DWORD *)(a2 + 0x2C) = 0xFFFF; /*0x6e69a0*/
  }
  else
  {
    a2 = 0; /*0x6e69a9*/
  }
  sub_6ED2B0((float *)a1, a2, a3); /*0x6e69bb*/
  *(_DWORD *)(a2 + 0x1C) = *(_DWORD *)(a1 + 0x1C); /*0x6e69c3*/
  *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(a1 + 0x20); /*0x6e69c9*/
  *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(a1 + 0x24); /*0x6e69cf*/
  *(_DWORD *)(a2 + 0x28) = *(_DWORD *)(a1 + 0x28); /*0x6e69d5*/
  *(_DWORD *)(a2 + 0x2C) = *(_DWORD *)(a1 + 0x2C); /*0x6e69db*/
  return a2; /*0x6e69f1*/
}
