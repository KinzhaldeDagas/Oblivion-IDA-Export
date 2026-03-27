_DWORD *__thiscall sub_6ED2B0(float *this, int a2, _DWORD **a3)
{
  _DWORD *result; // eax
  int v5; // ebx
  void *v6; // ecx
  Ni2DBuffer *v7; // eax

  result = (_DWORD *)sub_733850(this, a2, a3);
  *(float *)(a2 + 0x10) = *(this + 4);
  *(float *)(a2 + 0xC) = *(this + 3);
  v5 = *(_DWORD *)(a2 + 0x14);
  if ( v5 != *((_DWORD *)this + 5) )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    result = *((_DWORD **)this + 5);
    *(_DWORD *)(a2 + 0x14) = result;
    if ( result )
      result = (_DWORD *)InterlockedIncrement(result + 1);
  }
  v6 = *((void **)this + 6);
  if ( v6 )
  {
    v7 = (Ni2DBuffer *)sub_700710(v6, a3);
    return NiSmartPointer_Set__((Ni2DBuffer **)(a2 + 0x18), v7);
  }
  return result;
}
