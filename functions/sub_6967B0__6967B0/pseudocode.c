void __userpurge sub_6967B0(TESObjectREFR *ecx0@<ecx>, double a2@<st0>, TESForm source)
{
  NiNode *v4; // eax
  NiNode *v5; // eax
  float y; // eax
  TESObjectCELL *parentCell; // eax
  TESSaveLoadGame_SerializationView *v8; // edx
  unsigned __int8 *bufferCursor; // ebp
  float i; // edi
  PlayerCharacter *v11; // eax
  TESForm a1; // [esp+10h] [ebp-24h] BYREF

  sub_69F770(ecx0, a2, (int)source.vtbl); /*0x6967be*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &ecx0[1].member.rot.z, 4u); /*0x6967d2*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &ecx0[1].member, 4u); /*0x6967df*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x30u ) /*0x6967ef*/
  {
    v4 = ecx0->vtbl->GetNiNode(ecx0); /*0x6967fb*/
    a1.member.flags = LODWORD(v4->members.super.m_localTransform.pos.x); /*0x696800*/
    a1.member.refID = LODWORD(v4->members.super.m_localTransform.pos.y); /*0x69680d*/
    a1.member.modlist.data = (Data *)LODWORD(v4->members.super.m_localTransform.pos.z); /*0x696817*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1.member.flags, 0xCu); /*0x69681b*/
    v5 = ecx0->vtbl->GetNiNode(ecx0); /*0x69682a*/
    sub_7150F0((float *)&a1.member.modlist.next, (float *)&v5->members.super.m_localTransform); /*0x696834*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &a1.member.modlist.next, 0x10u); /*0x696846*/
    y = ecx0[1].member.rot.y; /*0x69684d*/
    *(float *)&a1.vtbl = 0.0; /*0x696850*/
    if ( y != 0.0 ) /*0x696856*/
      a1.vtbl = *(TESFormVtbl **)(LODWORD(y) + 0x7C); /*0x69685b*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1, 4u); /*0x696868*/
  }
  parentCell = ecx0[1].member.parentCell; /*0x69686d*/
  *(_DWORD *)&a1.member.type = 0; /*0x696875*/
  if ( parentCell ) /*0x696879*/
    *(_DWORD *)&a1.member.type = parentCell->members.super.refID; /*0x69687e*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1.member, 4u); /*0x69688b*/
  v8 = g_TESSaveLoadGame; /*0x696890*/
  source.vtbl = 0; /*0x69689c*/
  bufferCursor = v8->bufferCursor; /*0x6968a0*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &source, 2u); /*0x6968a6*/
  for ( i = ecx0[1].member.pos[0]; i != 0.0; i = *(float *)(LODWORD(i) + 0x1C) ) /*0x6968b3*/
  {
    a1.vtbl = 0; /*0x6968b5*/
    if ( *(_DWORD *)(LODWORD(i) + 0x18) ) /*0x6968b9*/
    {
      v11 = sub_4DC270(*(_DWORD *)(LODWORD(i) + 0x18)); /*0x6968c1*/
      if ( v11 ) /*0x6968cb*/
        a1.vtbl = (TESFormVtbl *)v11->super.super.super.super.super.refID; /*0x6968d0*/
    }
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x6968dd*/
    ++source.vtbl; /*0x6968e2*/
  }
  *(_WORD *)bufferCursor = source.vtbl; /*0x6968f3*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x71u ) /*0x696901*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &ecx0[1].member.baseExtraList.members, 4u); /*0x69690e*/
}
