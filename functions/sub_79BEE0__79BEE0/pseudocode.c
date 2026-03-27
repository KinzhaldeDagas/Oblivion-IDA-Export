char **__cdecl sub_79BEE0(int a1, int a2, int a3)
{
  int i; // esi
  char **result; // eax

  for ( i = a1; i != a2; *(_DWORD *)(i - 4) = *(_DWORD *)(a3 + 0x2C) )
  {
    result = sub_79B160((char **)i, (char **)a3);
    *(float *)(i + 0x10) = *(float *)(a3 + 0x10);
    i += 0x30;
    *(float *)(i - 0x1C) = *(float *)(a3 + 0x14);
    LOBYTE(result) = *(_BYTE *)(a3 + 0x18);
    *(_BYTE *)(i - 0x18) = (_BYTE)result;
    *(float *)(i - 0x14) = *(float *)(a3 + 0x1C);
    *(float *)(i - 0x10) = *(float *)(a3 + 0x20);
    *(float *)(i - 0xC) = *(float *)(a3 + 0x24);
    *(_DWORD *)(i - 8) = *(_DWORD *)(a3 + 0x28);
  }
  return result;
}
