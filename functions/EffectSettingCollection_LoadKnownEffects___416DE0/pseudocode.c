int __cdecl EffectSettingCollection_LoadKnownEffects_(int a1, int a2, int a3, __int16 a4, int a5, int a6, char a7)
{
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-8h] [ebp-2Ch]
  size_t v12; // [esp-4h] [ebp-28h]
  size_t v13; // [esp-4h] [ebp-28h]
  int v14; // [esp-4h] [ebp-28h]
  __int16 v15[2]; // [esp+10h] [ebp-14h] BYREF
  int Dst; // [esp+20h] [ebp-4h] BYREF

  *(_DWORD *)v15 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v12) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v12);
    if ( Dst != 0x4B4F4C42 )
    {
      v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v7 )
      {
        v8 = TESForm_LookupByFormID(*v7);
        v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v8->vtbl->GetEditorName)(
                             v8,
                             *((unsigned __int8 *)v7 + 9),
                             *(UInt32 *)((char *)v7 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
          0xA4,
          *v7,
          v9,
          v11,
          v14);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
          0xA4,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    LODWORD(v13) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v15, v13);
  }
  return EffectSettingCollection_LoadKnownEffects__::LoadKnownEffects(a1, a2, a3, a4, a5, a6, a7);
}
