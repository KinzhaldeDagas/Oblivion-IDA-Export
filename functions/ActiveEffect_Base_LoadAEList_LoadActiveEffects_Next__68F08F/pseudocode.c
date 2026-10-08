// positive sp value has been detected, the output may be wrong!
void __usercall ActiveEffect_Base_LoadAEList__::LoadActiveEffects_Next(
        int a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  TESSaveLoad *v12; // ecx
  UInt32 *v13; // edi
  UInt32 v14; // esi
  TESForm *v15; // ecx
  UInt32 v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  UInt32 v19; // edx
  int v20; // [esp-2Ch] [ebp-2Ch]
  int v21; // [esp-2Ch] [ebp-2Ch]
  int v22; // [esp-28h] [ebp-28h]
  int v23; // [esp-28h] [ebp-28h]
  unsigned __int16 v24; // [esp-14h] [ebp-14h]
  unsigned __int16 v25; // [esp-10h] [ebp-10h]
  int v26; // [esp-Ch] [ebp-Ch]

  if ( a1 + 1 < v24 ) /*0x68f099*/
  {
    ActiveEffect_Base_LoadAEList__::LoadActiveEffects_Loop(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);// OBME/OBMEFix fidelity: loop increments active-effect record index in EBP. OBME wrapper increments EBP once more when it consumes its auxiliary conversion record, preserving two-record OBME save layout. /*0x68f099*/
  }
  else
  {
    if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x68f0a1*/
    {
      v12 = g_TESSaveLoadGame; /*0x68f0ae*/
      v13 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x68f0b4*/
      v14 = g_TESSaveLoadGame->unk000[5]; /*0x68f0bc*/
      if ( v13 ) /*0x68f0bf*/
      {
        v15 = TESForm_LookupByFormID(*v13); /*0x68f0d1*/
        v16 = v26 + v25; /*0x68f0d8*/
        if ( v14 > v16 ) /*0x68f0df*/
        {
          v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)( /*0x68f0f2*/
                                v15,
                                *((unsigned __int8 *)v13 + 9),
                                *(UInt32 *)((char *)v13 + 5));
          PrintError( /*0x68f111*/
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %"
            "i and flags %08X",
            v14 - v25 - v26,
            ".\\Magic\\ActiveEffect.cpp",
            0x39F,
            *v13,
            v17,
            v20,
            v22);
          return; /*0x68f120*/
        }
        if ( v14 < v16 ) /*0x68f121*/
        {
          v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)( /*0x68f138*/
                                v15,
                                *((unsigned __int8 *)v13 + 9),
                                *(UInt32 *)((char *)v13 + 5));
          PrintError( /*0x68f157*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v26 + v25 - v14,
            ".\\Magic\\ActiveEffect.cpp",
            0x39F,
            *v13,
            v18,
            v21,
            v23);
          return; /*0x68f166*/
        }
      }
      else
      {
        v19 = v25 + v26; /*0x68f170*/
        if ( v14 > v19 ) /*0x68f175*/
        {
          PrintError( /*0x68f190*/
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
            v14 - v25 - v26,
            ".\\Magic\\ActiveEffect.cpp",
            0x39F,
            LOBYTE(v12[1].createdObjectList.next));
          return; /*0x68f19f*/
        }
        if ( v14 < v19 ) /*0x68f1a0*/
          PrintError( /*0x68f1bb*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v26 + v25 - v14,
            ".\\Magic\\ActiveEffect.cpp",
            0x39F,
            LOBYTE(v12[1].createdObjectList.next));
      }
    }
    ActiveEffect_Base_LoadAEList__::Done(); /*0x68f0a8*/
  }
}
