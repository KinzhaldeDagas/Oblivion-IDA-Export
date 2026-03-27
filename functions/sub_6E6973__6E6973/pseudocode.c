// positive sp value has been detected, the output may be wrong!
int __userpurge sub_6E6973@<eax>(int a1@<edi>, int a2@<esi>, _DWORD **a3)
{
  if ( a2 )
  {
    NiBSplineInterpolator::NiBSplineInterpolator((NiBSplineInterpolator *)a2, 0, 0);
    *(_DWORD *)a2 = &NiBSplineColorInterpolator::`vftable';
    *(float *)(a2 + 0x1C) = 0.0;
    *(float *)(a2 + 0x20) = 0.0;
    *(float *)(a2 + 0x24) = 0.0;
    *(float *)(a2 + 0x28) = 0.0;
    *(_DWORD *)(a2 + 0x2C) = 0xFFFF;
  }
  else
  {
    a2 = 0;
  }
  sub_6ED2B0((float *)a1, a2, a3);
  *(_DWORD *)(a2 + 0x1C) = *(_DWORD *)(a1 + 0x1C);
  *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(a1 + 0x20);
  *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(a1 + 0x24);
  *(_DWORD *)(a2 + 0x28) = *(_DWORD *)(a1 + 0x28);
  *(_DWORD *)(a2 + 0x2C) = *(_DWORD *)(a1 + 0x2C);
  return a2;
}
