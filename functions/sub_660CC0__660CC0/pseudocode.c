TESObjectREFR *__userpurge sub_660CC0@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        TESForm *a4,
        BaseExtraList *a5,
        UInt32 a6,
        int a7,
        int a8)
{
  TESObjectCELL *ParentCell; // esi
  TESObjectREFR *v10; // eax
  int v12; // edi
  NiAVObject *v13; // eax
  NiAVObject *v14; // esi
  float *v15; // eax
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  float v19; // [esp+3Ch] [ebp-18h]
  float v20; // [esp+40h] [ebp-14h]
  float v21; // [esp+44h] [ebp-10h]
  float v22; // [esp+48h] [ebp-Ch]
  float v23; // [esp+4Ch] [ebp-8h]
  float v24; // [esp+50h] [ebp-4h]

  ParentCell = TESObjectREFR_GetParentCell(a1);
  if ( sub_4C9F60() )
  {
    if ( ParentCell )
    {
      v10 = (TESObjectREFR *)sub_4CC910(ParentCell);
      if ( v10 || (v10 = sub_4D4790(ParentCell, a2, a3, a1)) != 0 )
      {
        a1->vtbl->RemoveItem(a1, a4, a5, a6, 0, 0, v10, 0, 0, 1, 0);
        return 0;
      }
    }
  }
  v12 = ((int (__thiscall *)(TESObjectREFR *, TESForm *, BaseExtraList *, UInt32, _DWORD, int, _DWORD, int, int, int, _DWORD))a1->vtbl->RemoveItem)(
          a1,
          a4,
          a5,
          a6,
          0,
          1,
          0,
          a7,
          a8,
          1,
          0);
  if ( v12 )
  {
    v13 = (NiAVObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x154))(v12);
    v14 = v13;
    if ( v13 )
    {
      sub_88CEB0(v13, 0, 1, 1);
      NiAVObject_UpdateNiAVObject(v14, 0.0, 0);
      sub_88CEB0(v14, 1u, 1, 1);
      v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x174))(v12);
      v16 = *v15;
      v17 = v15[1];
      v18 = v15[2];
      v22 = v16 - v14->members.m_kWorldBound.Center.x;
      v23 = v17 - v14->members.m_kWorldBound.Center.y;
      v24 = v18 - v14->members.m_kWorldBound.Center.z;
      v19 = v16 + v22;
      v14->members.m_localTransform.pos.x = v19;
      v20 = v17 + v23;
      v14->members.m_localTransform.pos.y = v20;
      v21 = v18 + v24;
      v14->members.m_localTransform.pos.z = v21;
      TESObjectREFR_SetPosition((TESObjectREFR *)v12, v19, v20, v21);
      sub_897A20((int)v14, 1);
      sub_88CF90(v14, 1u, 1, 0);
      sub_5C1900();
      return (TESObjectREFR *)v12;
    }
    BSSimpleList_PushFront(&a1[0x15].member.baseExtraList.members.m_data, v12);
    *(_DWORD *)(v12 + 8) |= 0x400000u;
    sub_4D6F40((_DWORD *)v12, 1);
  }
  sub_5C1900();
  return (TESObjectREFR *)v12;
}
