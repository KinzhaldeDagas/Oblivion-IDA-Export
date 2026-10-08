signed int __userpurge TESDataHandler_LoadFile@<eax>(
        double a1@<st2>,
        double a2@<st1>,
        TESWorldSpace **a3@<ecx>,
        Data *file,
        bool firstFileLowFormFilter)
{
  TESWorldSpace **v6; // edi
  char Record; // bl
  UInt32 formID; // edi
  int v9; // eax
  int v10; // eax
  TESForm *v11; // eax
  TESForm *v12; // edi
  const char *v13; // eax
  int v14; // eax
  double v15; // st7
  int v16; // eax
  float v18; // [esp+8h] [ebp-130h]
  char v19; // [esp+1Fh] [ebp-119h]
  int v20; // [esp+20h] [ebp-118h]
  int v21; // [esp+24h] [ebp-114h]
  int v22; // [esp+28h] [ebp-110h]
  char v24[260]; // [esp+30h] [ebp-108h] BYREF

  v6 = a3; /*0x44f0e1*/
  if ( !TESFile_OpenBSFileWrapper__(file, 0, 0) )
    PrintError("DataHandler: internal error");
  v21 = 1; /*0x44f101*/
  v22 = 0; /*0x44f109*/
  unk_B33A9C = 0; /*0x44f10d*/
  unk_B33AA0 = 0; /*0x44f113*/
  unk_B33AA4 = 0; /*0x44f119*/
  while ( 1 ) /*0x44f127*/
  {
    v19 = 1; /*0x44f127*/
    Record = 1; /*0x44f12c*/
    if ( TESFile_GetRecordType(file) == 2 ) /*0x44f136*/
    {
      if ( !sub_448C60(file, (int)&file->currentRecord) ) /*0x44f142*/
      {
        v19 = 0; /*0x44f151*/
        Record = TESFile::NextGroup(file) != 0; /*0x44f162*/
      }
    }
    else if ( TESFile_GetRecordType(file) == 0x44 ) /*0x44f173*/
    {
      formID = file->currentRecord.formID; /*0x44f179*/
      if ( formID == 0xFFFFFFFF ) /*0x44f182*/
      {
        v19 = 0; /*0x44f184*/
        Record = 0; /*0x44f189*/
      }
      else if ( formID == 0xFFFFFFFE ) /*0x44f193*/
      {
        sub_738500(file->currentRecordOffset + 0x14, file->currentRecord.chunkInfo.length); /*0x44f1a8*/
        v19 = 0; /*0x44f1ad*/
        Record = 0; /*0x44f1b2*/
      }
      else if ( unk_B33AA4 ) /*0x44f1b9*/
      {
        *(_DWORD *)(unk_B33AA4 + 0x34) = formID; /*0x44f1c2*/
      }
      else if ( unk_B33AA0 ) /*0x44f1ca*/
      {
        sub_4EF030((TESWorldSpace *)unk_B33AA0, formID - file->currentRecordOffset); /*0x44f1db*/
      }
      else if ( unk_B33A9C ) /*0x44f1e5*/
      {
        if ( TESObjectCELL_IsInterior((TESObjectCELL *)unk_B33A9C) ) /*0x44f1f3*/
          sub_4C9D20((int)unk_B33A9C, formID); /*0x44f207*/
      }
    }
    else
    {
      LOBYTE(v9) = TESDataHandler_LoadFormRecord(v6, file, firstFileLowFormFilter); /*0x44f21c*/
      if ( v9 ) /*0x44f223*/
      {
        if ( g_TESSaveLoadGame && (g_TESSaveLoadGame->flags & 0x1000) != 0 ) /*0x44f241*/
        {
          v10 = unk_B33AD8 + 1; /*0x44f248*/
          unk_B33AD8 = v10; /*0x44f24d*/
          if ( !(_BYTE)v10 ) /*0x44f252*/
            sub_4523A0(0, a1, a2, 1.0, 0, 1.0); /*0x44f25b*/
          v11 = TESForm_LookupByFormID(file->currentRecord.formID); /*0x44f267*/
          if ( v11 ) /*0x44f271*/
            sub_461FA0((unsigned int **)g_TESSaveLoadGame, (int)v11); /*0x44f27a*/
        }
        else
        {
          v12 = TESForm_LookupByFormID(file->currentRecord.formID); /*0x44f28d*/
          if ( v12 ) /*0x44f294*/
          {
            switch ( v12->member.type ) /*0x44f2a9*/
            {
              case kFormType_NPC: /*0x44f2a9*/
              case kFormType_Creature: /*0x44f2a9*/
              case kFormType_REFR: /*0x44f2a9*/
              case kFormType_ACHR: /*0x44f2a9*/
              case kFormType_ACRE: /*0x44f2a9*/
                break;
              default:
                v13 = v12->vtbl->GetEditorName(v12); /*0x44f2ba*/
                if ( v13 ) /*0x44f2be*/
                {
                  if ( strlen(v13) ) /*0x44f2c2*/
                    sub_412D30(&off_B06164, (int)v13, v12); /*0x44f2d9*/
                }
                break; /*0x44f2d9*/
            }
          }
        }
      }
      else
      {
        v21 = 0; /*0x44f225*/
      }
    }
    v14 = unk_B33A94 + 1; /*0x44f2e0*/
    v15 = (double)v14; /*0x44f2ee*/
    unk_B33A94 = v14; /*0x44f2f2*/
    if ( v14 < 0 ) /*0x44f2f7*/
      v15 = v15 + flt_A2FC78; /*0x44f2f9*/
    a2 = (double)unk_B33A90; /*0x44f305*/
    if ( unk_B33A90 < 0 ) /*0x44f30d*/
      a2 = a2 + flt_A2FC78; /*0x44f30f*/
    v16 = Double_To_SInt32(v15 / a2 * fCostant_100); /*0x44f31d*/
    v20 = v16; /*0x44f326*/
    if ( v16 != v22 ) /*0x44f32a*/
    {
      v22 = v16; /*0x44f331*/
      _sprintf(v24, "Loading Files %d%% (%s)", v16, file->name); /*0x44f33f*/
      v18 = (float)v20; /*0x44f34b*/
      sub_57B950(0, a1, a2, 0, v18); /*0x44f34f*/
    }
    if ( v19 ) /*0x44f35c*/
      Record = TESFile_NextRecordEx(file, 1); /*0x44f367*/
    if ( !Record ) /*0x44f36b*/
      break; /*0x44f36b*/
    v6 = a3; /*0x44f121*/
  }
  if ( !TESFile_Close(file) )
    PrintError("DataHandler: internal error");
  return v21; /*0x44f37a*/
}
