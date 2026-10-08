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

  v5 = *(_DWORD *)(a1 + 0x14); /*0x8df5d0*/
  v6 = 0x3C * *(char *)(a1 + 8); /*0x8df5d3*/
  v7 = *(_DWORD *)(a1 + 0x18); /*0x8df5d6*/
  _mm_prefetch((const char *)(a1 + 0x80), 0); /*0x8df5d9*/
  v12 = v5; /*0x8df5e0*/
  _mm_prefetch(*(const char **)(a1 + 0x10), 0); /*0x8df5e7*/
  v8 = v6 + *(_DWORD *)a2 + 0x1A14; /*0x8df5f1*/
  *(_DWORD *)(a2 + 0x28) = v8; /*0x8df5f8*/
  v13 = v7; /*0x8df5fc*/
  *(_BYTE *)(a2 + 0xC) = *(_BYTE *)(v8 + 0x10); /*0x8df603*/
  *(_DWORD *)a3 = a3 + 0xC; /*0x8df60b*/
  a3[0xC0D] = 3.4028235e38; /*0x8df60d*/
  a3[0xC10] = 0.0; /*0x8df617*/
  sub_8E6D10(a1, a2, (int)a3); /*0x8df621*/
  v9 = unk_BA7D98; /*0x8df626*/
  v10 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8df632*/
  v11 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8df634*/
  if ( v11 <= v10 || v11 == v10 ) /*0x8df640*/
  {
    *(_DWORD *)(v9 + 4) = 1; /*0x8df646*/
    v9 = unk_BA7D98; /*0x8df64d*/
  }
  if ( *(_DWORD *)(v9 + 4) != 1 ) /*0x8df657*/
  {
    if ( *(float **)a3 != a3 + 0xC ) /*0x8df65b*/
      (*(void (__thiscall **)(_DWORD, int, int, int, float *))(**(_DWORD **)(a1 + 0x10) + 0x14))( /*0x8df66e*/
        *(_DWORD *)(a1 + 0x10),
        v12,
        v13,
        a2,
        a3);
    if ( a3[0xC0D] < (double)flt_A9A584 ) /*0x8df682*/
    {
      sub_8A7720(a4 + 0xA); /*0x8df690*/
      sub_8D3600((const void **)&a4->DebugInfo, (int)a3, (_DWORD *)a1); /*0x8df699*/
      LeaveCriticalSection(a4 + 0xA); /*0x8df69f*/
    }
  }
}
