_DWORD *__thiscall sub_6ED2B0(float *this, int a2, _DWORD **a3)
{
  _DWORD *result; // eax
  int v5; // ebx
  void *v6; // ecx
  Ni2DBuffer *v7; // eax

  result = (_DWORD *)sub_733850(this, a2, a3); /*0x6ed2c0*/
  *(float *)(a2 + 0x10) = *(this + 4); /*0x6ed2c8*/
  *(float *)(a2 + 0xC) = *(this + 3); /*0x6ed2ce*/
  v5 = *(_DWORD *)(a2 + 0x14); /*0x6ed2d1*/
  if ( v5 != *((_DWORD *)this + 5) ) /*0x6ed2d7*/
  {
    if ( v5 ) /*0x6ed2db*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x6ed2e1*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6ed2f7*/
    }
    result = *((_DWORD **)this + 5); /*0x6ed2f9*/
    *(_DWORD *)(a2 + 0x14) = result; /*0x6ed2fe*/
    if ( result ) /*0x6ed301*/
      result = (_DWORD *)InterlockedIncrement(result + 1); /*0x6ed307*/
  }
  v6 = *((void **)this + 6); /*0x6ed30d*/
  if ( v6 ) /*0x6ed312*/
  {
    v7 = (Ni2DBuffer *)sub_700710(v6, a3); /*0x6ed315*/
    return NiSmartPointer_Set__((Ni2DBuffer **)(a2 + 0x18), v7); /*0x6ed31e*/
  }
  return result; /*0x6ed323*/
}
