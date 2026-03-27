_DWORD *__thiscall sub_723A20(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *result; // eax
  Ni2DBuffer *v4; // eax

  result = (_DWORD *)sub_7416F0(a2);
  if ( a2[0x36] >= 0xA00010Cu )
  {
    v4 = (Ni2DBuffer *)sub_7124A0(a2);
    return NiSmartPointer_Set__(this + 0x3F, v4);
  }
  return result;
}
