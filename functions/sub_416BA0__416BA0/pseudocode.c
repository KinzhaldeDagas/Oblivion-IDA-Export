char sub_416BA0()
{
  unsigned __int8 *bufferCursor; // eax
  int v2; // edx
  unsigned int v3; // ecx
  int v4; // ebp
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  int v9; // eax
  unsigned int v10; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  char result; // al
  unsigned __int8 *v16; // edi
  unsigned __int8 *v17; // esi
  int v18; // [esp-18h] [ebp-30h]
  int v19; // [esp-14h] [ebp-2Ch]
  const char *v20; // [esp-10h] [ebp-28h]
  int v21; // [esp+4h] [ebp-14h] BYREF
  unsigned __int8 *v22; // [esp+8h] [ebp-10h]
  int Src; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int8 *v24; // [esp+10h] [ebp-8h]
  int source; // [esp+14h] [ebp-4h] BYREF

  source = 0; /*0x416bb0*/
  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x416bb8*/
  v24 = 0; /*0x416bbb*/
  v22 = bufferCursor; /*0x416bc3*/
  if ( Global_DebugSaveBuffer ) /*0x416bc7*/
    v22 = bufferCursor; /*0x416bc9*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x416bcd*/
  {
    Src = 0x4B4F4C42; /*0x416be3*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 4u); /*0x416beb*/
    v24 = g_TESSaveLoadGame->bufferCursor; /*0x416c00*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 2u); /*0x416c04*/
  }
  v2 = unk_B33510; /*0x416c09*/
  v3 = unk_B3350C; /*0x416c0f*/
  v4 = 0; /*0x416c18*/
  v21 = 0; /*0x416c1b*/
  do /*0x416d11*/
  {
    v5 = 0; /*0x416c26*/
    if ( v3 ) /*0x416c2a*/
    {
      while ( !*(_DWORD *)(v2 + 4 * v5) ) /*0x416c34*/
      {
        if ( ++v5 >= v3 ) /*0x416c3b*/
          goto LABEL_9; /*0x416c3b*/
      }
      v6 = *(_DWORD **)(v2 + 4 * v5); /*0x416c68*/
    }
    else
    {
LABEL_9:
      v6 = 0; /*0x416c3d*/
    }
    v7 = v6; /*0x416c41*/
    while ( v7 ) /*0x416c43*/
    {
      Src = 0xFFFFFFFF; /*0x416c50*/
      Src = v7[1]; /*0x416c57*/
      v8 = v7[2]; /*0x416c5f*/
      if ( *v7 ) /*0x416c5b*/
      {
        v7 = (_DWORD *)*v7; /*0x416c64*/
      }
      else
      {
        v9 = (*(int (__thiscall **)(void *, _DWORD))(MEMORY[0xB33508] + 4))(&MEMORY[0xB33508], v7[1]); /*0x416c7f*/
        v3 = unk_B3350C; /*0x416c81*/
        v2 = unk_B33510; /*0x416c87*/
        v10 = v9 + 1; /*0x416c8d*/
        if ( v10 >= unk_B3350C ) /*0x416c92*/
        {
LABEL_17:
          v7 = 0; /*0x416ca2*/
        }
        else
        {
          while ( 1 ) /*0x416c94*/
          {
            v7 = *(_DWORD **)(unk_B33510 + 4 * v10); /*0x416c94*/
            if ( v7 ) /*0x416c99*/
              break; /*0x416c99*/
            if ( ++v10 >= unk_B3350C ) /*0x416ca0*/
              goto LABEL_17; /*0x416ca0*/
          }
        }
      }
      if ( v8 ) /*0x416ca6*/
      {
        if ( (*(_DWORD *)(v8 + 0x58) & 0x200000) != 0 ) /*0x416cb0*/
        {
          if ( v4 ) /*0x416cb4*/
          {
            SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 4u); /*0x416cca*/
            v2 = unk_B33510; /*0x416ccf*/
            v3 = unk_B3350C; /*0x416cd5*/
          }
          else
          {
            ++v21; /*0x416cb6*/
          }
        }
      }
    }
    if ( !v4 ) /*0x416ce5*/
    {
      SaveLoad_SaveData(g_TESSaveLoadGame, &v21, 4u); /*0x416cf4*/
      if ( !v21 ) /*0x416cfd*/
        break; /*0x416cfd*/
      v2 = unk_B33510; /*0x416cff*/
      v3 = unk_B3350C; /*0x416d05*/
    }
    ++v4; /*0x416d0b*/
  }
  while ( v4 < 2 ); /*0x416d11*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x416d25*/
    v12 = g_TESSaveLoadGame->bufferCursor; /*0x416d2d*/
    if ( currentlySavingFormHeader )
    {
      v13 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x416d35*/
      v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)( /*0x416d55*/
                            v13,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x9D,
                            "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - v22,
        *currentlySavingFormHeader,
        v14,
        v18,
        v19,
        v20);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v12 - v22,
        0x9D,
        "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
    }
  }
  result = TESSaveLoadGame_UseSaveGameBlocks(); /*0x416d91*/
  if ( result ) /*0x416d98*/
  {
    v16 = v24; /*0x416da0*/
    v17 = g_TESSaveLoadGame->bufferCursor; /*0x416da4*/
    result = (_BYTE)v24 - 1; /*0x416da7*/
    if ( v17 > v24 + 0xFFFF ) /*0x416daf*/
      result = PrintError( /*0x416dc0*/
                 "Save Game Block in file %s on line %i is greater than maximum short size",
                 "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                 0x9D);
    *(_WORD *)v16 = (_WORD)v17 - (_WORD)v16; /*0x416dca*/
  }
  return result; /*0x416dd1*/
}
