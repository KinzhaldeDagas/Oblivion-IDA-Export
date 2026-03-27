char __userpurge TESSaveLoadGame_LoadForm@<al>(
        _DWORD **a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5)
{
  UInt32 mainThreadID; // ebx
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  unsigned int *v9; // ebp
  _DWORD *v10; // ebx
  int *v11; // eax
  int v12; // ebx
  unsigned __int8 v13; // al
  unsigned int v15; // ebp
  __int16 v16; // kr00_2
  unsigned int v17; // eax
  bool v18; // bl
  char v19; // cl
  bool v20; // zf
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  char v24; // dl
  _DWORD *v25; // ecx
  void *v26; // ebp
  int v27; // [esp-8h] [ebp-154h]
  unsigned int v28; // [esp-4h] [ebp-150h]
  unsigned int *v29; // [esp+14h] [ebp-138h] BYREF
  _DWORD v30[2]; // [esp+18h] [ebp-134h]
  _DWORD *v31; // [esp+20h] [ebp-12Ch] BYREF
  _DWORD *v32; // [esp+24h] [ebp-128h]
  int v33; // [esp+28h] [ebp-124h] BYREF
  char v34; // [esp+2Ch] [ebp-120h]
  unsigned int v35; // [esp+2Dh] [ebp-11Fh]
  char v36; // [esp+31h] [ebp-11Bh]
  __int16 v37; // [esp+32h] [ebp-11Ah]
  int v38; // [esp+34h] [ebp-118h]
  struct _RTL_CRITICAL_SECTION CriticalSection; // [esp+38h] [ebp-114h] BYREF
  unsigned int v40; // [esp+148h] [ebp-4h]

  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(v7) = *((_BYTE *)a1 + 0x18);
  else
    v7 = (unsigned int)a1[6] >> 0x12;
  if ( (v7 & 1) == 0 )
    return 0;
  v8 = *a1;
  v27 = *(_DWORD *)(a5 + 0xC);
  v29 = 0;
  NiTMap_GetAt(v8, v27, &v29);
  v9 = v29;
  if ( !v29 )
    return 0;
  v32 = (_DWORD *)v29[1];
  v10 = v32;
  if ( !v32 )
    return 0;
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B33B80, (int)"TESSaveLoadGame::LoadForm");
  a1[5] = v10;
  v11 = (int *)SaveLoad_CurrentSavegame->unk000[5];
  v12 = *v11;
  SaveLoad_CurrentSavegame->unk000[5] = (UInt32)(v11 + 1);
  v13 = *(_BYTE *)(a5 + 4);
  v30[0] = v12;
  if ( v13 != BYTE2(v12) )
  {
    _sprintf(
      (char *)&CriticalSection,
      "Load Error: Form with ID %08X was saved with form type %s, but currently has form type %s.  Its loading will be skipped.",
      *(_DWORD *)(a5 + 0xC),
      *(const char **)(0xC * BYTE2(v12) + 0xB05E04),
      *(const char **)(0xC * v13 + 0xB05E04));
    (*(void (__thiscall **)(int, struct _RTL_CRITICAL_SECTION *))(*(_DWORD *)dword_B34D90 + 0x18))(
      dword_B34D90,
      &CriticalSection);
    sub_452DF0(*a1, *(_DWORD *)(a5 + 0xC), 1);
    a1[5] = 0;
    NiLeaveCriticalSection_0(&stru_B33B80);
    return 0;
  }
  v28 = *v9;
  v38 = (unsigned __int16)v12;
  v15 = sub_453530((_DWORD *)a5, v28);
  sub_45A140(a1, *(_DWORD *)((char *)v30 + 3));
  v16 = HIWORD(v30[0]);
  v33 = *(_DWORD *)(a5 + 0xC);
  a1[0x20] = &v33;
  v17 = (unsigned int)a1[6];
  v37 = v12;
  v34 = v16;
  a1[6] = (_DWORD *)(v17 | 0x80);
  *(_DWORD *)(a5 + 8) |= 0x200000u;
  v35 = v15;
  v36 = HIBYTE(v16);
  v18 = (v17 & 0x80) != 0;
  sub_460BC0(a1, a2, a3, a4, (void *)a5, v15);
  (*(void (__thiscall **)(int, unsigned int, _DWORD))(*(_DWORD *)a5 + 0x54))(a5, v15, 0);
  if ( v18 )
    a1[6] = (_DWORD *)((unsigned int)a1[6] | 0x80);
  else
    a1[6] = (_DWORD *)((unsigned int)a1[6] & 0xFFFFFF7F);
  v19 = *((_BYTE *)a1 + 0x71);
  v20 = a1[7] == 0;
  a1[0x20] = 0;
  *((_BYTE *)a1 + 0x7C) = v19;
  if ( v20 )
  {
    v21 = (_DWORD *)FormHeapAlloc(0x18u);
    v31 = v21;
    v40 = 0;
    if ( v21 )
      v22 = sub_452670(v21, 0x32u, 0x32);
    else
      v22 = 0;
    v40 = 0xFFFFFFFF;
    a1[7] = v22;
  }
  v23 = FormHeapAlloc(0x10u);
  if ( v23 )
  {
    v24 = HIBYTE(v30[0]);
    *(_DWORD *)v23 = a5;
    *(_DWORD *)(v23 + 4) = v15;
    *(_DWORD *)(v23 + 8) = 0;
    *(_BYTE *)(v23 + 0xC) = v24;
  }
  else
  {
    v23 = 0;
  }
  v25 = a1[7];
  v31 = (_DWORD *)v23;
  sub_5A6AB0(v25, &v31);
  v26 = v32;
  if ( (char *)a1[5] - v38 - (char *)v32 != 4 && (char *)a1[5] - v38 - (char *)v32 != 2 )
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
      dword_B34D90,
      "LoadGame() call did not properly empty buffer.  See Warnings.txt for more info.");
  sub_452230(a1, v26);
  v29[1] = 0;
  if ( a1[0x14] )
  {
    sub_452D60(*a1, a5, (int)a1[0x14]);
    a1[0x14] = 0;
  }
  NiLeaveCriticalSection_0(&stru_B33B80);
  return 1;
}
