_DWORD *__cdecl sub_79B6B0(int a1, int a2, int a3)
{
  int i; // esi
  _DWORD *result; // eax

  for ( i = a1; i != a2; *(float *)(i - 4) = *(float *)(a3 + 0x28) )
  {
    result = sub_414420(i, (_DWORD *)a3, 0, 0xFFFFFFFF);
    *(float *)(i + 0x1C) = *(float *)(a3 + 0x1C);
    i += 0x2C;
    *(float *)(i - 0xC) = *(float *)(a3 + 0x20);
    *(float *)(i - 8) = *(float *)(a3 + 0x24);
  }
  return result;
}
