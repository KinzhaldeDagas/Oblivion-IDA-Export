int __cdecl sub_79B700(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_79B160((char **)v4, (char **)v3);
    *(float *)(v4 + 0x10) = *(float *)(v3 + 0x10);
    v3 += 0x30;
    v4 += 0x30;
    *(float *)(v4 - 0x1C) = *(float *)(v3 - 0x1C);
    *(_BYTE *)(v4 - 0x18) = *(_BYTE *)(v3 - 0x18);
    *(float *)(v4 - 0x14) = *(float *)(v3 - 0x14);
    *(float *)(v4 - 0x10) = *(float *)(v3 - 0x10);
    *(float *)(v4 - 0xC) = *(float *)(v3 - 0xC);
    *(_DWORD *)(v4 - 8) = *(_DWORD *)(v3 - 8);
    *(_DWORD *)(v4 - 4) = *(_DWORD *)(v3 - 4);
  }
  while ( v3 != a2 );
  return v4;
}
