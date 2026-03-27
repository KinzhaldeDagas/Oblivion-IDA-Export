int __thiscall sub_724260(int this, float a2)
{
  bool v3; // zf
  char v4; // al
  int result; // eax
  int v6; // ecx
  _DWORD *v7; // edi

  v3 = (*(_BYTE *)(this + 0xDC) & 1) == 0;
  *(float *)(this + 0xE4) = a2;
  if ( v3 )
    return sub_70A190(this, a2);
  v4 = *(_BYTE *)(this + 0x18);
  ++*(_DWORD *)(this + 0xE8);
  sub_47C930((_DWORD *)this, a2, (v4 & 8) != 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x74))(this);
  result = *(_DWORD *)(this + 0xE0);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(this + 0xB0);
    v7 = *(_DWORD **)(v6 + 4 * result);
    if ( v7 )
    {
      sub_709E30(*(unsigned __int16 **)(v6 + 4 * result), a2);
      NiTArray_SetAt(
        (NiTArray_NiTexturingPropertyMap *)(this + 0xEC),
        *(_DWORD *)(this + 0xE0),
        (_DWORD *)(this + 0xE8));
      *(_DWORD *)(this + 0x20) = v7[8];
      *(_DWORD *)(this + 0x24) = v7[9];
      *(_DWORD *)(this + 0x28) = v7[0xA];
      result = v7[0xB];
      *(_DWORD *)(this + 0x2C) = result;
    }
  }
  return result;
}
