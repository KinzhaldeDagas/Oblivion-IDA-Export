signed int __thiscall sub_4C1030(_DWORD *this, signed int a2, int a3)
{
  int v3; // ecx
  char v4; // al

  v3 = *(this + 9); /*0x4c1030*/
  if ( !v3 || a2 >= 4 || a3 + 0x12 >= 0x121 || a3 - 0x12 < 0 ) /*0x4c1055*/
    return 0; /*0x4c1075*/
  v4 = NiTMap_GetAt((_DWORD *)(0x10 * a2 + v3 + 0x54), a3, &a2); /*0x4c1064*/
  return v4 != 0 ? a2 : 0;
}
