// Verified save-game block writer handles dynamic ExtraData records but has no ExtraDistantData/XLOD case. This is distinct from plugin-record serialization, whose ExtraDataList_Save case writes XLOD (12 bytes). Whether omitting it from save-game blocks is intentional static-data policy is Probable, not directly stated.
int __userpurge ExtraDataList_SaveGame@<eax>(ExtraDataList *this@<ecx>, double st7_0@<st0>, int a3, TESObjectREFR *a4)
{
  UInt32 v5; // ebx
  BSExtraData *m_data; // esi
  void *v7; // edi
  void *v8; // eax
  TESObjectCELL *v9; // ecx
  UInt32 *v10; // edi
  UInt32 v11; // esi
  TESForm *v12; // eax
  const char *v13; // eax
  _WORD *v14; // edi
  unsigned int v15; // esi
  int v17; // [esp-Ch] [ebp-C4h]
  int v18; // [esp-8h] [ebp-C0h]
  size_t v19; // [esp-4h] [ebp-BCh]
  size_t v20; // [esp-4h] [ebp-BCh]
  size_t v21; // [esp-4h] [ebp-BCh]
  const char *v22; // [esp-4h] [ebp-BCh]
  int v23; // [esp+10h] [ebp-A8h] BYREF
  int v24; // [esp+24h] [ebp-94h] BYREF
  int Src; // [esp+2Ch] [ebp-8Ch] BYREF
  UInt32 refID; // [esp+40h] [ebp-78h] BYREF
  UInt32 v27; // [esp+60h] [ebp-58h]
  UInt32 v28; // [esp+68h] [ebp-50h]
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // [esp+7Ch] [ebp-3Ch] BYREF
  int v30; // [esp+98h] [ebp-20h] BYREF
  UInt32 v31; // [esp+ACh] [ebp-Ch]
  _WORD *v32; // [esp+B4h] [ebp-4h]

  v30 = 0; /*0x421a1a*/
  v5 = g_TESSaveLoadGame->unk000[5]; /*0x421a21*/
  v28 = 0; /*0x421a25*/
  v27 = v5; /*0x421a29*/
  if ( Global_DebugSaveBuffer ) /*0x421a2d*/
    v27 = v5; /*0x421a2f*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x421a33*/
  {
    LODWORD(v19) = 4; /*0x421a42*/
    Src = 0x4B4F4C42; /*0x421a49*/
    SaveLoad_SaveData((int)g_TESSaveLoadGame, &Src, v19); /*0x421a51*/
    LODWORD(v20) = 2; /*0x421a5f*/
    v28 = g_TESSaveLoadGame->unk000[5]; /*0x421a69*/
    SaveLoad_SaveData((int)g_TESSaveLoadGame, &v30, v20); /*0x421a6d*/
  }
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalis_8); /*0x421a7c*/
  v24 = 0; /*0x421a87*/
  LODWORD(v19) = 2; /*0x421a8e*/
  v32 = (_WORD *)g_TESSaveLoadGame->unk000[5]; /*0x421a95*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, &v24, v19); /*0x421a9c*/
  m_data = this->members.m_data; /*0x421aa1*/
  if ( m_data ) /*0x421aa6*/
  {
    do /*0x422932*/
    {
      BYTE2(v23) = m_data->members.type; /*0x421aba*/
      v31 = g_TESSaveLoadGame->unk000[5]; /*0x421ac7*/
      switch ( m_data->members.type ) /*0x421aea*/
      {
        case kExtraData_PersistentCell: /*0x421aea*/
          if ( a4 ) /*0x422559*/
          {
            if ( a4->vtbl->IsActor(a4) && a4 != (TESObjectREFR *)reference ) /*0x422579*/
            {
              LODWORD(v21) = 1; /*0x422585*/
              SaveLoad_SaveData((int)g_TESSaveLoadGame, (char *)&v23 + 2, v21); /*0x42258c*/
              v8 = OblivionDynamicCast( /*0x42259e*/
                     m_data,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                     &ExtraPersistentCell `RTTI Type Descriptor',
                     0);
              refID = 0; /*0x4225a3*/
              v9 = *((TESObjectCELL **)v8 + 3); /*0x4225a7*/
              if ( v9 ) /*0x4225af*/
                refID = TESObjectCELL_GetWorldSpace(v9)->super.refID; /*0x4225b9*/
              SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&refID, 4u); /*0x4225ca*/
            }
          }
          break; /*0x4225ca*/
        case kExtraData_Script: /*0x421aea*/
          if ( (a3 & 0x4000020) != 0 ) /*0x421dc7*/
          {
            LODWORD(v21) = 1; /*0x421dcd*/
            SaveLoad_SaveData((int)g_TESSaveLoadGame, (char *)&v23 + 2, v21); /*0x421dd4*/
            v7 = *(void **)&m_data[1].members.type; /*0x421ddf*/
            CompareTo = m_data[1].vtbl[1].CompareTo; /*0x421deb*/
            SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&CompareTo, 4u); /*0x421df9*/
            ScriptEventList_Save_(v7, st7_0); /*0x421e00*/
          }
          break; /*0x421e05*/
        case kExtraData_Worn: /*0x421aea*/
        case kExtraData_WornLeft: /*0x421aea*/
        case kExtraData_CannotWear: /*0x421aea*/
        case kExtraData_BoundArmor: /*0x421aea*/
          JUMPOUT(0x421DA2); /*0x421da2*/
        case kExtraData_StartLocation: /*0x421aea*/
          JUMPOUT(0x4220CD); /*0x4220cd*/
        case kExtraData_Package: /*0x421aea*/
          JUMPOUT(0x421E57); /*0x421e57*/
        case kExtraData_TresPassPackage: /*0x421aea*/
          JUMPOUT(0x421F43); /*0x421f43*/
        case kExtraData_RunOncePacks: /*0x421aea*/
          JUMPOUT(0x422029); /*0x422029*/
        case kExtraData_ReferencePointer: /*0x421aea*/
          JUMPOUT(0x421FB6); /*0x421fb6*/
        case kExtraData_Follower: /*0x421aea*/
          JUMPOUT(0x422157); /*0x422157*/
        case kExtraData_Ghost: /*0x421aea*/
          JUMPOUT(0x42201D); /*0x42201d*/
        case kExtraData_Ownership: /*0x421aea*/
          JUMPOUT(0x421CF3); /*0x421cf3*/
        case kExtraData_Global: /*0x421aea*/
          JUMPOUT(0x421D34); /*0x421d34*/
        case kExtraData_Rank: /*0x421aea*/
          JUMPOUT(0x421D72); /*0x421d72*/
        case kExtraData_Count: /*0x421aea*/
          JUMPOUT(0x421AF1); /*0x421af1*/
        case kExtraData_Health: /*0x421aea*/
          JUMPOUT(0x421B25); /*0x421b25*/
        case kExtraData_Uses: /*0x421aea*/
          JUMPOUT(0x421B4F); /*0x421b4f*/
        case kExtraData_TimeLeft: /*0x421aea*/
          JUMPOUT(0x421B7C); /*0x421b7c*/
        case kExtraData_Charge: /*0x421aea*/
          JUMPOUT(0x421BA6); /*0x421ba6*/
        case kExtraData_Soul: /*0x421aea*/
          JUMPOUT(0x421BD6); /*0x421bd6*/
        case kExtraData_Lock: /*0x421aea*/
          JUMPOUT(0x421C03); /*0x421c03*/
        case kExtraData_Teleport: /*0x421aea*/
          JUMPOUT(0x42233C); /*0x42233c*/
        case kExtraData_MapMarker: /*0x421aea*/
          JUMPOUT(0x42250F); /*0x42250f*/
        case kExtraData_LeveledCreature: /*0x421aea*/
          JUMPOUT(0x42200C); /*0x42200c*/
        case kExtraData_LeveledItem: /*0x421aea*/
          JUMPOUT(0x421E0A); /*0x421e0a*/
        case kExtraData_Scale: /*0x421aea*/
          JUMPOUT(0x421C5D); /*0x421c5d*/
        case kExtraData_NonActorMagicCaster: /*0x421aea*/
          JUMPOUT(0x4221E9); /*0x4221e9*/
        case kExtraData_Seed|kExtraData_Havok: /*0x421aea*/
          JUMPOUT(0x4222C0); /*0x4222c0*/
        case kExtraData_CrimeGold: /*0x421aea*/
          JUMPOUT(0x421CC3); /*0x421cc3*/
        case kExtraData_OblivionEntry: /*0x421aea*/
          JUMPOUT(0x42237B); /*0x42237b*/
        case kExtraData_ItemDropper: /*0x421aea*/
          JUMPOUT(0x4225D4); /*0x4225d4*/
        case kExtraData_PersuasionPercent: /*0x421aea*/
          JUMPOUT(0x4223DC); /*0x4223dc*/
        case kExtraData_Poison: /*0x421aea*/
          JUMPOUT(0x42244E); /*0x42244e*/
        case kExtraData_LastFinishedSequence: /*0x421aea*/
          JUMPOUT(0x4224A4); /*0x4224a4*/
        case kExtraData_SavedMovementData: /*0x421aea*/
          JUMPOUT(0x42261E); /*0x42261e*/
        case kExtraData_FriendHitList: /*0x421aea*/
          JUMPOUT(0x422717); /*0x422717*/
        case kExtraData_HeadingTarget: /*0x421aea*/
          JUMPOUT(0x4227CC); /*0x4227cc*/
        case kExtraData_InvestmentGold: /*0x421aea*/
          JUMPOUT(0x421C8D); /*0x421c8d*/
        case kExtraData_StartingWorldOrCell: /*0x421aea*/
          JUMPOUT(0x422816); /*0x422816*/
        case kExtraData_QuickKey: /*0x421aea*/
          JUMPOUT(0x422857); /*0x422857*/
        case kExtraData_InfoGeneralTopic: /*0x421aea*/
          JUMPOUT(0x422884);                    // ExtraDataList save case 0x59 (ExtraInfoGeneralTopic): serialize the cache only when menuTopic is non-null. A null cache writes neither the extra-type byte nor a MenuTopic payload. /*0x422884*/
        case kExtraData_HasNoRumors: /*0x421aea*/
          JUMPOUT(0x4228BC);                    // Save actor-cached Rumors MenuTopic display/flags and ownerQuest/topic/INFO FormIDs. Runtime DialogueResponses and response cursors are not serialized. /*0x4228bc*/
        case kExtraData_HaggleAmount: /*0x421aea*/
          JUMPOUT(0x4228E4); /*0x4228e4*/
        default:
          break;
      }
      if ( v31 != g_TESSaveLoadGame->unk000[5] ) /*0x422926*/
        ++v24; /*0x422928*/
      m_data = m_data->members.next; /*0x42292d*/
    }
    while ( m_data ); /*0x422932*/
    v5 = v27; /*0x422938*/
  }
  *v32 = v24; /*0x422948*/
  if ( Global_DebugSaveBuffer )
  {
    v10 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x422959*/
    v11 = g_TESSaveLoadGame->unk000[5]; /*0x422961*/
    if ( v10 )
    {
      v12 = TESForm_LookupByFormID(*v10); /*0x422969*/
      v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v12->vtbl->GetEditorName)( /*0x422989*/
                            v12,
                            *(UInt32 *)((char *)v10 + 5),
                            0x1B62,
                            "..\\TES Shared\\ExtraDataList.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v11 - v5,
        *v10,
        v13,
        v17,
        v18,
        v22);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v11 - v5, 0x1B62, "..\\TES Shared\\ExtraDataList.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4229c1*/
  {
    v14 = (_WORD *)v28; /*0x4229d0*/
    v15 = g_TESSaveLoadGame->unk000[5]; /*0x4229d4*/
    if ( v15 > v28 + 0xFFFF ) /*0x4229df*/
      PrintError( /*0x4229f0*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\ExtraDataList.cpp",
        0x1B62);
    *v14 = v15 - (_WORD)v14; /*0x4229fa*/
  }
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x422a07*/
}
