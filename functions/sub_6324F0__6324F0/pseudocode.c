void __thiscall sub_6324F0(int *this, unsigned int a2, int a3)
{
  TESSaveLoadGame_SerializationView *v6; // ecx
  bool v7; // zf
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v9; // ecx
  TESSaveLoadGame_SerializationView *v10; // ecx
  TESSaveLoadGame_SerializationView *v11; // ecx
  TESSaveLoadGame_SerializationView *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  TESSaveLoadGame_SerializationView *v16; // ecx
  unsigned __int8 *v17; // ebx
  int *i; // edi
  int v19; // ebp
  unsigned int j; // ebx
  float v21; // edi
  unsigned __int16 v22; // ax
  TESSaveLoadGame_SerializationView *v23; // ecx
  TESSaveLoadGame_SerializationView *v24; // ecx
  unsigned int v25; // edi
  int *v26; // ebp
  int v27; // eax
  int v28; // eax
  int v29; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v31; // esi
  TESForm *v32; // eax
  const char *v33; // eax
  unsigned __int8 *v34; // edi
  unsigned __int8 *v35; // esi
  int v36; // [esp-Ch] [ebp-3Ch]
  int v37; // [esp-8h] [ebp-38h]
  const char *v38; // [esp-4h] [ebp-34h]
  int v39; // [esp+Ch] [ebp-24h] BYREF
  unsigned __int8 *v40; // [esp+10h] [ebp-20h]
  unsigned int v41; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v42; // [esp+18h] [ebp-18h] BYREF
  unsigned int v43; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int Src; // [esp+20h] [ebp-10h] BYREF
  int v45; // [esp+24h] [ebp-Ch] BYREF
  unsigned __int8 *v46; // [esp+28h] [ebp-8h]
  int source; // [esp+2Ch] [ebp-4h] BYREF

  MiddleHighProc_Save__(this, a2, a3); /*0x632504*/
  v6 = g_TESSaveLoadGame; /*0x632509*/
  v7 = Global_DebugSaveBuffer == 0; /*0x632511*/
  source = 0; /*0x632518*/
  bufferCursor = v6->bufferCursor; /*0x63251c*/
  v46 = 0; /*0x63251f*/
  v40 = bufferCursor; /*0x632523*/
  if ( !v7 ) /*0x632527*/
    v40 = bufferCursor; /*0x632529*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x63252d*/
  {
    v9 = g_TESSaveLoadGame; /*0x632536*/
    Src = 0x4B4F4C42; /*0x632543*/
    SaveLoad_SaveData(v9, &Src, 4u); /*0x63254b*/
    v10 = g_TESSaveLoadGame; /*0x632550*/
    v46 = g_TESSaveLoadGame->bufferCursor; /*0x632560*/
    SaveLoad_SaveData(v10, &source, 2u); /*0x632564*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x8A, 1u); /*0x632578*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x8F, 1u); /*0x63258c*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x97, 1u); /*0x6325a0*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x25D, 1u); /*0x6325b4*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x7F, 2u); /*0x6325c8*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x7D, 2u); /*0x6325dc*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x82, 2u); /*0x6325f0*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x7C, 4u); /*0x632604*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x6B, 4u); /*0x632618*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x81, 4u); /*0x63262c*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x87, 4u); /*0x632640*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x8B, 4u); /*0x632654*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x8C, 4u); /*0x632668*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x8D, 4u); /*0x63267c*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x92, 4u); /*0x632690*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x66, 4u); /*0x6326a4*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x6C, 4u); /*0x6326b8*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x6D, 4u); /*0x6326cc*/
  v11 = g_TESSaveLoadGame; /*0x6326d1*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x32u ) /*0x6326db*/
  {
    SaveLoad_SaveData(v11, this + 0x67, 4u); /*0x6326e6*/
    v11 = g_TESSaveLoadGame; /*0x6326eb*/
  }
  SaveLoad_SaveData(v11, this + 0x73, 4u); /*0x6326fa*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x91, 1u); /*0x63270e*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x83, 0xCu); /*0x632722*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x95, 4u); /*0x632736*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0xAF, 4u); /*0x63274a*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0xB0, 4u); /*0x63275e*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x8E, 4u); /*0x632772*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x6A, 4u); /*0x632786*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x6E, 4u); /*0x63279a*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x98, 4u); /*0x6327ae*/
  v12 = g_TESSaveLoadGame; /*0x6327b3*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x3Fu ) /*0x6327bd*/
  {
    SaveLoad_SaveData(v12, this + 0x9E, 1u); /*0x6327c8*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x9D, 4u); /*0x6327dc*/
    v12 = g_TESSaveLoadGame; /*0x6327e1*/
  }
  if ( v12->currentVersion >= 0x42u ) /*0x6327eb*/
  {
    SaveLoad_SaveData(v12, this + 0xA4, 1u); /*0x6327f6*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0xA3, 4u); /*0x63280a*/
    v12 = g_TESSaveLoadGame; /*0x63280f*/
  }
  v13 = *(this + 0x86); /*0x632815*/
  v41 = 0; /*0x63281d*/
  if ( v13 ) /*0x632821*/
    v41 = *(_DWORD *)(v13 + 0xC); /*0x632826*/
  SaveLoad_SaveFormID(v12, &v41, 4u); /*0x632831*/
  v14 = *(this + 0x69); /*0x632836*/
  v42 = 0; /*0x63283e*/
  if ( v14 ) /*0x632842*/
    v42 = *(_DWORD *)(v14 + 0xC); /*0x632847*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v42, 4u); /*0x632858*/
  v15 = *(this + 0xB1); /*0x63285d*/
  v43 = 0; /*0x632865*/
  if ( v15 ) /*0x632869*/
    v43 = *(_DWORD *)(v15 + 0xC); /*0x63286e*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v43, 4u); /*0x632880*/
  v16 = g_TESSaveLoadGame; /*0x632885*/
  v39 = 0; /*0x632891*/
  v17 = v16->bufferCursor; /*0x632895*/
  SaveLoad_SaveData(v16, &v39, 2u); /*0x632899*/
  for ( i = (int *)*(this + 0x63); i; i = (int *)i[1] ) /*0x6328a6*/
  {
    if ( !i[1] && !*i ) /*0x6328ad*/
      break; /*0x6328af*/
    v19 = *i; /*0x6328b1*/
    Src = 0; /*0x6328b3*/
    if ( *(_DWORD *)v19 ) /*0x6328bb*/
      Src = *(_DWORD *)(*(_DWORD *)v19 + 0xC); /*0x6328c5*/
    SaveLoad_SaveFormID(g_TESSaveLoadGame, &Src, 4u); /*0x6328d6*/
    SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(v19 + 4), 4u); /*0x6328e7*/
    SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(v19 + 8), 1u); /*0x6328f8*/
    SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(v19 + 0xC), 4u); /*0x632909*/
    ++v39; /*0x63290e*/
  }
  v7 = (a2 & 0x2000000) == 0; /*0x63291c*/
  *(_WORD *)v17 = v39; /*0x632929*/
  if ( !v7 ) /*0x63292c*/
  {
    v7 = *(this + 0x5F) == 0; /*0x63292e*/
    LOBYTE(a2) = 0xFF; /*0x632934*/
    if ( !v7 ) /*0x632939*/
    {
      if ( *(this + 0x7E) ) /*0x63293b*/
      {
        for ( j = 0; j < 5; ++j ) /*0x632943*/
        {
          if ( ActorAnimData_GetNormalizedSequenceSlot((ActorAnimData *)*(this + 0x5F), j) == (BSAnimGroupSequence *)*(this + 0x7E) ) /*0x632962*/
            LOBYTE(a2) = j; /*0x632964*/
        }
      }
    }
    SaveLoad_SaveData(g_TESSaveLoadGame, &a2, 1u); /*0x63297f*/
  }
  v21 = *(float *)&a3; /*0x632984*/
  v22 = sub_651AD0(this, a3); /*0x63298b*/
  v23 = g_TESSaveLoadGame; /*0x63299a*/
  v45 = v22; /*0x6329a0*/
  SaveLoad_SaveData(v23, &v45, 2u); /*0x6329a4*/
  if ( (_WORD)v45 ) /*0x6329af*/
    sub_651B90(this, v21); /*0x6329b4*/
  v24 = g_TESSaveLoadGame; /*0x6329b9*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x5Au ) /*0x6329c3*/
  {
    v25 = 0; /*0x6329c9*/
    v26 = this + 0xB2; /*0x6329cb*/
    while ( 1 ) /*0x6329d9*/
    {
      v27 = *v26; /*0x6329d9*/
      v7 = *v26 == 0; /*0x6329dc*/
      a2 = 0; /*0x6329de*/
      if ( !v7 ) /*0x6329e6*/
        a2 = *(_DWORD *)(v27 + 0xC); /*0x6329eb*/
      SaveLoad_SaveFormID(v24, &a2, 4u); /*0x6329f6*/
      SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + v25++ + 0x2DC, 1u); /*0x632a0b*/
      ++v26; /*0x632a13*/
      if ( v25 >= 5 ) /*0x632a19*/
        break; /*0x632a19*/
      v24 = g_TESSaveLoadGame; /*0x6329d3*/
    }
    v28 = *(this + 0xB9); /*0x632a1b*/
    *(float *)&a3 = 0.0; /*0x632a23*/
    if ( v28 ) /*0x632a2b*/
      a3 = *(int *)(v28 + 0xC); /*0x632a30*/
    SaveLoad_SaveFormID(g_TESSaveLoadGame, (const unsigned int *)&a3, 4u); /*0x632a41*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0xBA, 1u); /*0x632a55*/
    v24 = g_TESSaveLoadGame; /*0x632a5a*/
  }
  if ( v24->currentVersion >= 0x5Du ) /*0x632a66*/
  {
    SaveLoad_SaveData(v24, this + 0xAB, 4u); /*0x632a71*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0xAC, 4u); /*0x632a85*/
    v24 = g_TESSaveLoadGame; /*0x632a8a*/
  }
  if ( v24->currentVersion >= 0x6Au ) /*0x632a94*/
  {
    v29 = *(this + 0x96); /*0x632a96*/
    a2 = 0; /*0x632a9e*/
    if ( v29 ) /*0x632aa2*/
      a2 = *(_DWORD *)(v29 + 0xC); /*0x632aa7*/
    SaveLoad_SaveFormID(v24, &a2, 4u); /*0x632ab2*/
    v24 = g_TESSaveLoadGame; /*0x632ab7*/
  }
  if ( v24->currentVersion >= 0x71u ) /*0x632ac1*/
  {
    SaveLoad_SaveData(v24, this + 0x74, 1u); /*0x632ad0*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x76, 4u); /*0x632ae4*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x77, 4u); /*0x632af8*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x78, 4u); /*0x632b0c*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0xAA, 1u); /*0x632b20*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x79, 1u); /*0x632b34*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x7A, 4u); /*0x632b48*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x90, 4u); /*0x632b5c*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0xAA, 1u); /*0x632b6a*/
    v24 = g_TESSaveLoadGame; /*0x632b6f*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)v24->currentlySavingFormHeader; /*0x632b7e*/
    v31 = v24->bufferCursor; /*0x632b86*/
    if ( currentlySavingFormHeader )
    {
      v32 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x632b8e*/
      v33 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v32->vtbl->GetEditorName)( /*0x632bae*/
                            v32,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x2B9B,
                            ".\\AI\\HighProcess.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v31 - v40,
        *currentlySavingFormHeader,
        v33,
        v36,
        v37,
        v38);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v31 - v40, 0x2B9B, ".\\AI\\HighProcess.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x632bea*/
  {
    v34 = v46; /*0x632bf9*/
    v35 = g_TESSaveLoadGame->bufferCursor; /*0x632bfd*/
    if ( v35 > v46 + 0xFFFF ) /*0x632c08*/
      PrintError( /*0x632c19*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\HighProcess.cpp",
        0x2B9B);
    *(_WORD *)v34 = (_WORD)v35 - (_WORD)v34; /*0x632c23*/
  }
}
