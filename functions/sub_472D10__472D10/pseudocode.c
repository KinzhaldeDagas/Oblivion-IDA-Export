// Serializes current or queued AnimIdle state with debug size accounting; form references remain subject to native save/load resolution.
void __cdecl sub_472D10(int a1, float **a2, _DWORD *a3, float a4)
{
  TESSaveLoad *v4; // ecx
  UInt32 v5; // ebp
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  float **v8; // esi
  float *v9; // eax
  unsigned __int16 v10; // ax
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  _WORD *v16; // edi
  unsigned int v17; // esi
  int v18; // [esp-4h] [ebp-28h]
  int v19; // [esp+0h] [ebp-24h]
  size_t v20; // [esp+4h] [ebp-20h]
  size_t v21; // [esp+4h] [ebp-20h]
  const char *v22; // [esp+4h] [ebp-20h]
  int v23; // [esp+14h] [ebp-10h] BYREF
  UInt32 v24; // [esp+18h] [ebp-Ch]
  int Src; // [esp+1Ch] [ebp-8h] BYREF
  int v26; // [esp+20h] [ebp-4h] BYREF

  v4 = g_TESSaveLoadGame; /*0x472d13*/
  v26 = 0; /*0x472d1b*/
  v5 = v4->unk000[5]; /*0x472d23*/
  v24 = 0; /*0x472d27*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x472d2f*/
  {
    v6 = g_TESSaveLoadGame; /*0x472d38*/
    LODWORD(v20) = 4; /*0x472d3e*/
    Src = 0x4B4F4C42; /*0x472d45*/
    SaveLoad_SaveData((int)v6, &Src, v20); /*0x472d4d*/
    v7 = g_TESSaveLoadGame; /*0x472d52*/
    LODWORD(v21) = 2; /*0x472d5b*/
    v24 = g_TESSaveLoadGame->unk000[5]; /*0x472d62*/
    SaveLoad_SaveData((int)v7, &v26, v21); /*0x472d66*/
  }
  v8 = a2; /*0x472d6b*/
  v23 = 0; /*0x472d71*/
  if ( a2 ) /*0x472d79*/
  {
    v9 = a2[9]; /*0x472d7b*/
    if ( v9 ) /*0x472d80*/
      v23 = *((_DWORD *)v9 + 3); /*0x472d85*/
  }
  SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&v23, 4u); /*0x472d96*/
  if ( v23 ) /*0x472da0*/
  {
    v10 = 0xD; /*0x472da7*/
    if ( v8[4] ) /*0x472da2*/
      v10 = BSAnimGroupSequence_GetSaveStateSize() + 0xE; /*0x472db7*/
    LODWORD(v20) = 2; /*0x472dbd*/
    v11 = g_TESSaveLoadGame; /*0x472dc4*/
    a2 = (float **)v10; /*0x472dca*/
    SaveLoad_SaveData((int)v11, &a2, v20); /*0x472dce*/
    AnimIdle_SaveSlotState(v8, a4, a3); /*0x472de2*/
  }
  if ( Global_DebugSaveBuffer )
  {
    v12 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x472df5*/
    v13 = g_TESSaveLoadGame->unk000[5]; /*0x472dfd*/
    if ( v12 )
    {
      v14 = TESForm_LookupByFormID(*v12); /*0x472e05*/
      v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v14->vtbl->GetEditorName)( /*0x472e25*/
                            v14,
                            *(UInt32 *)((char *)v12 + 5),
                            0xF72,
                            "..\\TES Shared\\Animation.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v13 - v5,
        *v12,
        v15,
        v18,
        v19,
        v22);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v13 - v5, 0xF72, "..\\TES Shared\\Animation.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x472e5d*/
  {
    v16 = (_WORD *)v24; /*0x472e6c*/
    v17 = g_TESSaveLoadGame->unk000[5]; /*0x472e70*/
    if ( v17 > v24 + 0xFFFF ) /*0x472e7b*/
      PrintError( /*0x472e8c*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\Animation.cpp",
        0xF72);
    *v16 = v17 - (_WORD)v16; /*0x472e96*/
  }
}
