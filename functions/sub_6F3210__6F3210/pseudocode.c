unsigned int *__cdecl sub_6F3210(int a1, int a2, _DWORD *a3)
{
  int i; // esi
  unsigned int *result; // eax

  for ( i = a1; i != a2; i += 0x30 )
  {
    sub_414420(i, a3, 0, 0xFFFFFFFF);
    *(_DWORD *)(i + 0x1C) = a3[7];
    result = sub_6F2770((unsigned int *)(i + 0x20), (int)(a3 + 8));
  }
  return result;
}
