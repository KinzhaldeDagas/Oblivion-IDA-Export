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
  unsigned __int8 *bufferCursor; // eax
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
  unsigned int *v25; // ecx
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

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x463807*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x463814*/
    LOBYTE(v7) = *((_BYTE *)a1 + 0x18); /*0x463816*/
  else
    v7 = (unsigned int)a1[6] >> 0x12; /*0x46381e*/
  if ( (v7 & 1) == 0 ) /*0x463825*/
    return 0; /*0x463825*/
  v8 = *a1; /*0x46382e*/
  v27 = *(_DWORD *)(a5 + 0xC); /*0x463835*/
  v29 = 0; /*0x463836*/
  NiTMap_GetAt(v8, v27, &v29); /*0x46383e*/
  v9 = v29; /*0x463843*/
  if ( !v29 ) /*0x463849*/
    return 0; /*0x463849*/
  v32 = (_DWORD *)v29[1]; /*0x463854*/
  v10 = v32; /*0x46384f*/
  if ( !v32 ) /*0x463858*/
    return 0; /*0x463858*/
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B33B80, (int)"TESSaveLoadGame::LoadForm"); /*0x463868*/
  a1[5] = v10; /*0x46386d*/
  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x463876*/
  v12 = *(_DWORD *)bufferCursor; /*0x463879*/
  g_TESSaveLoadGame->bufferCursor = bufferCursor + 4; /*0x46387e*/
  v13 = *(_BYTE *)(a5 + 4); /*0x463881*/
  v30[0] = v12; /*0x463884*/
  if ( v13 != BYTE2(v12) )
  {
    _sprintf(
      (char *)&CriticalSection,
      "Load Error: Form with ID %08X was saved with form type %s, but currently has form type %s.  Its loading will be skipped.",
      *(_DWORD *)(a5 + 0xC),
      *(const char **)(0xC * BYTE2(v12) + 0xB05E04),
      *(const char **)(0xC * v13 + 0xB05E04));
    (*(void (__thiscall **)(_DWORD, struct _RTL_CRITICAL_SECTION *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x4638d6*/
      *(_DWORD *)&MEMORY[0xB33E90][0xF00],
      &CriticalSection);
    SaveLoadChangesMap_RemoveChanges(*a1, *(_DWORD *)(a5 + 0xC), 1); /*0x4638e0*/
    a1[5] = 0; /*0x4638ea*/
    NiLeaveCriticalSection_0(&unk_B33B80); /*0x4638f1*/
    return 0; /*0x46391f*/
  }
  v28 = *v9; /*0x463928*/
  v38 = (unsigned __int16)v12; /*0x463929*/
  v15 = sub_453530((_DWORD *)a5, v28); /*0x46393c*/
  sub_45A140(a1, *(_DWORD *)((char *)v30 + 3)); /*0x46393e*/
  v16 = HIWORD(v30[0]); /*0x46394a*/
  v33 = *(_DWORD *)(a5 + 0xC); /*0x46394e*/
  a1[0x20] = &v33; /*0x463956*/
  v17 = (unsigned int)a1[6]; /*0x46395c*/
  v37 = v12; /*0x46395f*/
  v34 = v16; /*0x46396c*/
  a1[6] = (_DWORD *)(v17 | 0x80); /*0x463973*/
  *(_DWORD *)(a5 + 8) |= 0x200000u; /*0x463976*/
  v35 = v15; /*0x463980*/
  v36 = HIBYTE(v16); /*0x463984*/
  v18 = (v17 & 0x80) != 0; /*0x463988*/
  sub_460BC0(a1, a2, a3, a4, (void *)a5, v15);  // SavePersistanceFix hook point: TESSaveLoadGame_LoadForm calls sub_460BC0 to apply saved REFR movement before virtual LoadGame handles remaining change flags. /*0x46398b*/
  (*(void (__thiscall **)(int, unsigned int, _DWORD))(*(_DWORD *)a5 + 0x54))(a5, v15, 0); /*0x46399a*/
  if ( v18 ) /*0x46399e*/
    a1[6] = (_DWORD *)((unsigned int)a1[6] | 0x80); /*0x4639a0*/
  else
    a1[6] = (_DWORD *)((unsigned int)a1[6] & 0xFFFFFF7F); /*0x4639a9*/
  v19 = *((_BYTE *)a1 + 0x71); /*0x4639b0*/
  v20 = a1[7] == 0; /*0x4639b5*/
  a1[0x20] = 0; /*0x4639b8*/
  *((_BYTE *)a1 + 0x7C) = v19; /*0x4639be*/
  if ( v20 ) /*0x4639c1*/
  {
    v21 = (_DWORD *)FormHeapAlloc(0x18u); /*0x4639c5*/
    v31 = v21; /*0x4639cd*/
    v40 = 0; /*0x4639d3*/
    if ( v21 ) /*0x4639da*/
      v22 = sub_452670(v21, 0x32u, 0x32); /*0x4639e2*/
    else
      v22 = 0; /*0x4639e9*/
    v40 = 0xFFFFFFFF; /*0x4639eb*/
    a1[7] = v22; /*0x4639f6*/
  }
  v23 = FormHeapAlloc(0x10u); /*0x4639fb*/
  if ( v23 ) /*0x463a05*/
  {
    v24 = HIBYTE(v30[0]); /*0x463a07*/
    *(_DWORD *)v23 = a5; /*0x463a0b*/
    *(_DWORD *)(v23 + 4) = v15; /*0x463a0d*/
    *(_DWORD *)(v23 + 8) = 0; /*0x463a10*/
    *(_BYTE *)(v23 + 0xC) = v24; /*0x463a13*/
  }
  else
  {
    v23 = 0; /*0x463a18*/
  }
  v25 = a1[7]; /*0x463a1a*/
  v31 = (_DWORD *)v23; /*0x463a1d*/
  sub_5A6AB0(v25, &v31); /*0x463a26*/
  v26 = v32; /*0x463a32*/
  if ( (char *)a1[5] - v38 - (char *)v32 != 4 && (char *)a1[5] - v38 - (char *)v32 != 2 ) /*0x463a40*/
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x463a52*/
      *(_DWORD *)&MEMORY[0xB33E90][0xF00],
      "LoadGame() call did not properly empty buffer.  See Warnings.txt for more info.");
  sub_452230(a1, v26); /*0x463a57*/
  v29[1] = 0; /*0x463a60*/
  if ( a1[0x14] ) /*0x463a63*/
  {
    sub_452D60(*a1, a5, (int)a1[0x14]); /*0x463a6e*/
    a1[0x14] = 0; /*0x463a73*/
  }
  NiLeaveCriticalSection_0(&unk_B33B80); /*0x463a7b*/
  return 1; /*0x4638f8*/
}
