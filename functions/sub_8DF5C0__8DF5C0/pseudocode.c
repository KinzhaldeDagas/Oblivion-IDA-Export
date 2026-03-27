void __cdecl sub_8DF5C0(int a1, int a2, float *a3, _RTL_CRITICAL_SECTION_0 *a4)
{
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // [esp+Ch] [ebp-4h]
  int v13; // [esp+14h] [ebp+4h]

  v5 = *(_DWORD *)(a1 + 0x14);
  v6 = 0x3C * *(char *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 0x18);
  _mm_prefetch((const char *)(a1 + 0x80), 0);
  v12 = v5;
  _mm_prefetch(*(const char **)(a1 + 0x10), 0);
  v8 = v6 + *(_DWORD *)a2 + 0x1A14;
  *(_DWORD *)(a2 + 0x28) = v8;
  v13 = v7;
  *(_BYTE *)(a2 + 0xC) = *(_BYTE *)(v8 + 0x10);
  *(_DWORD *)a3 = a3 + 0xC;
  a3[0xC0D] = 3.4028235e38;
  a3[0xC10] = 0.0;
  sub_8E6D10(a1, a2, (int)a3);
  v9 = dword_BA7D98;
  v10 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
  v11 = *(_DWORD *)(dword_BA7D98 + 8);
  if ( v11 <= v10 || v11 == v10 )
  {
    *(_DWORD *)(v9 + 4) = 1;
    v9 = dword_BA7D98;
  }
  if ( *(_DWORD *)(v9 + 4) != 1 )
  {
    if ( *(float **)a3 != a3 + 0xC )
      (*(void (__thiscall **)(_DWORD, int, int, int, float *))(**(_DWORD **)(a1 + 0x10) + 0x14))(
        *(_DWORD *)(a1 + 0x10),
        v12,
        v13,
        a2,
        a3);
    if ( a3[0xC0D] < (double)flt_A9A584 )
    {
      sub_8A7720(a4 + 0xA);
      sub_8D3600((const void **)&a4->DebugInfo, (int)a3, (_DWORD *)a1);
      LeaveCriticalSection(a4 + 0xA);
    }
  }
}
