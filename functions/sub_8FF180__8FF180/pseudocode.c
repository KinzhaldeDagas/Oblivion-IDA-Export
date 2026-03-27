_BYTE *__cdecl sub_8FF180(int a1, _BYTE *a2, int a3)
{
  sub_939B60(a2 + 0xC, a3);
  *(_BYTE *)(a1 + 2) = a2[0xE];
  return &a2[(2 * ((unsigned __int8)a2[0xC] + (unsigned __int8)a2[0xD] + 4 * (unsigned __int8)a2[0xE]) + 0x1F)
           & 0xFFFFFFF0];
}
