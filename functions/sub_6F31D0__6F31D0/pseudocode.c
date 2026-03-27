char **__cdecl sub_6F31D0(int a1, int a2, int a3)
{
  int i; // esi
  char **result; // eax

  for ( i = a1; i != a2; i += 0x2C )
  {
    sub_414420(i, (_DWORD *)a3, 0, 0xFFFFFFFF);
    result = sub_6F2610((char **)(i + 0x1C), (char **)(a3 + 0x1C));
  }
  return result;
}
