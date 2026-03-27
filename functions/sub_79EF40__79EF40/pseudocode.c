int __cdecl sub_79EF40(int a1, int a2, char *a3)
{
  int result; // eax
  int v4; // esi
  _DWORD v5[12]; // [esp-38h] [ebp-48h] BYREF
  char *v6; // [esp-8h] [ebp-18h]
  int v7; // [esp-4h] [ebp-14h]

  result = (a2 - a1) / 0x30;
  if ( result > 1 )
  {
    v4 = a2 - 0x1C;
    do
    {
      v7 = 0;
      v6 = a3;
      sub_79AD70(v5, v4 - 0x14);
      sub_79C380(
        a1,
        v4 - 0x14,
        v4 - 0x14,
        v5[0],
        v5[1],
        v5[2],
        v5[3],
        *(float *)(v4 - 4),
        *(float *)v4,
        *(_BYTE *)(v4 + 4),
        *(float *)(v4 + 8),
        *(float *)(v4 + 0xC),
        *(float *)(v4 + 0x10),
        *(_DWORD *)(v4 + 0x14),
        *(_DWORD *)(v4 + 0x18),
        v6);
      v4 -= 0x30;
      result = (v4 + 0x1C - a1) / 0x30;
    }
    while ( result > 1 );
  }
  return result;
}
