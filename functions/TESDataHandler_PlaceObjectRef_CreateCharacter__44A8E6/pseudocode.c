// positive sp value has been detected, the output may be wrong!
TESChildCELL *__userpurge TESDataHandler_PlaceObjectRef_::CreateCharacter@<eax>(
        TESObjectCELL *CellAtCellCoord@<ebx>,
        TESWorldSpace *a2@<edi>,
        void *a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7,
        TESForm *a8,
        float *a9,
        int *a10,
        int a11,
        int a12)
{
  TESObjectREFR *v12; // eax
  TESObjectREFR *v13; // eax
  TESChildCELL *v14; // ebp
  _DWORD *v15; // eax
  float *v16; // esi
  NiNode *v17; // eax
  NiNode *v18; // eax
  float *ContainerExtraDataForRef; // esi
  int v20; // ebx
  _DWORD *v21; // eax
  _DWORD *ShadowSceneNode; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // esi
  TESChildCELL *result; // eax
  int v26; // [esp-34h] [ebp-44h]
  int v27; // [esp-30h] [ebp-40h]
  int v28; // [esp-2Ch] [ebp-3Ch]
  int v29; // [esp-28h] [ebp-38h]
  int v30; // [esp-24h] [ebp-34h]
  float v31; // [esp-20h] [ebp-30h] BYREF
  int retaddr; // [esp+10h] [ebp+0h]

  v12 = (TESObjectREFR *)FormHeapAlloc(0x10Cu);
  if ( v12 )
    v13 = Character_constr(v12);
  else
    v13 = 0;
  v14 = (TESChildCELL *)v13;
  TESObjectREFR_SetBaseForm(v13, (int)a3);
  if ( TESObjectREFR_IsTree((TESObjectREFR *)v14) )
    TESObjectREFR_SetVisibleWhenDistant_(v14, 1);
  sub_4DB3C0(v14);
  v15 = OblivionDynamicCast(
          a3,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESObjectLIGH `RTTI Type Descriptor',
          0);
  if ( v15 )
    sub_46AB60(v14, (v15[0x1F] & 0x20) != 0);
  if ( v14[3].vtbl >= (void *)0xFF000000 )
  {
    v27 = 2;
    (*((void (__thiscall **)(TESChildCELL *))v14->vtbl + 0x12))(v14);
  }
  TESObjectREFR_SetPosition((TESObjectREFR *)v14, *a9, a9[1], a9[2]);
  sub_4D89A0((int *)v14, *a10, a10[1], a10[2]);
  if ( a2 )
  {
    a6 = a9[1];
    a11 = (int)a6;
    CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(a2, (int)*a9 >> 0xC, (int)a6 >> 0xC);
  }
  if ( CellAtCellCoord )
  {
    if ( TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 0)
      && (a8 == (TESForm *)TESDataHandler_g_DoorMarker
       || a8 == (TESForm *)TESDataHandler_g_TravelMarker
       || a8 == TESDataHandler_g_XMarker
       || a8 == (TESForm *)TESDataHandler_g_XMarkerHeading
       || a8 == (TESForm *)TESDataHandler_g_MapMarker) )
    {
      v17 = (NiNode *)FormHeapAlloc(0xDCu);
      retaddr = 3;
      if ( v17 )
        v18 = NiNode::NiNode(v17, 0);
      else
        v18 = 0;
      v26 = (int)v18;
      retaddr = 0xFFFFFFFF;
      (*((void (__thiscall **)(TESChildCELL *))v14->vtbl + 0x54))(v14);
    }
    if ( TESObjectREFR_GetContainer((TESObjectREFR *)v14) )
    {
      ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)v14);
      ContainerExtraData_EvaluateOwnerLeveledItems(v26, v27, v28, v29, v30);
      ExtraContainerChanges_RunScripts(ContainerExtraDataForRef, a6);
      if ( !*(_QWORD *)*(_DWORD *)ContainerExtraDataForRef )
        ExtraDataList_RemoveContainerExtraData(&v14[0x11].vtbl);
    }
    sub_4D6F00(v14, 1);
    sub_4D35D0(CellAtCellCoord, a4, a5, a6, v14);
    TESObjectREFR_SetPersistance((TESObjectREFR *)v14, a4, a5, a11);
    v20 = (*((int (__thiscall **)(TESChildCELL *))v14->vtbl + 0x55))(v14);
    if ( v20 )
    {
      v21 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))v14->vtbl + 0x5D))(v14);
      *(_DWORD *)(v20 + 0x54) = *v21;
      *(_DWORD *)(v20 + 0x58) = v21[1];
      *(_DWORD *)(v20 + 0x5C) = v21[2];
      qmemcpy((void *)(v20 + 0x30), sub_4D7AF0((float *)v14, &v31), 0x24u);
      sub_897A20(v20, 1);
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C5D00(ShadowSceneNode, (_BYTE *)v20);
      NiAVObject_InitializePropertyState((NiAVObject *)v20);
      NiNode_UpdateDynamicEffectState((NiNode *)v20);
      NiAVObject_UpdateNiAVObject((NiAVObject *)v20, 0.0, 0);
    }
  }
  else
  {
    (*((void (__thiscall **)(TESChildCELL *))v14->vtbl + 0x54))(v14);
    TESObjectREFR_SetPersistance((TESObjectREFR *)v14, a4, a5, 1);
    TESWorldspace_Boh_(a2, a4, a5, v14);
    if ( TESObjectREFR_GetContainer((TESObjectREFR *)v14) )
    {
      v16 = (float *)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)v14);
      ContainerExtraData_EvaluateOwnerLeveledItems(0, v27, v28, v29, v30);
      ExtraContainerChanges_RunScripts(v16, a6);
      if ( !*(_QWORD *)*(_DWORD *)v16 )
        ExtraDataList_RemoveContainerExtraData(&v14[0x11].vtbl);
    }
  }
  v23 = OblivionDynamicCast(
          v14,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  v24 = v23;
  if ( !v23 )
    return v14;
  if ( !sub_5E0260(v23) )
    (*(void (__thiscall **)(_DWORD *))(*v24 + 0x37C))(v24);
  result = v14;
  if ( !a12 )
    v24[2] &= ~0x200000u;
  return result;
}
