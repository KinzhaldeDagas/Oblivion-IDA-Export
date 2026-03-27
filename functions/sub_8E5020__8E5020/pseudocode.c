char *__cdecl sub_8E5020(__m128 *a1, __m128 *a2, signed int a3)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x80, 0x1E);
  *(_WORD *)(v3 + 4) = 0x80;
  return sub_8E4730((char *)v3, a1, a2, a3);
}
