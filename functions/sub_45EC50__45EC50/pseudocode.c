int __usercall sub_45EC50@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
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
  TESObjectCELL *DwordAtOffset40; // edi
  int result; // eax
  char v31; // [esp+Fh] [ebp-9h]
  int v32; // [esp+10h] [ebp-8h] BYREF
  int v33; // [esp+14h] [ebp-4h]

  if ( !sub_57BAC0() ) /*0x45ec58*/
  {
    sub_440AF0((int)MEMORY[0xB333A0], a2, a3, 0, 1, 0, 0); /*0x45ec6d*/
    unk_B33B08 = 0; /*0x45ec72*/
  }
  sub_446C20(); /*0x45ec7e*/
  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x45ec8f*/
  v7 = *(_BYTE *)(v6 + 0x184); /*0x45ec92*/
  *(_BYTE *)(v6 + 0x184) = 1; /*0x45ec98*/
  *(_DWORD *)(a1 + 0x18) |= 0x1004u; /*0x45ec9f*/
  v8 = MEMORY[0xB333A0]; /*0x45eca6*/
  v33 = v6; /*0x45ecac*/
  v31 = v7; /*0x45ecb0*/
  sub_4415C0(v8); /*0x45ecb4*/
  for ( i = 0; i < sub_446B10((_DWORD *)g_TESDataHandler); ++i ) /*0x45ecc1*/
  {
    v10 = (Data *)sub_446B20((_DWORD *)g_TESDataHandler, i); /*0x45ecd8*/
    TESDataHandler_LoadFile(a2, a3, (TESWorldSpace **)g_TESDataHandler, a4, v10, 0); /*0x45ece4*/
  }
  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45ed00*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x45ed0c*/
    LOBYTE(v12) = *(_BYTE *)(a1 + 0x18); /*0x45ed0e*/
  else
    v12 = *(_DWORD *)(a1 + 0x18) >> 0x12; /*0x45ed16*/
  v13 = MEMORY[0xB33398]->mainThreadID; /*0x45ed1f*/
  v14 = v12 & 1; /*0x45ed22*/
  if ( GetCurrentThreadId() == v13 ) /*0x45ed2d*/
    *(_DWORD *)(a1 + 0x18) &= ~1u; /*0x45ed2f*/
  else
    *(_DWORD *)(a1 + 0x18) &= ~0x40000u; /*0x45ed35*/
  for ( j = 0; j < *(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 0xC); ++j ) /*0x45ed44*/
  {
    v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 4) + 4 * j); /*0x45ed59*/
    if ( v16 ) /*0x45ed5e*/
    {
      v17 = *(_BYTE *)(v16 + 4); /*0x45ed60*/
      if ( v17 != 0x30 && v17 != 0x31 && v17 != 0x33 && v17 != 0x32 && v17 != 0x35 ) /*0x45ed75*/
      {
        if ( (*(_DWORD *)(v16 + 8) & 8) == 0 ) /*0x45ed80*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 0x6C))(v16); /*0x45ed87*/
        v18 = *(_DWORD **)(a1 + 0xAC); /*0x45ed89*/
        v32 = 0; /*0x45ed95*/
        NiTLargeArray32_SetSlot(v18, j, &v32); /*0x45ed99*/
      }
    }
  }
  for ( k = 0; k < *(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 0xC); ++k ) /*0x45edb4*/
  {
    v20 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 4) + 4 * k); /*0x45edc9*/
    if ( v20 ) /*0x45edce*/
    {
      if ( (v20[2] & 8) == 0 ) /*0x45edd9*/
        (*(void (__thiscall **)(_DWORD *))(*v20 + 0x6C))(v20); /*0x45ede0*/
    }
  }
  v21 = MEMORY[0xB33398]->mainThreadID; /*0x45edf6*/
  if ( GetCurrentThreadId() == v21 ) /*0x45ee01*/
  {
    if ( v14 ) /*0x45ee05*/
      *(_DWORD *)(a1 + 0x18) |= 1u; /*0x45ee07*/
    else
      *(_DWORD *)(a1 + 0x18) &= ~1u; /*0x45ee0d*/
  }
  else if ( v14 ) /*0x45ee15*/
  {
    *(_DWORD *)(a1 + 0x18) |= 0x40000u; /*0x45ee17*/
  }
  else
  {
    *(_DWORD *)(a1 + 0x18) &= ~0x40000u; /*0x45ee20*/
  }
  v22 = *(_DWORD **)(a1 + 0xAC); /*0x45ee27*/
  for ( m = 0; m < v22[3]; ++m ) /*0x45ee2f*/
    *(_DWORD *)(v22[1] + 4 * m) = 0; /*0x45ee38*/
  v22[3] = 0; /*0x45ee43*/
  v22[4] = 0; /*0x45ee46*/
  v24 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0xAC); /*0x45ee49*/
  if ( v24 ) /*0x45ee51*/
    (**v24)(v24, 1); /*0x45ee59*/
  *(_DWORD *)(a1 + 0xAC) = 0; /*0x45ee5b*/
  v25 = *(_DWORD *)(g_TESDataHandler + 0xBC); /*0x45ee66*/
  if ( v25 ) /*0x45ee6e*/
  {
    v26 = (int *)(v25 + 4); /*0x45ee70*/
    if ( v25 != 0xFFFFFFFC ) /*0x45ee75*/
    {
      do /*0x45ee9d*/
      {
        v27 = *v26; /*0x45ee77*/
        if ( !*v26 ) /*0x45ee77*/
          break; /*0x45ee7b*/
        if ( (*(_DWORD *)(v27 + 8) & 0x40) != 0 ) /*0x45ee86*/
        {
          v28 = *(_BYTE **)(v27 + 0x20); /*0x45ee88*/
          if ( v28 ) /*0x45ee8d*/
            sub_4EF170(v28, 1); /*0x45ee93*/
        }
        v26 = (int *)v26[1]; /*0x45ee98*/
      }
      while ( v26 ); /*0x45ee9d*/
    }
  }
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x45eeb1*/
  TESObjectREFR_ChangeCell((TESObjectREFR *)reference, 0); /*0x45eeb3*/
  sub_447CA0(g_TESDataHandler, a2, a3); /*0x45eebe*/
  TESObjectREFR_ChangeCell((TESObjectREFR *)reference, DwordAtOffset40); /*0x45eeca*/
  *(_DWORD *)(a1 + 0x18) &= 0xFFFFEFFB; /*0x45eecf*/
  result = v33; /*0x45eeda*/
  *(_BYTE *)(v33 + 0x184) = v31; /*0x45eedf*/
  *(_BYTE *)(a1 + 0xA8) = 1; /*0x45eee5*/
  return result; /*0x45eede*/
}
