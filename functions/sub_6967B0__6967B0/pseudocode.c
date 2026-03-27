void __userpurge sub_6967B0(TESObjectREFR *ecx0@<ecx>, double a2@<st0>, TESForm a3)
{
  NiNode *v4; // eax
  NiNode *v5; // eax
  float y; // eax
  TESObjectCELL *parentCell; // eax
  TESSaveLoad *v8; // edx
  _WORD *v9; // ebp
  float i; // edi
  PlayerCharacter *v11; // eax
  size_t v12; // [esp-4h] [ebp-38h]
  size_t v13; // [esp-4h] [ebp-38h]
  size_t v14; // [esp-4h] [ebp-38h]
  size_t v15; // [esp-4h] [ebp-38h]
  size_t v16; // [esp-4h] [ebp-38h]
  size_t v17; // [esp-4h] [ebp-38h]
  TESForm a1; // [esp+10h] [ebp-24h] BYREF

  sub_69F770(ecx0, a2, (int)a3.vtbl);
  LODWORD(v12) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &ecx0[1].member.rot.z, v12);
  LODWORD(v13) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&ecx0[1].member, v13);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x30u )
  {
    v4 = ecx0->vtbl->GetNiNode(ecx0);
    a1.member.flags = LODWORD(v4->members.super.m_localTransform.pos.x);
    LODWORD(v14) = 0xC;
    a1.member.refID = LODWORD(v4->members.super.m_localTransform.pos.y);
    a1.member.modlist.data = (Data *)LODWORD(v4->members.super.m_localTransform.pos.z);
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1.member.flags, v14);
    v5 = ecx0->vtbl->GetNiNode(ecx0);
    sub_7150F0((float *)&a1.member.modlist.next, (float *)&v5->members.super.m_localTransform);
    LODWORD(v15) = 0x10;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a1.member.modlist.next, v15);
    y = ecx0[1].member.rot.y;
    *(float *)&a1.vtbl = 0.0;
    if ( y != 0.0 )
      a1.vtbl = *(TESFormVtbl **)(LODWORD(y) + 0x7C);
    LODWORD(v16) = 4;
    TESForm_SaveDataToCurrentSaveGame(&a1, v16);
  }
  parentCell = ecx0[1].member.parentCell;
  *(_DWORD *)&a1.member.type = 0;
  if ( parentCell )
    *(_DWORD *)&a1.member.type = parentCell->members.super.refID;
  TESForm_SaveFormIDToCurrentSaveGame((int)&a1.member, 4u);
  v8 = SaveLoad_CurrentSavegame;
  LODWORD(v14) = 2;
  a3.vtbl = 0;
  v9 = (_WORD *)v8->unk000[5];
  TESForm_SaveDataToCurrentSaveGame(&a3, v14);
  for ( i = ecx0[1].member.pos[0]; i != 0.0; i = *(float *)(LODWORD(i) + 0x1C) )
  {
    a1.vtbl = 0;
    if ( *(_DWORD *)(LODWORD(i) + 0x18) )
    {
      v11 = sub_4DC270(*(_DWORD *)(LODWORD(i) + 0x18));
      if ( v11 )
        a1.vtbl = (TESFormVtbl *)v11->super.super.super.super.super.refID;
    }
    TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
    ++a3.vtbl;
  }
  *v9 = a3.vtbl;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x71u )
  {
    LODWORD(v17) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&ecx0[1].member.baseExtraList.members, v17);
  }
}
