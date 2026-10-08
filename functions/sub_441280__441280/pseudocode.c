char __thiscall sub_441280(int *this)
{
  UInt32 v2; // ebx
  UInt32 *v3; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  TESSaveLoad *v6; // ecx
  unsigned int v7; // esi
  TESForm *v8; // eax
  void *v9; // eax
  UInt32 v10; // eax
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // ecx
  const char *v15; // eax
  const char *v16; // eax
  UInt32 v17; // edx
  int v19; // [esp-10h] [ebp-30h]
  int v20; // [esp-10h] [ebp-30h]
  size_t v21; // [esp-Ch] [ebp-2Ch]
  size_t v22; // [esp-Ch] [ebp-2Ch]
  int v23; // [esp-Ch] [ebp-2Ch]
  int v24; // [esp-Ch] [ebp-2Ch]
  int v25; // [esp-8h] [ebp-28h]
  size_t v26; // [esp-4h] [ebp-24h]
  size_t v27; // [esp-4h] [ebp-24h]
  int v28; // [esp-4h] [ebp-24h]
  size_t v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+4h] [ebp-1Ch]
  unsigned int v31; // [esp+8h] [ebp-18h]
  int v32; // [esp+Ch] [ebp-14h] BYREF
  int a1; // [esp+10h] [ebp-10h] BYREF
  int Dst; // [esp+14h] [ebp-Ch] BYREF
  _BYTE v35[8]; // [esp+18h] [ebp-8h] BYREF

  v32 = 0; /*0x44128e*/
  v2 = 0; /*0x441296*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    LODWORD(v26) = 4; /*0x4412ab*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v26); /*0x4412b2*/
    if ( Dst != 0x4B4F4C42 )
    {
      v3 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x4412c6*/
      if ( v3 )
      {
        v4 = TESForm_LookupByFormID(*v3); /*0x4412d3*/
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)( /*0x4412ee*/
                             v4,
                             *((unsigned __int8 *)v3 + 9),
                             *(UInt32 *)((char *)v3 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TES.cpp",
          0x15F6,
          *v3,
          v5,
          v25,
          v28);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TES.cpp",
          0x15F6,
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v2 = g_TESSaveLoadGame->unk000[5]; /*0x44132f*/
    LODWORD(v27) = 2; /*0x441332*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &v32, v27); /*0x441339*/
  }
  v6 = g_TESSaveLoadGame; /*0x44133e*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x14u ) /*0x441348*/
  {
    LODWORD(v26) = 4; /*0x44134e*/
    SaveLoad_LoadData((int)v6, &a1, v26); /*0x441355*/
    v7 = 0; /*0x44135a*/
    if ( a1 ) /*0x441360*/
    {
      do /*0x4413c6*/
      {
        LODWORD(v29) = 4; /*0x441368*/
        SaveLoad_LoadFormID(v35, v29, v30, v31, v32); /*0x44136f*/
        LODWORD(v22) = 2; /*0x441374*/
        SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v22); /*0x441381*/
        if ( a1 ) /*0x44138c*/
        {
          v8 = TESForm_LookupByFormID(a1); /*0x44139d*/
          v9 = OblivionDynamicCast( /*0x4413a6*/
                 v8,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESActorBase `RTTI Type Descriptor',
                 0);
          if ( v9 ) /*0x4413b0*/
            sub_440FA0(this, (int)v9, Dst); /*0x4413ba*/
        }
        ++v7; /*0x4413bf*/
      }
      while ( v7 < v31 ); /*0x4413c6*/
    }
    v6 = g_TESSaveLoadGame; /*0x4413c8*/
  }
  if ( LOBYTE(v6[1].createdObjectList.next) >= 0x32u ) /*0x4413d2*/
  {
    LODWORD(v21) = 4; /*0x4413d4*/
    SaveLoad_LoadData((int)v6, &source, v21);   // ModernWindowsCompatible patch site: load-game reads saved global animation timer flt_B33A30; patch calls SaveLoad_LoadData then resets overlarge positive timer to 0 before scene controllers use it. /*0x4413db*/
  }
  LOBYTE(v10) = TESSaveLoadGame_UseSaveGameBlocks(); /*0x4413e6*/
  if ( (_BYTE)v10 ) /*0x4413ed*/
  {
    v11 = g_TESSaveLoadGame; /*0x4413f3*/
    v12 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x4413f9*/
    v13 = g_TESSaveLoadGame->unk000[5]; /*0x441401*/
    if ( v12 ) /*0x441404*/
    {
      v14 = TESForm_LookupByFormID(*v12); /*0x441417*/
      v10 = (unsigned __int16)v30 + v2; /*0x441419*/
      if ( v13 <= v10 ) /*0x441421*/
      {
        if ( v13 < v10 ) /*0x441462*/
        {
          v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)( /*0x441479*/
                                v14,
                                *((unsigned __int8 *)v12 + 9),
                                *(UInt32 *)((char *)v12 + 5));
          LOBYTE(v10) = PrintError( /*0x441498*/
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s"
                          " with version %i and flags %08X",
                          v2 + (unsigned __int16)v30 - v13,
                          "..\\TES Shared\\TES.cpp",
                          0x16E4,
                          *v12,
                          v16,
                          v20,
                          v24);
        }
      }
      else
      {
        v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)( /*0x441434*/
                              v14,
                              *((unsigned __int8 *)v12 + 9),
                              *(UInt32 *)((char *)v12 + 5));
        LOBYTE(v10) = PrintError( /*0x441453*/
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wi"
                        "th version %i and flags %08X",
                        v13 - (unsigned __int16)v30 - v2,
                        "..\\TES Shared\\TES.cpp",
                        0x16E4,
                        *v12,
                        v15,
                        v19,
                        v23);
      }
    }
    else
    {
      LOBYTE(v10) = v30; /*0x4414a7*/
      v17 = (unsigned __int16)v30 + v2; /*0x4414ac*/
      if ( v13 <= v17 ) /*0x4414b1*/
      {
        if ( v13 < v17 ) /*0x4414db*/
          LOBYTE(v10) = PrintError( /*0x4414f6*/
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          v2 + (unsigned __int16)v30 - v13,
                          "..\\TES Shared\\TES.cpp",
                          0x16E4,
                          LOBYTE(v11[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v10) = PrintError( /*0x4414cc*/
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        v13 - (unsigned __int16)v30 - v2,
                        "..\\TES Shared\\TES.cpp",
                        0x16E4,
                        LOBYTE(v11[1].createdObjectList.next));
      }
    }
  }
  return v10; /*0x44145b*/
}
