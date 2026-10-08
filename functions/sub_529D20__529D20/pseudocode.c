void __thiscall TESQuest::SaveGame(TESForm *this, int a2)
{
  TESSaveLoadGame_SerializationView *v4; // ecx
  bool v5; // zf
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v7; // ecx
  TESSaveLoadGame_SerializationView *v8; // ecx
  TESSaveLoadGame_SerializationView *v9; // eax
  char *v10; // eax
  _BYTE *v11; // esi
  char v12; // al
  TESSaveLoadGame_SerializationView *v13; // ecx
  int *v14; // ebp
  int v15; // eax
  const void *v16; // esi
  TESSaveLoadGame_SerializationView *v17; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v19; // esi
  TESForm *v20; // eax
  const char *v21; // eax
  _WORD *v22; // edi
  unsigned __int8 *v23; // esi
  int v24; // [esp-Ch] [ebp-50h]
  int v25; // [esp-8h] [ebp-4Ch]
  const char *v26; // [esp-4h] [ebp-48h]
  _WORD a1[13]; // [esp+16h] [ebp-2Eh] BYREF
  unsigned __int8 *v28; // [esp+30h] [ebp-14h]
  unsigned __int8 *v29; // [esp+34h] [ebp-10h]
  unsigned int v30; // [esp+40h] [ebp-4h]

  TESForm_SaveModifiedForm(this, a2); /*0x529d4e*/
  v4 = g_TESSaveLoadGame; /*0x529d53*/
  v5 = Global_DebugSaveBuffer == 0; /*0x529d5b*/
  *(_DWORD *)&a1[0xB] = 0; /*0x529d61*/
  bufferCursor = v4->bufferCursor; /*0x529d65*/
  *(_DWORD *)&a1[9] = 0; /*0x529d68*/
  *(_DWORD *)&a1[5] = bufferCursor; /*0x529d6c*/
  if ( !v5 ) /*0x529d70*/
    *(_DWORD *)&a1[5] = bufferCursor; /*0x529d72*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x529d76*/
  {
    v7 = g_TESSaveLoadGame; /*0x529d86*/
    *(_DWORD *)&a1[3] = 0x4B4F4C42; /*0x529d8c*/
    SaveLoad_SaveData(v7, &a1[3], 4u); /*0x529d94*/
    v8 = g_TESSaveLoadGame; /*0x529d99*/
    *(_DWORD *)&a1[9] = g_TESSaveLoadGame->bufferCursor; /*0x529da9*/
    SaveLoad_SaveData(v8, &a1[0xB], 2u); /*0x529dad*/
  }
  if ( (a2 & 4) != 0 ) /*0x529db7*/
  {
    LOBYTE(a1[1]) = *((_BYTE *)this + 0x3C); /*0x529dc2*/
    TESForm_SaveDataToCurrentSaveGame(this, &a1[1], 1u); /*0x529dc9*/
  }
  if ( (a2 & 0x10000000) != 0 ) /*0x529dd6*/
  {
    v9 = g_TESSaveLoadGame; /*0x529ddc*/
    HIBYTE(a1[0]) = 0; /*0x529de1*/
    v29 = v9->bufferCursor; /*0x529dee*/
    TESForm_SaveDataToCurrentSaveGame(this, (char *)a1 + 1, 1u); /*0x529df5*/
    v10 = (char *)this + 0x40; /*0x529dfa*/
    *(_DWORD *)&a1[3] = (char *)this + 0x40; /*0x529dff*/
    if ( this != (TESForm *)0xFFFFFFC0 ) /*0x529e03*/
    {
      while ( 1 ) /*0x529e14*/
      {
        v11 = *(_BYTE **)v10; /*0x529e14*/
        if ( *(_DWORD *)v10 ) /*0x529e14*/
        {
          v12 = *v11; /*0x529e21*/
          LOBYTE(a1[2]) = v11[1]; /*0x529e29*/
          HIBYTE(a1[1]) = v12; /*0x529e30*/
          TESForm_SaveDataToCurrentSaveGame(this, (char *)&a1[1] + 1, 1u); /*0x529e34*/
          TESForm_SaveDataToCurrentSaveGame(this, &a1[2], 1u); /*0x529e42*/
          v13 = g_TESSaveLoadGame; /*0x529e47*/
          LOBYTE(a1[0]) = 0; /*0x529e4d*/
          v28 = v13->bufferCursor; /*0x529e5d*/
          TESForm_SaveDataToCurrentSaveGame(this, a1, 1u); /*0x529e61*/
          v14 = (int *)(v11 + 4); /*0x529e66*/
          if ( v11 != (_BYTE *)0xFFFFFFFC ) /*0x529e6b*/
          {
            do /*0x529edd*/
            {
              v15 = *v14; /*0x529e70*/
              if ( *v14 ) /*0x529e70*/
              {
                v16 = *(const void **)(v15 + 0x64); /*0x529e7a*/
                HIBYTE(a1[2]) = *(_BYTE *)(v15 + 0x60); /*0x529e83*/
                TESForm_SaveDataToCurrentSaveGame(this, (char *)&a1[2] + 1, 1u); /*0x529e8a*/
                if ( v16 ) /*0x529e91*/
                {
                  SaveLoad_SaveData(g_TESSaveLoadGame, v16, 4u); /*0x529e9c*/
                }
                else
                {
                  sub_47D260(&a1[7]); /*0x529ea7*/
                  v17 = g_TESSaveLoadGame; /*0x529eac*/
                  v30 = 0; /*0x529eb9*/
                  SaveLoad_SaveData(v17, &a1[7], 4u); /*0x529ebd*/
                  v30 = 0xFFFFFFFF; /*0x529ec6*/
                  Shared_NoOpVirtual_60D0A0(&a1[7]); /*0x529ece*/
                }
                ++LOBYTE(a1[0]); /*0x529ed3*/
              }
              v14 = (int *)v14[1]; /*0x529ed8*/
            }
            while ( v14 ); /*0x529edd*/
          }
          v10 = *(char **)&a1[3]; /*0x529ee7*/
          *v28 = a1[0]; /*0x529eeb*/
          ++HIBYTE(a1[0]); /*0x529eed*/
        }
        *(_DWORD *)&a1[3] = *((_DWORD *)v10 + 1); /*0x529ef7*/
        if ( !*(_DWORD *)&a1[3] ) /*0x529efb*/
          break; /*0x529efb*/
        v10 = *(char **)&a1[3]; /*0x529e10*/
      }
    }
    *v29 = HIBYTE(a1[0]); /*0x529f09*/
  }
  if ( (a2 & 0x8000000) != 0 ) /*0x529f13*/
    ScriptEventList_Save_(*((void **)this + 0x16)); /*0x529f18*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x529f2a*/
    v19 = g_TESSaveLoadGame->bufferCursor; /*0x529f32*/
    if ( currentlySavingFormHeader )
    {
      v20 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x529f3a*/
      v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v20->vtbl->GetEditorName)( /*0x529f5a*/
                            v20,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0xC5A,
                            "..\\TES Shared\\TESQuest.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        &v19[-*(_DWORD *)&a1[5]],
        *currentlySavingFormHeader,
        v21,
        v24,
        v25,
        v26);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        &v19[-*(_DWORD *)&a1[5]],
        0xC5A,
        "..\\TES Shared\\TESQuest.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x529f96*/
  {
    v22 = *(_WORD **)&a1[9]; /*0x529fa5*/
    v23 = g_TESSaveLoadGame->bufferCursor; /*0x529fa9*/
    if ( (unsigned int)v23 > *(_DWORD *)&a1[9] + 0xFFFF ) /*0x529fb4*/
      PrintError( /*0x529fc5*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESQuest.cpp",
        0xC5A);
    *v22 = (_WORD)v23 - (_WORD)v22; /*0x529fcf*/
  }
}
