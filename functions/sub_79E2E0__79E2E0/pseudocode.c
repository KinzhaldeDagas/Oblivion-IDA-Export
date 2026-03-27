void __cdecl sub_79E2E0(int a1, int a2, char *a3)
{
  int v3; // ebx
  int v4; // esi
  _DWORD v5[12]; // [esp-34h] [ebp-44h] BYREF
  char *v6; // [esp-4h] [ebp-14h]

  v3 = (a2 - a1) / 0x30 / 2;
  if ( v3 > 0 )
  {
    v4 = 0x30 * v3 + a1 + 0x14;
    do
    {
      v6 = a3;
      v4 -= 0x30;
      --v3;
      sub_79AD70(v5, v4 - 0x14);
      sub_79C130(
        a1,
        v3,
        (a2 - a1) / 0x30,
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
    }
    while ( v3 > 0 );
  }
}
