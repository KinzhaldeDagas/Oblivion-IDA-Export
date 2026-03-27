signed int __userpurge TESDataHandler_LoadFile@<eax>(
        double a1@<st2>,
        double a2@<st1>,
        TESWorldSpace **a3@<ecx>,
        double a4@<st0>,
        Data *a5,
        char a6)
{
  TESWorldSpace **v6; // edi
  char Record; // bl
  int formID; // edi
  int v9; // eax
  TESForm *v10; // eax
  TESForm *v11; // edi
  const char *v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // eax
  float v17; // [esp+8h] [ebp-130h]
  char v18; // [esp+1Fh] [ebp-119h]
  int v19; // [esp+20h] [ebp-118h]
  int v20; // [esp+24h] [ebp-114h]
  int v21; // [esp+28h] [ebp-110h]
  char v23[260]; // [esp+30h] [ebp-108h] BYREF

  v6 = a3;
  if ( !TESFile_OpenBSFileWrapper__((int)a5, 0, 0) )
    PrintError("DataHandler: internal error");
  v20 = 1;
  v21 = 0;
  dword_B33A9C = 0;
  dword_B33AA0 = 0;
  dword_B33AA4 = 0;
  while ( 1 )
  {
    v18 = 1;
    Record = 1;
    if ( TESFile_GetRecordType(a5) == 2 )
    {
      if ( !sub_448C60(a5, (int)&a5->currentRecord) )
      {
        v18 = 0;
        Record = TESFile::NextGroup(a5) != 0;
      }
    }
    else if ( TESFile_GetRecordType(a5) == 0x44 )
    {
      formID = a5->currentRecord.formID;
      if ( formID == 0xFFFFFFFF )
      {
        v18 = 0;
        Record = 0;
      }
      else if ( formID == 0xFFFFFFFE )
      {
        sub_738500(a5->currentRecordOffset + 0x14, a5->currentRecord.chunkInfo.length);
        v18 = 0;
        Record = 0;
      }
      else if ( dword_B33AA4 )
      {
        *(_DWORD *)(dword_B33AA4 + 0x34) = formID;
      }
      else if ( dword_B33AA0 )
      {
        sub_4EF030(dword_B33AA0, formID - a5->currentRecordOffset);
      }
      else if ( dword_B33A9C )
      {
        if ( TESObjectCELL_IsInterior((TESObjectCELL *)dword_B33A9C) )
          sub_4C9D20((int)dword_B33A9C, formID);
      }
    }
    else if ( TESDataHandler_LoadFormRecord(v6, a1, a2, a4, a5, a6) )
    {
      if ( SaveLoad_CurrentSavegame && (SaveLoad_CurrentSavegame->flags & 0x1000) != 0 )
      {
        v9 = dword_B33AD8 + 1;
        dword_B33AD8 = v9;
        if ( !(_BYTE)v9 )
          sub_4523A0(0, a1, a2, 1.0, 0, 1.0);
        v10 = TESForm_LookupByFormID(a5->currentRecord.formID);
        if ( v10 )
          sub_461FA0(SaveLoad_CurrentSavegame, (int)v10);
      }
      else
      {
        v11 = TESForm_LookupByFormID(a5->currentRecord.formID);
        if ( v11 )
        {
          switch ( v11->member.type )
          {
            case kFormType_NPC:
            case kFormType_Creature:
            case kFormType_REFR:
            case kFormType_ACHR:
            case kFormType_ACRE:
              break;
            default:
              v12 = v11->vtbl->GetEditorName(v11);
              if ( v12 )
              {
                if ( strlen(v12) )
                  sub_412D30(&off_B06164, (int)v12, v11);
              }
              break;
          }
        }
      }
    }
    else
    {
      v20 = 0;
    }
    v13 = dword_B33A94 + 1;
    v14 = (double)v13;
    dword_B33A94 = v13;
    if ( v13 < 0 )
      v14 = v14 + flt_A2FC78;
    a2 = (double)dword_B33A90;
    if ( dword_B33A90 < 0 )
      a2 = a2 + flt_A2FC78;
    a4 = v14 / a2 * fCostant_100;
    v15 = Double_To_SInt32(a4);
    v19 = v15;
    if ( v15 != v21 )
    {
      v21 = v15;
      _sprintf(v23, "Loading Files %d%% (%s)", v15, a5->name);
      a4 = (double)v19;
      v17 = a4;
      sub_57B950(0, a1, a2, a4, 0, v17);
    }
    if ( v18 )
      Record = TESFile_NextRecordEx(a5, 1);
    if ( !Record )
      break;
    v6 = a3;
  }
  if ( !TESFile_Close(a5) )
    PrintError("DataHandler: internal error");
  return v20;
}
