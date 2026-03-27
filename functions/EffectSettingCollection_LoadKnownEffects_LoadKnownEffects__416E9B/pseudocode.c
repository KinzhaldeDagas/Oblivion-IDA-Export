// positive sp value has been detected, the output may be wrong!
char __usercall EffectSettingCollection_LoadKnownEffects__::LoadKnownEffects@<al>(int a1@<ebx>, UInt32 *a2@<ebp>)
{
  int v2; // esi
  UInt32 v3; // eax
  UInt32 *v4; // edi
  UInt32 v5; // esi
  TESForm *v6; // ecx
  const char *v7; // eax
  const char *v8; // eax
  UInt32 v9; // edx
  int v11; // [esp-2Ch] [ebp-2Ch]
  int v12; // [esp-2Ch] [ebp-2Ch]
  size_t v13; // [esp-28h] [ebp-28h]
  size_t v14; // [esp-28h] [ebp-28h]
  int v15; // [esp-28h] [ebp-28h]
  int v16; // [esp-28h] [ebp-28h]
  unsigned __int16 v17; // [esp-14h] [ebp-14h]
  UInt32 *v18; // [esp-10h] [ebp-10h] BYREF
  UInt32 *v19; // [esp-Ch] [ebp-Ch] BYREF
  int v20; // [esp-8h] [ebp-8h] BYREF

  LODWORD(v13) = 4;
  v18 = a2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v18, v13);
  v2 = 0;
  if ( (int)v18 > (int)a2 )
  {
    do
    {
      LODWORD(v14) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v20, v14);
      v19 = a2;
      NiTMap_GetAt(&EffectSettingCollection, v20, &v19);
      if ( v19 == a2 )
        PrintError("Player Load: Failed to find known effect setting ID %08X", v20);
      else
        v19[0x16] |= 0x200000u;
      ++v2;
    }
    while ( v2 < (int)v18 );
  }
  LOBYTE(v3) = sub_45A170();
  if ( (_BYTE)v3 )
  {
    v4 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v5 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v4 == a2 )
    {
      LOBYTE(v3) = v17;
      v9 = v17 + a1;
      if ( v5 <= v9 )
      {
        if ( v5 < v9 )
          LOBYTE(v3) = PrintError(
                         "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                         a1 + v17 - v5,
                         "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                         0xB8,
                         LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v3) = PrintError(
                       "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                       v5 - v17 - a1,
                       "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                       0xB8,
                       LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    else
    {
      v6 = TESForm_LookupByFormID(*v4);
      v3 = v17 + a1;
      if ( v5 <= v3 )
      {
        if ( v5 < v3 )
        {
          v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)(
                               v6,
                               *((unsigned __int8 *)v4 + 9),
                               *(UInt32 *)((char *)v4 + 5));
          LOBYTE(v3) = PrintError(
                         "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s "
                         "with version %i and flags %08X",
                         a1 + v17 - v5,
                         "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                         0xB8,
                         *v4,
                         v8,
                         v12,
                         v16);
        }
      }
      else
      {
        v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)(
                             v6,
                             *((unsigned __int8 *)v4 + 9),
                             *(UInt32 *)((char *)v4 + 5));
        LOBYTE(v3) = PrintError(
                       "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wit"
                       "h version %i and flags %08X",
                       v5 - v17 - a1,
                       "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                       0xB8,
                       *v4,
                       v7,
                       v11,
                       v15);
      }
    }
  }
  return v3;
}
