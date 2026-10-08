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

  LODWORD(v13) = 4; /*0x416e9b*/
  v18 = a2; /*0x416ea8*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &v18, v13); /*0x416eac*/
  v2 = 0;                                       // MEF v51 bridge-stack audit: direct JMP preserves entry ESP; signed known-effects count is exactly dword [ESP+14h]. Bridge restores ESP before replaying the signed comparison. /*0x416eb1*/
  if ( (int)v18 > (int)a2 )
  {
    do
    {
      LODWORD(v14) = 4; /*0x416ec6*/
      SaveLoad_LoadData((int)g_TESSaveLoadGame, &v20, v14); /*0x416ecd*/
      v19 = a2; /*0x416ee1*/
      NiTMap_GetAt(&MEMORY[0xB33508], v20, &v19); /*0x416ee5*/
      if ( v19 == a2 )
        PrintError("Player Load: Failed to find known effect setting ID %08X", v20);
      else
        v19[0x16] |= 0x200000u; /*0x416ef2*/
      ++v2; /*0x416f09*/
    }
    while ( v2 < (int)v18 );
  }
  LOBYTE(v3) = TESSaveLoadGame_UseSaveGameBlocks(); /*0x416f18*/
  if ( (_BYTE)v3 ) /*0x416f1f*/
  {
    v4 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x416f2b*/
    v5 = g_TESSaveLoadGame->unk000[5]; /*0x416f33*/
    if ( v4 == a2 ) /*0x416f36*/
    {
      LOBYTE(v3) = v17; /*0x416fdb*/
      v9 = v17 + a1; /*0x416fe0*/
      if ( v5 <= v9 ) /*0x416fe5*/
      {
        if ( v5 < v9 ) /*0x417010*/
          LOBYTE(v3) = PrintError( /*0x41702b*/
                         "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                         a1 + v17 - v5,
                         "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                         0xB8,
                         LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v3) = PrintError( /*0x417000*/
                       "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                       v5 - v17 - a1,
                       "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                       0xB8,
                       LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    else
    {
      v6 = TESForm_LookupByFormID(*v4); /*0x416f49*/
      v3 = v17 + a1; /*0x416f4b*/
      if ( v5 <= v3 ) /*0x416f53*/
      {
        if ( v5 < v3 ) /*0x416f95*/
        {
          v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)( /*0x416fac*/
                               v6,
                               *((unsigned __int8 *)v4 + 9),
                               *(UInt32 *)((char *)v4 + 5));
          LOBYTE(v3) = PrintError( /*0x416fcb*/
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
        v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)( /*0x416f66*/
                             v6,
                             *((unsigned __int8 *)v4 + 9),
                             *(UInt32 *)((char *)v4 + 5));
        LOBYTE(v3) = PrintError( /*0x416f85*/
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
  return v3; /*0x416f94*/
}
