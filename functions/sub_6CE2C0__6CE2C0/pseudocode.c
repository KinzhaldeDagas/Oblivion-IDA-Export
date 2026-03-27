_DWORD *__thiscall sub_6CE2C0(_DWORD *this, int a2, _DWORD **a3)
{
  _DWORD *result; // eax
  void *v5; // ecx
  Ni2DBuffer *v6; // eax

  result = (_DWORD *)sub_6D0530(a2, a3);
  v5 = (void *)*(this + 0xF);
  if ( v5 )
  {
    v6 = (Ni2DBuffer *)sub_700710(v5, a3);
    return NiSmartPointer_Set__((Ni2DBuffer **)(a2 + 0x3C), v6);
  }
  return result;
}
