// PlaceObjectRef Character allocation branch: base form type 0x23 allocates 0x10C bytes and calls Character_constr.
// positive sp value has been detected, the output may be wrong!
TESChildCELL *__userpurge TESDataHandler_PlaceObjectRef_::CreateCharacter@<eax>(
        TESObjectCELL *CellAtCellCoord@<ebx>,
        TESWorldSpace *a2@<edi>,
        TESForm *a3@<esi>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        TESForm *a7,
        float *a8,
        int *a9,
        int a10,
        int a11)
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

  v12 = (TESObjectREFR *)FormHeapAlloc(0x10Cu); /*0x44a8eb*/
  if ( v12 ) /*0x44a901*/
    v13 = Character_constr(v12); /*0x44a905*/
  else
    v13 = 0; /*0x44a90c*/
  v14 = (TESChildCELL *)v13; /*0x44a90e*/
  TESObjectREFR_SetBaseForm(v13, a3); /*0x44a91b*/
  if ( TESObjectREFR_IsTree((TESObjectREFR *)v14) ) /*0x44a922*/
    TESObjectREFR_SetVisibleWhenDistant_(v14, 1); /*0x44a92f*/
  sub_4DB3C0(v14); /*0x44a936*/
  v15 = OblivionDynamicCast( /*0x44a94e*/
          a3,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESObjectLIGH `RTTI Type Descriptor',
          0);
  if ( v15 ) /*0x44a958*/
    sub_46AB60(v14, (v15[0x1F] & 0x20) != 0); /*0x44a968*/
  if ( v14[3].vtbl >= (void *)0xFF000000 ) /*0x44a974*/
  {
    v27 = 2; /*0x44a97c*/
    (*((void (__thiscall **)(TESChildCELL *))v14->vtbl + 0x12))(v14); /*0x44a980*/
  }
  TESObjectREFR_SetPosition((TESObjectREFR *)v14, *a8, a8[1], a8[2]); /*0x44a99d*/
  sub_4D89A0((int *)v14, *a9, a9[1], a9[2]); /*0x44a9bd*/
  if ( a2 ) /*0x44a9c4*/
  {
    a5 = a8[1]; /*0x44a9e2*/
    a10 = (int)a5; /*0x44a9e6*/
    CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(a2, (int)*a8 >> 0xC, (int)a5 >> 0xC); /*0x44a9fa*/
  }
  if ( CellAtCellCoord ) /*0x44aa00*/
  {
    if ( TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 0) /*0x44aaa3*/
      && (a7 == (TESForm *)MEMORY[0xB35EA4]
       || a7 == (TESForm *)MEMORY[0xB35EB4]
       || a7 == MEMORY[0xB35EAC]
       || a7 == (TESForm *)MEMORY[0xB35EB0]
       || a7 == (TESForm *)MEMORY[0xB35EA8]) )
    {
      v17 = (NiNode *)FormHeapAlloc(0xDCu); /*0x44aaaa*/
      retaddr = 3; /*0x44aab8*/
      if ( v17 ) /*0x44aac0*/
        v18 = NiNode::NiNode(v17, 0); /*0x44aac6*/
      else
        v18 = 0; /*0x44aacd*/
      v26 = (int)v18; /*0x44aad2*/
      retaddr = 0xFFFFFFFF; /*0x44aadb*/
      (*((void (__thiscall **)(TESChildCELL *))v14->vtbl + 0x54))(v14); /*0x44aae3*/
    }
    if ( TESObjectREFR_GetContainer((TESObjectREFR *)v14) ) /*0x44aae7*/
    {
      ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)v14); /*0x44aaf7*/
      ContainerExtraData_EvaluateOwnerLeveledItems(v26, v27, v28, v29, v30); /*0x44aafe*/
      ExtraContainerChanges_RunScripts(ContainerExtraDataForRef, a5, a4); /*0x44ab05*/
      if ( !*(_QWORD *)*(_DWORD *)ContainerExtraDataForRef ) /*0x44ab12*/
        ExtraDataList_RemoveContainerExtraData(&v14[0x11].vtbl); /*0x44ab1a*/
    }
    sub_4D6F00(v14, 1); /*0x44ab23*/
    TESObjectCELL_AddReference(CellAtCellCoord, (TESObjectREFR *)v14); /*0x44ab2b*/
    TESObjectREFR_SetPersistance(v14, a10); /*0x44ab37*/
    v20 = (*((int (__thiscall **)(TESChildCELL *))v14->vtbl + 0x55))(v14); /*0x44ab49*/
    if ( v20 ) /*0x44ab4d*/
    {
      v21 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))v14->vtbl + 0x5D))(v14); /*0x44ab5a*/
      *(_DWORD *)(v20 + 0x54) = *v21; /*0x44ab5e*/
      *(_DWORD *)(v20 + 0x58) = v21[1]; /*0x44ab64*/
      *(_DWORD *)(v20 + 0x5C) = v21[2]; /*0x44ab71*/
      qmemcpy((void *)(v20 + 0x30), sub_4D7AF0((float *)v14, &v31), 0x24u); /*0x44ab86*/
      sub_897A20(v20, 1); /*0x44ab88*/
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x44ab93*/
      sub_7C5D00(ShadowSceneNode, (_BYTE *)v20); /*0x44ab9d*/
      NiAVObject_InitializePropertyState((NiAVObject *)v20); /*0x44aba4*/
      NiNode_UpdateDynamicEffectState((NiNode *)v20); /*0x44abab*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)v20, 0.0, 0); /*0x44abba*/
    }
  }
  else
  {
    (*((void (__thiscall **)(TESChildCELL *))v14->vtbl + 0x54))(v14); /*0x44aa0d*/
    TESObjectREFR_SetPersistance(v14, 1); /*0x44aa13*/
    TESWorldspace_Boh_(a2, v14); /*0x44aa1b*/
    if ( TESObjectREFR_GetContainer((TESObjectREFR *)v14) ) /*0x44aa22*/
    {
      v16 = (float *)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)v14); /*0x44aa36*/
      ContainerExtraData_EvaluateOwnerLeveledItems(0, v27, v28, v29, v30); /*0x44aa3d*/
      ExtraContainerChanges_RunScripts(v16, a5, a4); /*0x44aa44*/
      if ( !*(_QWORD *)*(_DWORD *)v16 ) /*0x44aa54*/
        ExtraDataList_RemoveContainerExtraData(&v14[0x11].vtbl); /*0x44aa5f*/
    }
  }
  v23 = OblivionDynamicCast( /*0x44abce*/
          v14,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  v24 = v23; /*0x44abd3*/
  if ( !v23 ) /*0x44abda*/
    return v14; /*0x44ac05*/
  if ( !sub_5E0260(v23) ) /*0x44abde*/
    (*(void (__thiscall **)(_DWORD *))(*v24 + 0x37C))(v24); /*0x44abf1*/
  result = v14; /*0x44abf8*/
  if ( !a11 ) /*0x44abfa*/
    v24[2] &= ~0x200000u; /*0x44abfc*/
  return result;                                // 3DTheft decode 2026-05-16: PlaceObjectRef returns the placed ref in EAX and uses retn 0x18. The OBSE call boundary is thiscall DataHandler + six stack args: baseForm, pos, rot, cell, worldspace, existingRef. /*0x44ac1a*/
}
