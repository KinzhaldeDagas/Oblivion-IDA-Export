int __thiscall sub_724320(int this, NiProperty *a2)
{
  bool v3; // zf
  char v4; // al
  int result; // eax
  int v6; // edi

  v3 = (*(_BYTE *)(this + 0xDC) & 1) == 0;
  *(float *)(this + 0xE4) = *(float *)&a2;
  if ( v3 )
    return sub_70A280((NiNode *)this, a2);
  v4 = *(_BYTE *)(this + 0x18);
  ++*(_DWORD *)(this + 0xE8);
  sub_47C930((_DWORD *)this, *(float *)&a2, (v4 & 8) != 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x74))(this);
  result = *(_DWORD *)(this + 0xE0);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * result);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 0x18) & 2) != 0 )
        (*(void (__thiscall **)(int, NiProperty *))(*(_DWORD *)v6 + 0x68))(v6, a2);
      NiTArray_SetAt(
        (NiTArray_NiTexturingPropertyMap *)(this + 0xEC),
        *(_DWORD *)(this + 0xE0),
        (_DWORD *)(this + 0xE8));
      *(_DWORD *)(this + 0x20) = *(_DWORD *)(v6 + 0x20);
      *(_DWORD *)(this + 0x24) = *(_DWORD *)(v6 + 0x24);
      *(_DWORD *)(this + 0x28) = *(_DWORD *)(v6 + 0x28);
      result = *(_DWORD *)(v6 + 0x2C);
      *(_DWORD *)(this + 0x2C) = result;
    }
  }
  return result;
}
