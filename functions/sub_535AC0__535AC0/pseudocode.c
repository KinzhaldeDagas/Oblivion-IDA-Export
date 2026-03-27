double __thiscall sub_535AC0(_DWORD *this)
{
  _DWORD **v2; // ecx
  float *v3; // eax
  int v5; // esi

  if ( !this )
    return (float)0.0;
  v2 = (_DWORD **)*(this + 2);
  if ( v2 )
  {
    v3 = (float *)sub_8A98D0(v2);
    if ( v3 )
      return (float)sub_89DA90(v3);
  }
  v5 = *(this + 2);
  if ( !v5 )
    return (float)0.0;
  return (float)sub_89DA90((float *)*(_DWORD *)(v5 + 0x50));
}
