char __thiscall sub_590740(int *this, _DWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // eax

  if ( !*(this + 9) )
    return 0;
  v3 = *(this + 0x10);
  if ( !v3 || !a2 )
    return 0;
  if ( !NiTMap_GetAt((_DWORD *)(v3 + 0x58), (int)a2, &a2) )
    return 0;
  v4 = a2;
  if ( !a2 )
    return 0;
  v5 = *(this + 0x11);
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 0x44) == 1 )
      sub_590D20(this, flt_A6B040);
    sub_6C9CB0(*(this + 0x11), 0.0, 0);
  }
  if ( v4[0x11] )
    sub_6C9CB0((int)v4, 0.0, 0);
  if ( !sub_470B20(v4, 0, 1, 1.0, 0.0, 0) )
    return 0;
  *(_WORD *)(*(this + 0x10) + 8) |= 8u;
  *(this + 0x11) = (int)v4;
  return 1;
}
