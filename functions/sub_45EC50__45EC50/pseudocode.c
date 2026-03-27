int __usercall sub_45EC50@<eax>(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  int v6; // eax
  char v7; // dl
  TES *v8; // ecx
  unsigned int i; // edi
  Data *v10; // eax
  UInt32 mainThreadID; // edi
  int v12; // ebx
  UInt32 v13; // edi
  char v14; // bl
  unsigned int j; // edi
  int v16; // ecx
  char v17; // al
  _DWORD *v18; // ecx
  unsigned int k; // edi
  _DWORD *v20; // ecx
  UInt32 v21; // edi
  _DWORD *v22; // eax
  unsigned int m; // ecx
  void (__thiscall ***v24)(_DWORD, int); // ecx
  int v25; // eax
  int *v26; // edi
  int v27; // eax
  _BYTE *v28; // eax
  TESObjectCELL *ParentCell; // edi
  int result; // eax
  char v31; // [esp+Fh] [ebp-9h]
  int v32; // [esp+10h] [ebp-8h] BYREF
  int v33; // [esp+14h] [ebp-4h]

  if ( !sub_57BAC0(a2, a3, a4, a5) )
  {
    sub_440AF0((int)TES, a3, a4, 0, 1, 0, 0);
    dword_B33B08 = 0;
  }
  sub_446C20();
  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v7 = *(_BYTE *)(v6 + 0x184);
  *(_BYTE *)(v6 + 0x184) = 1;
  *(_DWORD *)(a1 + 0x18) |= 0x1004u;
  v8 = TES;
  v33 = v6;
  v31 = v7;
  sub_4415C0(v8);
  for ( i = 0; i < sub_446B10((_DWORD *)TESDataHandler); ++i )
  {
    v10 = (Data *)sub_446B20((_DWORD *)TESDataHandler, i);
    TESDataHandler_LoadFile(a3, a4, (TESWorldSpace **)TESDataHandler, a5, v10, 0);
  }
  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(v12) = *(_BYTE *)(a1 + 0x18);
  else
    v12 = *(_DWORD *)(a1 + 0x18) >> 0x12;
  v13 = OSGlobals->mainThreadID;
  v14 = v12 & 1;
  if ( GetCurrentThreadId() == v13 )
    *(_DWORD *)(a1 + 0x18) &= ~1u;
  else
    *(_DWORD *)(a1 + 0x18) &= ~0x40000u;
  for ( j = 0; j < *(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 0xC); ++j )
  {
    v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 4) + 4 * j);
    if ( v16 )
    {
      v17 = *(_BYTE *)(v16 + 4);
      if ( v17 != 0x30 && v17 != 0x31 && v17 != 0x33 && v17 != 0x32 && v17 != 0x35 )
      {
        if ( (*(_DWORD *)(v16 + 8) & 8) == 0 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 0x6C))(v16);
        v18 = *(_DWORD **)(a1 + 0xAC);
        v32 = 0;
        sub_446C50(v18, j, &v32);
      }
    }
  }
  for ( k = 0; k < *(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 0xC); ++k )
  {
    v20 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 4) + 4 * k);
    if ( v20 )
    {
      if ( (v20[2] & 8) == 0 )
        (*(void (__thiscall **)(_DWORD *))(*v20 + 0x6C))(v20);
    }
  }
  v21 = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == v21 )
  {
    if ( v14 )
      *(_DWORD *)(a1 + 0x18) |= 1u;
    else
      *(_DWORD *)(a1 + 0x18) &= ~1u;
  }
  else if ( v14 )
  {
    *(_DWORD *)(a1 + 0x18) |= 0x40000u;
  }
  else
  {
    *(_DWORD *)(a1 + 0x18) &= ~0x40000u;
  }
  v22 = *(_DWORD **)(a1 + 0xAC);
  for ( m = 0; m < v22[3]; ++m )
    *(_DWORD *)(v22[1] + 4 * m) = 0;
  v22[3] = 0;
  v22[4] = 0;
  v24 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0xAC);
  if ( v24 )
    (**v24)(v24, 1);
  *(_DWORD *)(a1 + 0xAC) = 0;
  v25 = *(_DWORD *)(TESDataHandler + 0xBC);
  if ( v25 )
  {
    v26 = (int *)(v25 + 4);
    if ( v25 != 0xFFFFFFFC )
    {
      do
      {
        v27 = *v26;
        if ( !*v26 )
          break;
        if ( (*(_DWORD *)(v27 + 8) & 0x40) != 0 )
        {
          v28 = *(_BYTE **)(v27 + 0x20);
          if ( v28 )
            sub_4EF170(v28, 1);
        }
        v26 = (int *)v26[1];
      }
      while ( v26 );
    }
  }
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  TESObjectREFR_ChangeCell((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
  sub_447CA0(TESDataHandler, a3, a4);
  TESObjectREFR_ChangeCell((TESObjectREFR *)TESDataHandler_g_PlayerRef, (int)ParentCell);
  *(_DWORD *)(a1 + 0x18) &= 0xFFFFEFFB;
  result = v33;
  *(_BYTE *)(v33 + 0x184) = v31;
  *(_BYTE *)(a1 + 0xA8) = 1;
  return result;
}
