_DWORD *__cdecl sub_7A1000(char *a1, char *a2, _DWORD *a3)
{
  sub_7A0E60(a1, a2, a3);
  return &a3[0xFFFFFFFC * ((a2 - a1) >> 4)];
}
