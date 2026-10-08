// OFE cache persistence verification 2026-10-02: 6B8750 serializes hasLinkedTopics, isInfoGeneralTopic (+20), infoNotSpoken (+21), and ownerQuest/topic/INFO through native SaveFormID. 6B8950 restores flags and resolves all three identities via native save-load fixup. Thus a routed Rumors cache can retain its actual custom topic at +24 and native InfoGeneral role marker without new savegame fields. DialogueResponse lists are reconstructed later by 425970; validate worldspace before using that cache.
void __thiscall MenuTopic::LoadGame(MenuTopicView *this, TESObjectREFR *speaker)
{
  UInt32 v3; // ebx
  UInt32 *v4; // edi
  TESForm *v5; // eax
  const char *v6; // eax
  TESForm *v7; // eax
  TESQuest *v8; // eax
  TESForm *v9; // eax
  TESTopic *v10; // eax
  TESForm *v11; // eax
  TESSaveLoad *v12; // ecx
  UInt32 *v13; // edi
  UInt32 v14; // esi
  TESForm *v15; // ecx
  UInt32 v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  UInt32 v19; // edx
  int v20; // [esp-18h] [ebp-14Ch]
  int v21; // [esp-18h] [ebp-14Ch]
  int v22; // [esp-14h] [ebp-148h]
  int v23; // [esp-14h] [ebp-148h]
  size_t v24; // [esp-Ch] [ebp-140h]
  size_t v25; // [esp-4h] [ebp-138h]
  int v26; // [esp-4h] [ebp-138h]
  int v27; // [esp+0h] [ebp-134h]
  int v28; // [esp+0h] [ebp-134h]
  unsigned __int16 v29; // [esp+0h] [ebp-134h]
  size_t v30; // [esp+4h] [ebp-130h]
  size_t v31; // [esp+4h] [ebp-130h]
  int v32; // [esp+4h] [ebp-130h]
  size_t v33; // [esp+4h] [ebp-130h]
  size_t v34; // [esp+4h] [ebp-130h]
  size_t v35; // [esp+4h] [ebp-130h]
  size_t v36; // [esp+4h] [ebp-130h]
  int v37; // [esp+4h] [ebp-130h]
  int v38; // [esp+4h] [ebp-130h]
  int v39; // [esp+8h] [ebp-12Ch]
  int v40; // [esp+Ch] [ebp-128h]
  int v41; // [esp+Ch] [ebp-128h]
  UInt32 v42; // [esp+Ch] [ebp-128h]
  int v43; // [esp+10h] [ebp-124h]
  UInt32 v44; // [esp+10h] [ebp-124h]
  int a1; // [esp+14h] [ebp-120h] BYREF
  int v46; // [esp+18h] [ebp-11Ch] BYREF
  _BYTE v47[12]; // [esp+1Ch] [ebp-118h] BYREF
  int Dst; // [esp+28h] [ebp-10Ch] BYREF
  char a2[260]; // [esp+2Ch] [ebp-108h] BYREF

  v46 = 0; /*0x6b896f*/
  v3 = 0; /*0x6b8977*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    LODWORD(v30) = 4; /*0x6b898c*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v30); /*0x6b8993*/
    if ( Dst != 0x4B4F4C42 )
    {
      v4 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x6b89a7*/
      if ( v4 )
      {
        v5 = TESForm_LookupByFormID(*v4); /*0x6b89b4*/
        v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v5->vtbl->GetEditorName)( /*0x6b89cf*/
                             v5,
                             *((unsigned __int8 *)v4 + 9),
                             *(UInt32 *)((char *)v4 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\Dialogue\\MenuTopic.cpp",
          0x235,
          *v4,
          v6,
          v27,
          v32);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\Dialogue\\MenuTopic.cpp",
          0x235,
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v3 = g_TESSaveLoadGame->unk000[5]; /*0x6b8a10*/
    LODWORD(v31) = 2; /*0x6b8a13*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &v46, v31); /*0x6b8a1a*/
  }
  _memset((int)a2, 0, sizeof(a2)); /*0x6b8a2b*/
  LODWORD(v30) = 1; /*0x6b8a39*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, (char *)&a1 + 3, v30); /*0x6b8a40*/
  if ( HIBYTE(a1) ) /*0x6b8a4b*/
  {
    LODWORD(v33) = HIBYTE(a1); /*0x6b8a50*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, a2, v33); /*0x6b8a5c*/
    BSStringT_Set(&this->displayName, a2, 0); /*0x6b8a6a*/
  }
  LODWORD(v33) = 1; /*0x6b8a75*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &this->hasLinkedTopics, v33); /*0x6b8a7b*/
  LODWORD(v34) = 1; /*0x6b8a80*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &this->isInfoGeneralTopic, v34); /*0x6b8a8c*/
  LODWORD(v35) = 1; /*0x6b8a97*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &this->infoNotSpoken, v35);// Restore cached INFOGENERAL UI marker independently of the TESTopicInfo modified-form spoken state. /*0x6b8a9d*/
  LODWORD(v36) = 4; /*0x6b8aa8*/
  SaveLoad_LoadFormID(v47, v36, v40, v43, a1); /*0x6b8aaf*/
  v7 = TESForm_LookupByFormID(a1); /*0x6b8ac7*/
  v8 = (TESQuest *)OblivionDynamicCast( /*0x6b8ad0*/
                     v7,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESQuest `RTTI Type Descriptor',
                     0);
  LODWORD(v25) = 4; /*0x6b8ad8*/
  this->ownerQuest = v8; /*0x6b8ade*/
  SaveLoad_LoadFormID(&v46, v25, v37, v39, v41); /*0x6b8ae8*/
  v9 = TESForm_LookupByFormID(v44); /*0x6b8b00*/
  v10 = (TESTopic *)OblivionDynamicCast( /*0x6b8b09*/
                      v9,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESTopic `RTTI Type Descriptor',
                      0);
  LODWORD(v24) = 4; /*0x6b8b11*/
  this->topic = v10; /*0x6b8b17*/
  SaveLoad_LoadFormID(&a1, v24, v26, v28, v38); /*0x6b8b21*/
  v11 = TESForm_LookupByFormID(v42); /*0x6b8b39*/
  this->info = (OblivionTopicInfo *)OblivionDynamicCast( /*0x6b8b47*/
                                      v11,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                      &TESTopicInfo `RTTI Type Descriptor',
                                      0);
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6b8b53*/
  {
    v12 = g_TESSaveLoadGame; /*0x6b8b60*/
    v13 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x6b8b66*/
    v14 = g_TESSaveLoadGame->unk000[5]; /*0x6b8b6e*/
    if ( v13 ) /*0x6b8b71*/
    {
      v15 = TESForm_LookupByFormID(*v13); /*0x6b8b84*/
      v16 = v29 + v3; /*0x6b8b86*/
      if ( v14 <= v16 ) /*0x6b8b8e*/
      {
        if ( v14 < v16 ) /*0x6b8bcd*/
        {
          v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)( /*0x6b8be4*/
                                v15,
                                *((unsigned __int8 *)v13 + 9),
                                *(UInt32 *)((char *)v13 + 5));
          PrintError( /*0x6b8c03*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v3 + v29 - v14,
            ".\\Dialogue\\MenuTopic.cpp",
            0x259,
            *v13,
            v18,
            v21,
            v23);
        }
      }
      else
      {
        v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)( /*0x6b8ba1*/
                              v15,
                              *((unsigned __int8 *)v13 + 9),
                              *(UInt32 *)((char *)v13 + 5));
        PrintError( /*0x6b8bc0*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v14 - v29 - v3,
          ".\\Dialogue\\MenuTopic.cpp",
          0x259,
          *v13,
          v17,
          v20,
          v22);
      }
    }
    else
    {
      v19 = v29 + v3; /*0x6b8c12*/
      if ( v14 <= v19 ) /*0x6b8c17*/
      {
        if ( v14 < v19 ) /*0x6b8c34*/
          PrintError( /*0x6b8c4f*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v3 + v29 - v14,
            ".\\Dialogue\\MenuTopic.cpp",
            0x259,
            LOBYTE(v12[1].createdObjectList.next));
      }
      else
      {
        PrintError( /*0x6b8c32*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v14 - v29 - v3,
          ".\\Dialogue\\MenuTopic.cpp",
          0x259,
          LOBYTE(v12[1].createdObjectList.next));
      }
    }
  }
}
