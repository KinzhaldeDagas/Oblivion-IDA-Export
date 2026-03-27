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

  v3 = (_RTL_CRITICAL_SECTION_0 *)(this + 4);
  sub_8A7720((LPCRITICAL_SECTION)(this + 4));
  if ( *(this + 1) == (char *)((unsigned int)*(this + 2) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)this, 0x14);
  v4 = (int)*(this + 1);
  v5 = *this;
  *(this + 1) = (char *)(v4 + 1);
  ++*((_DWORD *)*(this + 3) + 0x21);
  v6 = &v5[0x14 * v4];
  sub_8B1890(v6, (const void *)a2, 0x14u);
  switch ( *v6 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xD:
    case 0xE:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x20:
    case 0x21:
    case 0x22:
      v8 = *((_DWORD *)v6 + 1);
      goto LABEL_41;
    case 5:
    case 0xC:
      v7 = *((_DWORD *)v6 + 1);
      if ( *(_WORD *)(v7 + 4) )
        ++*(_WORD *)(v7 + 6);
      v8 = *((_DWORD *)v6 + 2);
LABEL_41:
      if ( *(_WORD *)(v8 + 4) )
        ++*(_WORD *)(v8 + 6);
      goto LABEL_43;
    case 6:
      v9 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                     dword_BA7D98,
                     4 * *((unsigned __int16 *)v6 + 4),
                     4);
      *((_DWORD *)v6 + 1) = v9;
      sub_8B1890(v9, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8));
      v10 = *((_DWORD *)v6 + 1);
      for ( i = v10 + 4 * *((unsigned __int16 *)v6 + 4); v10 < i; v10 += 4 )
      {
        if ( *(_WORD *)(*(_DWORD *)v10 + 4) )
          ++*(_WORD *)(*(_DWORD *)v10 + 6);
      }
      goto LABEL_43;
    case 7:
      v12 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                      dword_BA7D98,
                      4 * *((unsigned __int16 *)v6 + 4),
                      4);
      *((_DWORD *)v6 + 1) = v12;
      sub_8B1890(v12, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8));
      v13 = *((_DWORD *)v6 + 1);
      for ( j = v13 + 4 * *((unsigned __int16 *)v6 + 4); v13 < j; v13 += 4 )
      {
        if ( *(_WORD *)(*(_DWORD *)v13 + 4) )
          ++*(_WORD *)(*(_DWORD *)v13 + 6);
      }
      goto LABEL_43;
    case 0xF:
      v15 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                      dword_BA7D98,
                      4 * *((unsigned __int16 *)v6 + 4),
                      4);
      *((_DWORD *)v6 + 1) = v15;
      sub_8B1890(v15, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8));
      v16 = *((_DWORD *)v6 + 1);
      for ( k = v16 + 4 * *((unsigned __int16 *)v6 + 4); v16 < k; v16 += 4 )
      {
        if ( *(_WORD *)(*(_DWORD *)v16 + 4) )
          ++*(_WORD *)(*(_DWORD *)v16 + 6);
      }
      goto LABEL_43;
    case 0x10:
      v18 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                      dword_BA7D98,
                      4 * *((unsigned __int16 *)v6 + 4),
                      4);
      *((_DWORD *)v6 + 1) = v18;
      sub_8B1890(v18, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8));
      v19 = *((_DWORD *)v6 + 1);
      for ( m = v19 + 4 * *((unsigned __int16 *)v6 + 4); v19 < m; v19 += 4 )
      {
        if ( *(_WORD *)(*(_DWORD *)v19 + 4) )
          ++*(_WORD *)(*(_DWORD *)v19 + 6);
      }
      goto LABEL_43;
    case 0x11:
      v21 = *((_DWORD *)v6 + 1);
      if ( *(_WORD *)(v21 + 4) )
        ++*(_WORD *)(v21 + 6);
      v22 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x20, 0x24);
      if ( v22 )
      {
        v23 = *(_DWORD **)(a2 + 8);
        *v22 = *v23;
        v22[1] = v23[1];
        v22[2] = v23[2];
        v22[3] = v23[3];
        v22[4] = v23[4];
        v22[5] = v23[5];
        v22[6] = v23[6];
        v22[7] = v23[7];
        *((_DWORD *)v6 + 2) = v22;
      }
      else
      {
        *((_DWORD *)v6 + 2) = 0;
      }
      goto LABEL_43;
    case 0x16:
      v24 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                      dword_BA7D98,
                      4 * *((unsigned __int16 *)v6 + 4),
                      4);
      *((_DWORD *)v6 + 1) = v24;
      sub_8B1890(v24, *(const void **)(a2 + 4), 4 * *(unsigned __int16 *)(a2 + 8));
      v25 = *((_DWORD *)v6 + 1);
      for ( n = v25 + 4 * *((unsigned __int16 *)v6 + 4); v25 < n; v25 += 4 )
      {
        if ( *(_WORD *)(*(_DWORD *)v25 + 4) )
          ++*(_WORD *)(*(_DWORD *)v25 + 6);
      }
      goto LABEL_43;
    case 0x1D:
    case 0x1E:
      v27 = *((_DWORD *)v6 + 1);
      if ( *(_WORD *)(v27 + 4) )
        ++*(_WORD *)(v27 + 6);
      --*(this + 1);
      --*((_DWORD *)*(this + 3) + 0x21);
      LeaveCriticalSection(v3);
      return;
    default:
LABEL_43:
      LeaveCriticalSection(v3);
      return;
  }
}
