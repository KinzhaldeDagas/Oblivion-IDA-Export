void __thiscall ScriptEventList_Save_(void *this)
{
  bool v2; // zf
  TESSaveLoadGame_SerializationView *v4; // ecx
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v6; // ecx
  TESSaveLoadGame_SerializationView *v7; // ecx
  TESSaveLoadGame_SerializationView *v8; // ecx
  int i; // edi
  double *v10; // edx
  unsigned int *v11; // esi
  _DWORD *v12; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  unsigned int v17; // eax
  TESSaveLoadGame_SerializationView *v18; // ecx
  unsigned __int8 *v19; // edi
  unsigned __int8 *v20; // esi
  int v21; // [esp-Ch] [ebp-3Ch]
  int v22; // [esp-8h] [ebp-38h]
  const char *v23; // [esp-4h] [ebp-34h]
  bool v24; // [esp+13h] [ebp-1Dh] BYREF
  int v25; // [esp+14h] [ebp-1Ch] BYREF
  unsigned __int8 *v26; // [esp+18h] [ebp-18h]
  unsigned __int8 *v27; // [esp+1Ch] [ebp-14h]
  unsigned int Src; // [esp+20h] [ebp-10h] BYREF
  int source; // [esp+24h] [ebp-Ch] BYREF
  unsigned int v30; // [esp+28h] [ebp-8h] BYREF
  unsigned __int8 *v31; // [esp+2Ch] [ebp-4h]

  v2 = Global_DebugSaveBuffer == 0; /*0x4fa2d7*/
  v4 = g_TESSaveLoadGame; /*0x4fa2df*/
  source = 0; /*0x4fa2e5*/
  bufferCursor = v4->bufferCursor; /*0x4fa2e9*/
  v27 = 0; /*0x4fa2ee*/
  v26 = bufferCursor; /*0x4fa2f2*/
  if ( !v2 ) /*0x4fa2f6*/
    v26 = bufferCursor; /*0x4fa2f8*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4fa2fc*/
  {
    v6 = g_TESSaveLoadGame; /*0x4fa305*/
    Src = 0x4B4F4C42; /*0x4fa312*/
    SaveLoad_SaveData(v6, &Src, 4u); /*0x4fa31a*/
    v7 = g_TESSaveLoadGame; /*0x4fa31f*/
    v27 = g_TESSaveLoadGame->bufferCursor; /*0x4fa32f*/
    SaveLoad_SaveData(v7, &source, 2u); /*0x4fa333*/
  }
  v8 = g_TESSaveLoadGame; /*0x4fa338*/
  v25 = 0; /*0x4fa33e*/
  v31 = v8->bufferCursor; /*0x4fa34c*/
  SaveLoad_SaveData(v8, &v25, 2u); /*0x4fa350*/
  for ( i = *((_DWORD *)this + 3); i; i = *(_DWORD *)(i + 4) ) /*0x4fa35a*/
  {
    v10 = *(double **)i; /*0x4fa360*/
    if ( *(_DWORD *)i ) /*0x4fa360*/
    {
      v11 = (unsigned int *)(v10 + 1); /*0x4fa368*/
      if ( 0.0 != v10[1] ) /*0x4fa372*/
      {
        if ( *(_DWORD *)this ) /*0x4fa374*/
        {
          v12 = (_DWORD *)(*(_DWORD *)this + 0x40); /*0x4fa37b*/
          if ( *(_DWORD *)this != 0xFFFFFFC0 ) /*0x4fa380*/
          {
            while ( *v12 ) /*0x4fa386*/
            {
              if ( *(_DWORD *)(*v12 + 0xC) == *(_DWORD *)v10 ) /*0x4fa38d*/
              {
                v17 = *v11; /*0x4fa462*/
                Src = *(_DWORD *)v10 | 0xF0000000; /*0x4fa470*/
                v18 = g_TESSaveLoadGame; /*0x4fa474*/
                v30 = v17; /*0x4fa47b*/
                SaveLoad_SaveData(v18, &Src, 4u); /*0x4fa47f*/
                SaveLoad_SaveFormID(g_TESSaveLoadGame, &v30, 4u); /*0x4fa491*/
                goto LABEL_14; /*0x4fa496*/
              }
              v12 = (_DWORD *)v12[1]; /*0x4fa393*/
              if ( !v12 ) /*0x4fa398*/
                break; /*0x4fa398*/
            }
          }
        }
        SaveLoad_SaveData(g_TESSaveLoadGame, v10, 4u); /*0x4fa39a*/
        SaveLoad_SaveData(g_TESSaveLoadGame, v11, 8u); /*0x4fa3b1*/
LABEL_14:
        ++v25; /*0x4fa3b6*/
      }
    }
  }
  *(_WORD *)v31 = v25; /*0x4fa3cb*/
  v24 = *((_DWORD *)this + 4) != 0; /*0x4fa3d7*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v24, 1u); /*0x4fa3e9*/
  if ( v24 ) /*0x4fa3f2*/
    SaveLoad_SaveData(g_TESSaveLoadGame, *((const void **)this + 4), 8u); /*0x4fa400*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4fa416*/
    v14 = g_TESSaveLoadGame->bufferCursor; /*0x4fa41e*/
    if ( currentlySavingFormHeader )
    {
      v15 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4fa426*/
      v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)( /*0x4fa446*/
                            v15,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x296,
                            "..\\TES Shared\\TESScript.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v14 - v26,
        *currentlySavingFormHeader,
        v16,
        v21,
        v22,
        v23);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v14 - v26, 0x296, "..\\TES Shared\\TESScript.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4fa4bd*/
  {
    v19 = v27; /*0x4fa4cc*/
    v20 = g_TESSaveLoadGame->bufferCursor; /*0x4fa4d0*/
    if ( v20 > v27 + 0xFFFF ) /*0x4fa4db*/
      PrintError( /*0x4fa4ec*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESScript.cpp",
        0x296);
    *(_WORD *)v19 = (_WORD)v20 - (_WORD)v19; /*0x4fa4f6*/
  }
}
