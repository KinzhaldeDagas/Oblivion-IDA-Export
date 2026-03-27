int __cdecl sub_79B860(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 0x30;
    v4 -= 0x30;
    sub_79B160((char **)v4, (char **)v3);
    *(float *)(v4 + 0x10) = *(float *)(v3 + 0x10);
    *(float *)(v4 + 0x14) = *(float *)(v3 + 0x14);
    *(_BYTE *)(v4 + 0x18) = *(_BYTE *)(v3 + 0x18);
    *(float *)(v4 + 0x1C) = *(float *)(v3 + 0x1C);
    *(float *)(v4 + 0x20) = *(float *)(v3 + 0x20);
    *(float *)(v4 + 0x24) = *(float *)(v3 + 0x24);
    *(_DWORD *)(v4 + 0x28) = *(_DWORD *)(v3 + 0x28);
    *(_DWORD *)(v4 + 0x2C) = *(_DWORD *)(v3 + 0x2C);
  }
  while ( v3 != a1 );
  return v4;
}
