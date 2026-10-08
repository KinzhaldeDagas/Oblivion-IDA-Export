void __thiscall sub_8D8830(char **this, int a2)
{
  _RTL_CRITICAL_SECTION_0 *v3; // ebp
  int v4; // eax
  char *v5; // edx
  char *v6; // esi
  int v7; // eax
  int v8; // esi
  void *v9; // eax
  unsigned int v10; // eax
  unsigned int i; // ecx
  void *v12; // eax
  unsigned int v13; // eax
  unsigned int j; // ecx
  void *v15; // eax
  unsigned int v16; // eax
  unsigned int k; // ecx
  void *v18; // eax
  unsigned int v19; // eax
  unsigned int m; // ecx
  int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // edi
  void *v24; // eax
  unsigned int v25; // eax
  unsigned int n; // ecx
  int v27; // esi

  v3 = (_RTL_CRITICAL_SECTION_0 *)(this + 4); /*0x8d8835*/
  sub_8A7720((LPCRITICAL_SECTION)(this + 4)); /*0x8d883b*/
  if ( *(this + 1) == (char *)((unsigned int)*(this + 2) & 0x3FFFFFFF) ) /*0x8d884d*/
    sub_8A6EE0((const void **)this, 0x14); /*0x8d8852*/
  v4 = (int)*(this + 1); /*0x8d885a*/
  v5 = *this; /*0x8d885d*/
  *(this + 1) = (char *)(v4 + 1); /*0x8d8863*/
  ++*((_DWORD *)*(this + 3) + 0x21); /*0x8d8869*/
  v6 = &v5[0x14 * v4]; /*0x8d8875*/
  sub_8B1890(v6, (const void *)a2, 0x14u); /*0x8d887a*/
  switch ( *v6 ) /*0x8d888f*/
  {
    case 1: /*0x8d888f*/
    case 2: /*0x8d888f*/
    case 3: /*0x8d888f*/
    case 4: /*0x8d888f*/
    case 8: /*0x8d888f*/
    case 9: /*0x8d888f*/
    case 0xA: /*0x8d888f*/
    case 0xB: /*0x8d888f*/
    case 0xD: /*0x8d888f*/
    case 0xE: /*0x8d888f*/
    case 0x12: /*0x8d888f*/
    case 0x13: /*0x8d888f*/
    case 0x15: /*0x8d888f*/
    case 0x17: /*0x8d888f*/
    case 0x18: /*0x8d888f*/
    case 0x19: /*0x8d888f*/
    case 0x1A: /*0x8d888f*/
    case 0x1B: /*0x8d888f*/
    case 0x1C: /*0x8d888f*/
    case 0x20: /*0x8d888f*/
    case 0x21: /*0x8d888f*/
    case 0x22: /*0x8d888f*/
      v8 = *((_DWORD *)v6 + 1); /*0x8d8b41*/
      goto LABEL_41; /*0x8d8b41*/
    case 5: /*0x8d888f*/
    case 0xC: /*0x8d888f*/
      v7 = *((_DWORD *)v6 + 1); /*0x8d8896*/
      if ( *(_WORD *)(v7 + 4) ) /*0x8d8899*/
        ++*(_WORD *)(v7 + 6); /*0x8d88a0*/
      v8 = *((_DWORD *)v6 + 2); /*0x8d88a4*/
LABEL_41:
      if ( *(_WORD *)(v8 + 4) ) /*0x8d8b44*/
        ++*(_WORD *)(v8 + 6); /*0x8d8b4b*/
      goto LABEL_43; /*0x8d8b4b*/
    case 6: /*0x8d888f*/
      v9 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x8d88be*/
                     unk_BA7D98,
                     4 * *((unsigned __int16 *)v6 + 4),
                     4);
      *((_DWORD *)v6 + 1) = v9; /*0x8d88c1*/
      sub_8B1890(v9, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8)); /*0x8d88d1*/
      v10 = *((_DWORD *)v6 + 1); /*0x8d88da*/
      for ( i = v10 + 4 * *((unsigned __int16 *)v6 + 4); v10 < i; v10 += 4 ) /*0x8d88e5*/
      {
        if ( *(_WORD *)(*(_DWORD *)v10 + 4) ) /*0x8d88f2*/
          ++*(_WORD *)(*(_DWORD *)v10 + 6); /*0x8d88f9*/
      }
      goto LABEL_43; /*0x8d8902*/
    case 7: /*0x8d888f*/
      v12 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x8d8924*/
                      unk_BA7D98,
                      4 * *((unsigned __int16 *)v6 + 4),
                      4);
      *((_DWORD *)v6 + 1) = v12; /*0x8d8927*/
      sub_8B1890(v12, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8)); /*0x8d8937*/
      v13 = *((_DWORD *)v6 + 1); /*0x8d8940*/
      for ( j = v13 + 4 * *((unsigned __int16 *)v6 + 4); v13 < j; v13 += 4 ) /*0x8d894b*/
      {
        if ( *(_WORD *)(*(_DWORD *)v13 + 4) ) /*0x8d8953*/
          ++*(_WORD *)(*(_DWORD *)v13 + 6); /*0x8d895a*/
      }
      goto LABEL_43; /*0x8d8963*/
    case 0xF: /*0x8d888f*/
      v15 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x8d8985*/
                      unk_BA7D98,
                      4 * *((unsigned __int16 *)v6 + 4),
                      4);
      *((_DWORD *)v6 + 1) = v15; /*0x8d8988*/
      sub_8B1890(v15, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8)); /*0x8d8998*/
      v16 = *((_DWORD *)v6 + 1); /*0x8d89a1*/
      for ( k = v16 + 4 * *((unsigned __int16 *)v6 + 4); v16 < k; v16 += 4 ) /*0x8d89ac*/
      {
        if ( *(_WORD *)(*(_DWORD *)v16 + 4) ) /*0x8d89b4*/
          ++*(_WORD *)(*(_DWORD *)v16 + 6); /*0x8d89bb*/
      }
      goto LABEL_43; /*0x8d89c4*/
    case 0x10: /*0x8d888f*/
      v18 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x8d89e6*/
                      unk_BA7D98,
                      4 * *((unsigned __int16 *)v6 + 4),
                      4);
      *((_DWORD *)v6 + 1) = v18; /*0x8d89e9*/
      sub_8B1890(v18, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8)); /*0x8d89f9*/
      v19 = *((_DWORD *)v6 + 1); /*0x8d8a02*/
      for ( m = v19 + 4 * *((unsigned __int16 *)v6 + 4); v19 < m; v19 += 4 ) /*0x8d8a0d*/
      {
        if ( *(_WORD *)(*(_DWORD *)v19 + 4) ) /*0x8d8a15*/
          ++*(_WORD *)(*(_DWORD *)v19 + 6); /*0x8d8a1c*/
      }
      goto LABEL_43; /*0x8d8a25*/
    case 0x11: /*0x8d888f*/
      v21 = *((_DWORD *)v6 + 1); /*0x8d8a35*/
      if ( *(_WORD *)(v21 + 4) ) /*0x8d8a38*/
        ++*(_WORD *)(v21 + 6); /*0x8d8a3f*/
      v22 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x20, 0x24); /*0x8d8a4f*/
      if ( v22 ) /*0x8d8a54*/
      {
        v23 = *(_DWORD **)(a2 + 8); /*0x8d8a56*/
        *v22 = *v23; /*0x8d8a5d*/
        v22[1] = v23[1]; /*0x8d8a62*/
        v22[2] = v23[2]; /*0x8d8a68*/
        v22[3] = v23[3]; /*0x8d8a71*/
        v22[4] = v23[4]; /*0x8d8a79*/
        v22[5] = v23[5]; /*0x8d8a7e*/
        v22[6] = v23[6]; /*0x8d8a84*/
        v22[7] = v23[7]; /*0x8d8a8a*/
        *((_DWORD *)v6 + 2) = v22; /*0x8d8a8e*/
      }
      else
      {
        *((_DWORD *)v6 + 2) = 0; /*0x8d8aa1*/
      }
      goto LABEL_43; /*0x8d8a91*/
    case 0x16: /*0x8d888f*/
      v24 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x8d8ac3*/
                      unk_BA7D98,
                      4 * *((unsigned __int16 *)v6 + 4),
                      4);
      *((_DWORD *)v6 + 1) = v24; /*0x8d8ac6*/
      sub_8B1890(v24, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8)); /*0x8d8ad6*/
      v25 = *((_DWORD *)v6 + 1); /*0x8d8adf*/
      for ( n = v25 + 4 * *((unsigned __int16 *)v6 + 4); v25 < n; v25 += 4 ) /*0x8d8aea*/
      {
        if ( *(_WORD *)(*(_DWORD *)v25 + 4) ) /*0x8d8af2*/
          ++*(_WORD *)(*(_DWORD *)v25 + 6); /*0x8d8af9*/
      }
      goto LABEL_43; /*0x8d8b02*/
    case 0x1D: /*0x8d888f*/
    case 0x1E: /*0x8d888f*/
      v27 = *((_DWORD *)v6 + 1); /*0x8d8b12*/
      if ( *(_WORD *)(v27 + 4) ) /*0x8d8b15*/
        ++*(_WORD *)(v27 + 6); /*0x8d8b1c*/
      --*(this + 1); /*0x8d8b20*/
      --*((_DWORD *)*(this + 3) + 0x21); /*0x8d8b2e*/
      LeaveCriticalSection(v3); /*0x8d8b34*/
      return; /*0x8d8b3e*/
    default:
LABEL_43:
      LeaveCriticalSection(v3); /*0x8d8b4f*/
      return;
  }
}
