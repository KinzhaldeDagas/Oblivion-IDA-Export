TESObjectREFR *__stdcall sub_45C4F0(int ArgList, int a2)
{
  UInt32 v2; // eax
  TESObjectREFR *v3; // esi
  TESForm *v4; // edi
  TESObjectCELL *v5; // ebx
  TESWorldSpace *v6; // eax
  TESWorldSpace *v7; // ecx
  int v8; // ebp
  int v9; // ecx
  TESForm::ModReferenceList *p_modlist; // eax
  int v11; // ebx
  Data *OverrideFile; // eax
  Data *v13; // edi
  char RecordType; // al
  int v16; // edx
  TESForm::ModReferenceList *v17; // eax
  int v18; // ebx
  Data *v19; // eax
  Data *v20; // edi
  char v21; // al
  Actor *v22; // edi
  UInt32 *v23; // eax
  int v24; // eax
  float z; // [esp+4h] [ebp-34h]
  int v26; // [esp+18h] [ebp-20h]
  UInt32 v27; // [esp+1Ch] [ebp-1Ch]
  TESForm *v28; // [esp+20h] [ebp-18h]
  TESWorldSpace *v29; // [esp+24h] [ebp-14h]
  int v30; // [esp+28h] [ebp-10h]
  BSExtraDataVtbl *v31[3]; // [esp+2Ch] [ebp-Ch] BYREF
  int v32; // [esp+40h] [ebp+8h]

  v2 = *(_DWORD *)a2;
  v3 = 0;
  v27 = *(_DWORD *)a2;
  if ( !*(_DWORD *)a2 )
  {
    v2 = *(_DWORD *)(a2 + 0x10);
    v27 = v2;
  }
  v4 = TESForm_LookupByFormID(v2);
  v5 = (TESObjectCELL *)OblivionDynamicCast(
                          v4,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  v28 = (TESForm *)v5;
  v6 = (TESWorldSpace *)OblivionDynamicCast(
                          v4,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESWorldSpace `RTTI Type Descriptor',
                          0);
  v7 = v6;
  v8 = 0;
  v29 = v6;
  v26 = 0;
  if ( v5 )
  {
    v9 = 0;
    p_modlist = &v5->members.super.modlist;
    v32 = 0;
    if ( v5 != (TESObjectCELL *)0xFFFFFFF0 )
    {
      do
      {
        if ( p_modlist->data )
          ++v9;
        p_modlist = p_modlist->next;
      }
      while ( p_modlist );
      v32 = v9;
    }
    v11 = 0;
    if ( v9 <= 0 )
      goto LABEL_15;
    do
    {
      OverrideFile = TESForm_GetOverrideFile(v28, v11);
      v13 = sub_4520F0(OverrideFile);
      if ( TESFile::FindForm(v13, v28) )
      {
        if ( sub_4CC850(v13, ArgList) )
        {
          RecordType = TESFile_GetRecordType(v13);
          v3 = sub_4DB260(RecordType, 1);
          TESDataHandler_LoadForm((TESForm *)v3, v13);
        }
      }
      ++v11;
    }
    while ( v11 < v32 );
  }
  else
  {
    if ( !v6 )
    {
      PrintError("Reference to be loaded does not have a cell or worldspace.");
      goto LABEL_15;
    }
    v16 = 0;
    v17 = &v6->super.modlist;
    v30 = 0;
    if ( v7 != (TESWorldSpace *)0xFFFFFFF0 )
    {
      do
      {
        if ( v17->data )
          ++v16;
        v17 = v17->next;
      }
      while ( v17 );
      v30 = v16;
    }
    v8 = (int)*(float *)(a2 + 4) >> 0xC;
    v18 = 0;
    v26 = (int)*(float *)(a2 + 8) >> 0xC;
    if ( v16 <= 0 )
      goto LABEL_15;
    while ( 1 )
    {
      v19 = TESForm_GetOverrideFile((TESForm *)v7, v18);
      v20 = sub_4520F0(v19);
      if ( TESWorldSpace::FindCellInFile(v29, v20, v8, v26) )
      {
        if ( sub_4CC850(v20, ArgList) )
        {
          v21 = TESFile_GetRecordType(v20);
          v3 = sub_4DB260(v21, 1);
          TESDataHandler_LoadForm((TESForm *)v3, v20);
        }
      }
      if ( ++v18 >= v30 )
        break;
      v7 = v29;
    }
  }
  if ( !v3 )
  {
LABEL_15:
    PrintError("Reference %08X could not be loaded into location %08X at coordinates %i, %i", ArgList, v27, v8, v26);
    return 0;
  }
  v3->vtbl->super.DoPostFixup((TESForm *)v3);
  v22 = (Actor *)OblivionDynamicCast(
                   v3,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  if ( v22 )
  {
    z = v3->member.rot.z;
    v23 = (UInt32 *)v3->vtbl->GetPos(v3);
    sub_5E0200(v22, (int)v29, (TESObjectCELL *)v28, v23, z);
  }
  else
  {
    v24 = (int)v3->vtbl->GetPos(v3);
    ExtraDataList_SetStartingPosition(
      &v3->member.baseExtraList,
      v31,
      v3,
      *(BSExtraDataVtbl **)v24,
      *(BSExtraDataVtbl **)(v24 + 4),
      *(BSExtraData **)(v24 + 8));
    ExtraDataList_SetStartingRotation(
      &v3->member.baseExtraList,
      v31,
      v3,
      (BSExtraDataVtbl *)LODWORD(v3->member.rot.x),
      (BSExtraDataVtbl *)LODWORD(v3->member.rot.y),
      (BSExtraData *)LODWORD(v3->member.rot.z));
  }
  return v3;
}
