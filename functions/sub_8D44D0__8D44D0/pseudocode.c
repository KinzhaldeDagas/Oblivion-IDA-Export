void __thiscall sub_8D44D0(const void **this, int a2, int a3, float *a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx

  a4[0xC0D] = 3.4028235e38;
  a4[0xC10] = 0.0;
  *(_DWORD *)a4 = a4 + 0xC;
  v4 = 0x3C * *(char *)(a2 + 8) + *(_DWORD *)a3 + 0x1A14;
  *(_DWORD *)(a3 + 0x28) = v4;
  *(_BYTE *)(a3 + 0xC) = *(_BYTE *)(v4 + 0x10);
  sub_8E6D10(a2, a3, (int)a4);
  v5 = dword_BA7D98;
  v6 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
  v7 = *(_DWORD *)(dword_BA7D98 + 8);
  if ( v7 <= v6 || v7 == v6 )
  {
    *(_DWORD *)(v5 + 4) = 1;
    v5 = dword_BA7D98;
  }
  if ( *(_DWORD *)(v5 + 4) != 1 )
  {
    if ( *(float **)a4 != a4 + 0xC )
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, float *))(**(_DWORD **)(a2 + 0x10) + 0x14))(
        *(_DWORD *)(a2 + 0x10),
        *(_DWORD *)(a2 + 0x14),
        *(_DWORD *)(a2 + 0x18),
        a3,
        a4);
    if ( a4[0xC0D] < (double)flt_A9A020 )
      sub_8D3600(this, (int)a4, (_DWORD *)a2);
  }
}
