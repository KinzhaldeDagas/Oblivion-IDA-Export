signed int __thiscall sub_4C1030(_DWORD *this, signed int a2, int a3)
{
  int v3; // ecx
  char v4; // al

  v3 = *(this + 9);
  if ( !v3 || a2 >= 4 || a3 + 0x12 >= 0x121 || a3 - 0x12 < 0 )
    return 0;
  v4 = NiTMap_GetAt((_DWORD *)(0x10 * a2 + v3 + 0x54), a3, &a2);
  return v4 != 0 ? a2 : 0;
}
