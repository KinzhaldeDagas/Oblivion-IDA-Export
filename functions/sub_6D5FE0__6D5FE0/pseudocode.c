// Clones the interpolator, replaces cloned authored data with NiTransformData_CloneTimeRange(start,end), resets all three key cursors, and balances the temporary data reference.
int __thiscall NiTransformInterpolator_CloneTimeRange(_DWORD *this, int a2, int a3)
{
  int result; // eax
  void *v5; // ecx
  int v6; // esi
  int v7; // edi
  bool v8; // zf

  result = NiInterpolator_CloneTimeRange(this, a2, a3); /*0x6d6017*/
  v5 = (void *)*(this + 0xB); /*0x6d601c*/
  v6 = result; /*0x6d6023*/
  if ( v5 ) /*0x6d6025*/
  {
    NiTransformData_CloneTimeRange(v5, &a3, *(float *)&a2, *(float *)&a3); /*0x6d603e*/
    sub_6D5AD0((_DWORD *)v6, a3); /*0x6d604e*/
    v7 = a3; /*0x6d6053*/
    v8 = a3 == 0; /*0x6d6057*/
    *(_WORD *)(v6 + 0x30) = 0; /*0x6d6059*/
    *(_WORD *)(v6 + 0x32) = 0; /*0x6d605d*/
    *(_WORD *)(v6 + 0x34) = 0; /*0x6d6061*/
    if ( !v8 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6d6073*/
    {
      if ( v7 ) /*0x6d607f*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6d6089*/
    }
    return v6; /*0x6d608b*/
  }
  return result; /*0x6d608d*/
}
