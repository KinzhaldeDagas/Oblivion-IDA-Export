char __cdecl EffectSettingCollection_LoadKnownEffects_()
{
  int v0; // ebx
  UInt32 *v1; // esi
  TESForm *v2; // eax
  const char *v3; // eax
  int v5; // [esp-8h] [ebp-2Ch]
  size_t v6; // [esp-4h] [ebp-28h]
  size_t v7; // [esp-4h] [ebp-28h]
  int v8; // [esp-4h] [ebp-28h]
  __int16 v9[2]; // [esp+10h] [ebp-14h] BYREF
  int Dst; // [esp+20h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x416def*/
  v0 = 0; /*0x416df3*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    LODWORD(v6) = 4; /*0x416e08*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v6); /*0x416e0f*/
    if ( Dst != 0x4B4F4C42 )
    {
      v1 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x416e23*/
      if ( v1 )
      {
        v2 = TESForm_LookupByFormID(*v1); /*0x416e30*/
        v3 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v2->vtbl->GetEditorName)( /*0x416e4b*/
                             v2,
                             *((unsigned __int8 *)v1 + 9),
                             *(UInt32 *)((char *)v1 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
          0xA4,
          *v1,
          v3,
          v5,
          v8);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
          0xA4,
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v0 = g_TESSaveLoadGame->unk000[5]; /*0x416e8c*/
    LODWORD(v7) = 2; /*0x416e8f*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, v9, v7); /*0x416e96*/
  }
  return EffectSettingCollection_LoadKnownEffects__::LoadKnownEffects(v0, 0);
}
