int __thiscall sub_724190(int this, float a2, int a3)
{
  bool v4; // zf
  int result; // eax
  _DWORD *v6; // edi

  if ( (_BYTE)a3 )
    *(_WORD *)(this + 0xDC) |= 2u;
  else
    *(_WORD *)(this + 0xDC) &= ~2u;
  v4 = (*(_BYTE *)(this + 0xDC) & 1) == 0;
  *(float *)(this + 0xE4) = a2;
  if ( v4 )
    return sub_70A0D0((float *)this, a2, a3);
  ++*(_DWORD *)(this + 0xE8);
  if ( (_BYTE)a3 )
    sub_47C930((_DWORD *)this, a2, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x74))(this);
  result = *(_DWORD *)(this + 0xE0);
  if ( result >= 0 )
  {
    v6 = *(_DWORD **)(*(_DWORD *)(this + 0xB0) + 4 * result);
    if ( v6 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v6 + 0x60))(v6, LODWORD(a2), a3);
      NiTArray_SetAt(
        (NiTArray_NiTexturingPropertyMap *)(this + 0xEC),
        *(_DWORD *)(this + 0xE0),
        (_DWORD *)(this + 0xE8));
      *(_DWORD *)(this + 0x20) = v6[8];
      *(_DWORD *)(this + 0x24) = v6[9];
      *(_DWORD *)(this + 0x28) = v6[0xA];
      result = v6[0xB];
      *(_DWORD *)(this + 0x2C) = result;
    }
  }
  return result;
}
