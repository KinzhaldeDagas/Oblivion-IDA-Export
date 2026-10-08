//  Verified: moved-reference rebuild. Resolves primary location ID at +0 (fallback ID +0x10 when zero), casts it to TESObjectCELL or TESWorldSpace, scans its override files for the requested referenceID, loads matching reference records, runs PostFixup, and restores actor/REFR starting location data. Worldspace path quantizes X/Y by >>12 to find the owning cell. Probable role homolog: Fallout ReferenceInitialData::GetOriginalLocationCellAndWorld / LoadChangedReference; Oblivion implementation searches local override files directly. Verified: a2 uses 44-byte moved-reference payload; +0 and +0x10 are remapped FormIDs before call. X/Y at +4/+8 are consumed on the worldspace path. Remaining fields Unknown.
TESObjectREFR *__stdcall TESSaveLoadGame_RebuildReferenceFromLocationOverrides(
        unsigned int referenceID,
        OblivionMovedReferenceInitialData *data)
{
  UInt32 primaryLocationFormID; // eax
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
  Data *ThreadSafeFile; // edi
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
  UInt32 z_low; // [esp+4h] [ebp-34h]
  int v26; // [esp+18h] [ebp-20h]
  unsigned int v27; // [esp+1Ch] [ebp-1Ch]
  TESForm *v28; // [esp+20h] [ebp-18h]
  TESWorldSpace *v29; // [esp+24h] [ebp-14h]
  int v30; // [esp+28h] [ebp-10h]
  BSExtraDataVtbl *v31[3]; // [esp+2Ch] [ebp-Ch] BYREF
  OblivionMovedReferenceInitialData *dataa; // [esp+40h] [ebp+8h]

  primaryLocationFormID = data->primaryLocationFormID; /*0x45c4f7*/
  v3 = 0; /*0x45c4fc*/
  v27 = data->primaryLocationFormID; /*0x45c501*/
  if ( !data->primaryLocationFormID ) /*0x45c501*/
  {
    primaryLocationFormID = data->fallbackLocationFormID; /*0x45c507*/
    v27 = primaryLocationFormID; /*0x45c50a*/
  }
  v4 = TESForm_LookupByFormID(primaryLocationFormID); /*0x45c51f*/
  v5 = (TESObjectCELL *)OblivionDynamicCast( /*0x45c533*/
                          v4,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  v28 = (TESForm *)v5; /*0x45c537*/
  v6 = (TESWorldSpace *)OblivionDynamicCast( /*0x45c53b*/
                          v4,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESWorldSpace `RTTI Type Descriptor',
                          0);
  v7 = v6; /*0x45c543*/
  v8 = 0; /*0x45c545*/
  v29 = v6; /*0x45c549*/
  v26 = 0; /*0x45c54d*/
  if ( v5 ) /*0x45c551*/
  {
    v9 = 0; /*0x45c557*/
    p_modlist = &v5->members.super.modlist; /*0x45c559*/
    dataa = 0; /*0x45c55e*/
    if ( v5 != (TESObjectCELL *)0xFFFFFFF0 ) /*0x45c562*/
    {
      do /*0x45c570*/
      {
        if ( p_modlist->data ) /*0x45c564*/
          ++v9; /*0x45c568*/
        p_modlist = p_modlist->next; /*0x45c56b*/
      }
      while ( p_modlist ); /*0x45c570*/
      dataa = (OblivionMovedReferenceInitialData *)v9; /*0x45c572*/
    }
    v11 = 0; /*0x45c576*/
    if ( v9 <= 0 ) /*0x45c57a*/
      goto LABEL_15; /*0x45c57a*/
    do /*0x45c5d7*/
    {
      OverrideFile = TESForm_GetOverrideFile(v28, v11); /*0x45c585*/
      ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x45c595*/
      if ( TESFile::FindForm(ThreadSafeFile, v28) ) /*0x45c59a*/
      {
        if ( sub_4CC850(ThreadSafeFile, referenceID) ) /*0x45c5a9*/
        {
          RecordType = TESFile_GetRecordType(ThreadSafeFile);// MEF v32 changed-reference cell override hook. Vanilla allocates a new reference on every matching override and overwrites ESI; MEF allocates once, then reloads later overrides into the existing ESI form. /*0x45c5b7*/
          v3 = sub_4DB260(RecordType, 1); /*0x45c5c4*/
          TESDataHandler_LoadForm((TESForm *)v3, ThreadSafeFile); /*0x45c5c8*/
        }
      }
      ++v11; /*0x45c5d0*/
    }
    while ( v11 < (int)dataa ); /*0x45c5d7*/
  }
  else
  {
    if ( !v6 ) /*0x45c60c*/
    {
      PrintError("Reference to be loaded does not have a cell or worldspace."); /*0x45c6d9*/
      goto LABEL_15; /*0x45c6e1*/
    }
    v16 = 0; /*0x45c612*/
    v17 = &v6->super.modlist; /*0x45c614*/
    v30 = 0; /*0x45c619*/
    if ( v7 != (TESWorldSpace *)0xFFFFFFF0 ) /*0x45c61d*/
    {
      do /*0x45c62c*/
      {
        if ( v17->data ) /*0x45c620*/
          ++v16; /*0x45c624*/
        v17 = v17->next; /*0x45c627*/
      }
      while ( v17 ); /*0x45c62c*/
      v30 = v16; /*0x45c62e*/
    }
    v8 = (int)data->worldX >> 0xC; /*0x45c650*/
    v18 = 0; /*0x45c662*/
    v26 = (int)data->worldY >> 0xC; /*0x45c666*/
    if ( v16 <= 0 ) /*0x45c66a*/
      goto LABEL_15; /*0x45c66a*/
    while ( 1 ) /*0x45c677*/
    {
      v19 = TESForm_GetOverrideFile((TESForm *)v7, v18); /*0x45c677*/
      v20 = TESFile_GetThreadSafeFile(v19); /*0x45c687*/
      if ( TESWorldSpace::FindCellInFile(v29, v20, v8, v26) ) /*0x45c690*/
      {
        if ( sub_4CC850(v20, referenceID) ) /*0x45c69f*/
        {
          v21 = TESFile_GetRecordType(v20);     // MEF v32 changed-reference worldspace override hook; same allocate-once/reuse contract as 0x45C5B7. /*0x45c6ad*/
          v3 = sub_4DB260(v21, 1); /*0x45c6ba*/
          TESDataHandler_LoadForm((TESForm *)v3, v20); /*0x45c6be*/
        }
      }
      if ( ++v18 >= v30 ) /*0x45c6cd*/
        break; /*0x45c6cd*/
      v7 = v29; /*0x45c672*/
    }
  }
  if ( !v3 ) /*0x45c5db*/
  {
LABEL_15:
    PrintError("Reference %08X could not be loaded into location %08X at coordinates %i, %i", referenceID, v27, v8, v26); /*0x45c5e1*/
    return 0; /*0x45c607*/
  }
  v3->vtbl->super.DoPostFixup((TESForm *)v3); /*0x45c6ed*/
  v22 = (Actor *)OblivionDynamicCast( /*0x45c703*/
                   v3,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  if ( v22 ) /*0x45c70a*/
  {
    z_low = LODWORD(v3->member.rot.z); /*0x45c71a*/
    v23 = (UInt32 *)v3->vtbl->GetPos(v3); /*0x45c71d*/
    sub_5E0200(v22, (int)v29, (TESObjectCELL *)v28, v23, z_low); /*0x45c72c*/
  }
  else
  {
    v24 = (int)v3->vtbl->GetPos(v3); /*0x45c747*/
    ExtraDataList_SetStartingPosition( /*0x45c769*/
      &v3->member.baseExtraList,
      v31,
      v3,
      *(BSExtraDataVtbl **)v24,
      *(BSExtraDataVtbl **)(v24 + 4),
      *(BSExtraData **)(v24 + 8));
    ExtraDataList_SetStartingRotation( /*0x45c78c*/
      &v3->member.baseExtraList,
      v31,
      v3,
      (BSExtraDataVtbl *)LODWORD(v3->member.rot.x),
      (BSExtraDataVtbl *)LODWORD(v3->member.rot.y),
      (BSExtraData *)LODWORD(v3->member.rot.z));
  }
  return v3; /*0x45c600*/
}
