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

  v30 = 0;
  v5 = SaveLoad_CurrentSavegame->unk000[5];
  v28 = 0;
  v27 = v5;
  if ( Global_DebugSaveBuffer )
    v27 = v5;
  if ( sub_45A170() )
  {
    LODWORD(v19) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData(&Src, v19);
    LODWORD(v20) = 2;
    v28 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData(&v30, v20);
  }
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalis_8);
  v24 = 0;
  LODWORD(v19) = 2;
  v32 = (_WORD *)SaveLoad_CurrentSavegame->unk000[5];
  SaveLoad_SaveData(&v24, v19);
  m_data = this->members.m_data;
  if ( m_data )
  {
    do
    {
      BYTE2(v23) = m_data->members.type;
      v31 = SaveLoad_CurrentSavegame->unk000[5];
      switch ( m_data->members.type )
      {
        case kExtraData_PersistentCell:
          if ( a4 )
          {
            if ( a4->vtbl->IsActor(a4) && a4 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
            {
              LODWORD(v21) = 1;
              SaveLoad_SaveData((char *)&v23 + 2, v21);
              v8 = OblivionDynamicCast(
                     m_data,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                     &ExtraPersistentCell `RTTI Type Descriptor',
                     0);
              refID = 0;
              v9 = *((TESObjectCELL **)v8 + 3);
              if ( v9 )
                refID = TESObjectCELL_GetWorldSpace(v9)->super.refID;
              SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&refID, 4u);
            }
          }
          break;
        case kExtraData_Script:
          if ( (a3 & 0x4000020) != 0 )
          {
            LODWORD(v21) = 1;
            SaveLoad_SaveData((char *)&v23 + 2, v21);
            v7 = *(void **)&m_data[1].members.type;
            CompareTo = m_data[1].vtbl[1].CompareTo;
            SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&CompareTo, 4u);
            ScriptEventList_Save_(v7, st7_0);
          }
          break;
        case kExtraData_Worn:
        case kExtraData_WornLeft:
        case kExtraData_CannotWear:
        case kExtraData_BoundArmor:
          JUMPOUT(0x421DA2);
        case kExtraData_StartLocation:
          JUMPOUT(0x4220CD);
        case kExtraData_Package:
          JUMPOUT(0x421E57);
        case kExtraData_TresPassPackage:
          JUMPOUT(0x421F43);
        case kExtraData_RunOncePacks:
          JUMPOUT(0x422029);
        case kExtraData_ReferencePointer:
          JUMPOUT(0x421FB6);
        case kExtraData_Follower:
          JUMPOUT(0x422157);
        case kExtraData_Ghost:
          JUMPOUT(0x42201D);
        case kExtraData_Ownership:
          JUMPOUT(0x421CF3);
        case kExtraData_Global:
          JUMPOUT(0x421D34);
        case kExtraData_Rank:
          JUMPOUT(0x421D72);
        case kExtraData_Count:
          JUMPOUT(0x421AF1);
        case kExtraData_Health:
          JUMPOUT(0x421B25);
        case kExtraData_Uses:
          JUMPOUT(0x421B4F);
        case kExtraData_TimeLeft:
          JUMPOUT(0x421B7C);
        case kExtraData_Charge:
          JUMPOUT(0x421BA6);
        case kExtraData_Soul:
          JUMPOUT(0x421BD6);
        case kExtraData_Lock:
          JUMPOUT(0x421C03);
        case kExtraData_Teleport:
          JUMPOUT(0x42233C);
        case kExtraData_MapMarker:
          JUMPOUT(0x42250F);
        case kExtraData_LeveledCreature:
          JUMPOUT(0x42200C);
        case kExtraData_LeveledItem:
          JUMPOUT(0x421E0A);
        case kExtraData_Scale:
          JUMPOUT(0x421C5D);
        case kExtraData_NonActorMagicCaster:
          JUMPOUT(0x4221E9);
        case kExtraData_Seed|kExtraData_Havok:
          JUMPOUT(0x4222C0);
        case kExtraData_CrimeGold:
          JUMPOUT(0x421CC3);
        case kExtraData_OblivionEntry:
          JUMPOUT(0x42237B);
        case kExtraData_ItemDropper:
          JUMPOUT(0x4225D4);
        case kExtraData_PersuasionPercent:
          JUMPOUT(0x4223DC);
        case kExtraData_Poison:
          JUMPOUT(0x42244E);
        case kExtraData_LastFinishedSequence:
          JUMPOUT(0x4224A4);
        case kExtraData_SavedMovementData:
          JUMPOUT(0x42261E);
        case kExtraData_FriendHitList:
          JUMPOUT(0x422717);
        case kExtraData_HeadingTarget:
          JUMPOUT(0x4227CC);
        case kExtraData_InvestmentGold:
          JUMPOUT(0x421C8D);
        case kExtraData_StartingWorldOrCell:
          JUMPOUT(0x422816);
        case kExtraData_QuickKey:
          JUMPOUT(0x422857);
        case kExtraData_InfoGeneralTopic:
          JUMPOUT(0x422884);
        case kExtraData_HasNoRumors:
          JUMPOUT(0x4228BC);
        case kExtraData_HaggleAmount:
          JUMPOUT(0x4228E4);
        default:
          break;
      }
      if ( v31 != SaveLoad_CurrentSavegame->unk000[5] )
        ++v24;
      m_data = m_data->members.next;
    }
    while ( m_data );
    v5 = v27;
  }
  *v32 = v24;
  if ( Global_DebugSaveBuffer )
  {
    v10 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v11 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v10 )
    {
      v12 = TESForm_LookupByFormID(*v10);
      v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v12->vtbl->GetEditorName)(
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
  if ( sub_45A170() )
  {
    v14 = (_WORD *)v28;
    v15 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v15 > v28 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\ExtraDataList.cpp",
        0x1B62);
    *v14 = v15 - (_WORD)v14;
  }
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
