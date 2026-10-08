void __thiscall sub_8D44D0(const void **this, int a2, int a3, float *a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx

  a4[0xC0D] = 3.4028235e38; /*0x8d44dc*/
  a4[0xC10] = 0.0; /*0x8d44e6*/
  *(_DWORD *)a4 = a4 + 0xC; /*0x8d44f3*/
  v4 = 0x3C * *(char *)(a2 + 8) + *(_DWORD *)a3 + 0x1A14; /*0x8d4507*/
  *(_DWORD *)(a3 + 0x28) = v4; /*0x8d450f*/
  *(_BYTE *)(a3 + 0xC) = *(_BYTE *)(v4 + 0x10); /*0x8d4517*/
  sub_8E6D10(a2, a3, (int)a4); /*0x8d451a*/
  v5 = unk_BA7D98; /*0x8d451f*/
  v6 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8d452b*/
  v7 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8d452d*/
  if ( v7 <= v6 || v7 == v6 ) /*0x8d4539*/
  {
    *(_DWORD *)(v5 + 4) = 1; /*0x8d453f*/
    v5 = unk_BA7D98; /*0x8d4546*/
  }
  if ( *(_DWORD *)(v5 + 4) != 1 ) /*0x8d4550*/
  {
    if ( *(float **)a4 != a4 + 0xC ) /*0x8d4554*/
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, float *))(**(_DWORD **)(a2 + 0x10) + 0x14))( /*0x8d4565*/
        *(_DWORD *)(a2 + 0x10),
        *(_DWORD *)(a2 + 0x14),
        *(_DWORD *)(a2 + 0x18),
        a3,
        a4);
    if ( a4[0xC0D] < (double)flt_A9A020 ) /*0x8d4579*/
      sub_8D3600(this, (int)a4, (_DWORD *)a2); /*0x8d4581*/
  }
}
