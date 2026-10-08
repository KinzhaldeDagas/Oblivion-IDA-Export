TESObjectREFR *__userpurge sub_660CC0@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESForm *a5,
        BaseExtraList *a6,
        UInt32 a7,
        int a8,
        int a9)
{
  TESObjectCELL *DwordAtOffset40; // esi
  TESObjectREFR *v11; // eax
  int v13; // edi
  NiObjectNET *v14; // eax
  NiAVObject *v15; // esi
  float *v16; // eax
  float v17; // ecx
  float v18; // edx
  float v19; // eax
  float v20; // [esp+3Ch] [ebp-18h]
  float v21; // [esp+40h] [ebp-14h]
  float v22; // [esp+44h] [ebp-10h]
  float v23; // [esp+48h] [ebp-Ch]
  float v24; // [esp+4Ch] [ebp-8h]
  float v25; // [esp+50h] [ebp-4h]

  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x660ccd*/
  if ( sub_4C9F60() ) /*0x660ccf*/
  {
    if ( DwordAtOffset40 ) /*0x660cda*/
    {
      v11 = sub_4CC910(DwordAtOffset40); /*0x660cde*/
      if ( v11 || (v11 = sub_4D4790(DwordAtOffset40, a2, a3, a4, a1)) != 0 ) /*0x660cf1*/
      {
        a1->vtbl->RemoveItem(a1, a5, a6, a7, 0, 0, v11, 0, 0, 1, 0); /*0x660d19*/
        return 0; /*0x660d23*/
      }
    }
  }
  v13 = ((int (__thiscall *)(TESObjectREFR *, TESForm *, BaseExtraList *, UInt32, _DWORD, int, _DWORD, int, int, int, _DWORD))a1->vtbl->RemoveItem)( /*0x660d55*/
          a1,
          a5,
          a6,
          a7,
          0,
          1,
          0,
          a8,
          a9,
          1,
          0);
  if ( v13 ) /*0x660d59*/
  {
    v14 = (NiObjectNET *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x154))(v13); /*0x660d69*/
    v15 = (NiAVObject *)v14; /*0x660d6b*/
    if ( v14 ) /*0x660d6f*/
    {
      sub_88CEB0(v14, 0, 1, 1); /*0x660d7c*/
      NiAVObject_UpdateNiAVObject(v15, 0.0, 0); /*0x660d8e*/
      sub_88CEB0((NiObjectNET *)v15, 1u, 1, 1); /*0x660d9a*/
      v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x174))(v13); /*0x660dac*/
      v17 = *v16; /*0x660dae*/
      v18 = v16[1]; /*0x660db0*/
      v19 = v16[2]; /*0x660db3*/
      v23 = v17 - v15->members.m_kWorldBound.Center.x; /*0x660dd0*/
      v24 = v18 - v15->members.m_kWorldBound.Center.y; /*0x660ddd*/
      v25 = v19 - v15->members.m_kWorldBound.Center.z; /*0x660dea*/
      v20 = v17 + v23; /*0x660df6*/
      v15->members.m_localTransform.pos.x = v20; /*0x660dfe*/
      v21 = v18 + v24; /*0x660e09*/
      v15->members.m_localTransform.pos.y = v21; /*0x660e11*/
      v22 = v19 + v25; /*0x660e1b*/
      v15->members.m_localTransform.pos.z = v22; /*0x660e23*/
      TESObjectREFR_SetPosition((TESObjectREFR *)v13, v20, v21, v22); /*0x660e29*/
      sub_897A20((int)v15, 1); /*0x660e31*/
      sub_88CF90((NiObjectNET *)v15, 1u, 1, 0); /*0x660e3d*/
      PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x660e45*/
      return (TESObjectREFR *)v13; /*0x660e52*/
    }
    BSSimpleList_PushFront(&a1[0x15].member.baseExtraList.members.m_data, v13); /*0x660e5c*/
    *(_DWORD *)(v13 + 8) |= 0x400000u; /*0x660e61*/
    sub_4D6F40((_DWORD *)v13, 1); /*0x660e6c*/
  }
  PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x660e71*/
  return (TESObjectREFR *)v13; /*0x660d1d*/
}
