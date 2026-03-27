UInt32 __usercall TESWorldSpace::SaveAlt_@<eax>(TESWorldSpace *this@<ecx>, int a2@<edi>, char a3@<bpl>)
{
  TESWorldSpace *parentWorldspace; // eax
  TESClimate *climate; // eax
  TESWorldSpace *v6; // edx
  TESWaterForm *v7; // edi
  TESWaterForm *WaterFormParents; // eax
  TESWaterForm *WaterForm; // eax
  size_t v11; // [esp-10h] [ebp-18h]
  size_t v12; // [esp-8h] [ebp-10h]
  size_t v13; // [esp-4h] [ebp-Ch]
  int v14; // [esp-4h] [ebp-Ch]
  size_t v15; // [esp-4h] [ebp-Ch]
  UInt32 Src; // [esp+4h] [ebp-4h] BYREF

  TESForm_InitializeFormRecord((TESForm *)this, a3);
  TESFullName_Save((TESForm::ModReferenceList *)&this->fullName);
  parentWorldspace = this->parentWorldspace;
  Src = 0;
  if ( parentWorldspace )
  {
    LODWORD(v13) = 4;
    Src = parentWorldspace->super.refID;
    TESForm_PutFormRecordChunkData(WNAM_ID, &Src, v13);
    goto LABEL_16;
  }
  climate = this->climate;
  if ( climate )
  {
    LODWORD(v13) = 4;
    Src = *((_DWORD *)climate + 3);
    TESForm_PutFormRecordChunkData(CNAM_ID, &Src, v13);
  }
  v6 = this->parentWorldspace;
  HIDWORD(v12) = a2;
  v7 = TESDataHandler_g_DefaultWater;
  if ( v6 )
  {
    WaterFormParents = TESWorldSpace::GetWaterFormParents(v6);
  }
  else
  {
    if ( this->WaterForm )
    {
LABEL_10:
      if ( v6 )
      {
        WaterForm = TESWorldSpace::GetWaterFormParents(v6);
      }
      else
      {
        WaterForm = this->WaterForm;
        if ( !WaterForm )
          WaterForm = v7;
      }
      LODWORD(v12) = 4;
      Src = WaterForm->super.refID;
      TESForm_PutFormRecordChunkData(NAM2_ID, &Src, v12);
      goto LABEL_15;
    }
    WaterFormParents = TESDataHandler_g_DefaultWater;
  }
  if ( WaterFormParents )
    goto LABEL_10;
LABEL_15:
  TESTexture_Save((int)&this->texture, ICON_ID);
  LODWORD(v12) = 0x10;
  TESForm_PutFormRecordChunkData(MNAM_ID, this->unk084, v12);
  a2 = v14;
LABEL_16:
  LODWORD(v13) = 1;
  TESForm_SaveGenericComponents((TESForm *)this, a2, &this->worldFlags, v13);
  LODWORD(v15) = 8;
  TESForm_PutFormRecordChunkData(NAM0_ID, this->unk9C, v15);
  LODWORD(v11) = 8;
  TESForm_PutFormRecordChunkData(NAM9_ID, &this->unk9C[2], v11);
  if ( this->unk084[4] )
    TESForm_PutCurrentChunkData4(SNAM_ID, this->unk084[4]);
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
