// Verified: WRLD writer serializes fields/chunks and bounds but does not serialize TESWorldSpace.road (+0x54), consistent with ROAD being a separate record grouped beneath its owning WRLD. Neighboring +0x4C/+0x50 remain Unknown.
UInt32 __usercall TESWorldSpace_WriteRecord@<eax>(TESWorldSpace *this@<ecx>, int a2@<edi>, char a3@<bpl>)
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

  TESForm_InitializeFormRecord((TESForm *)this, a3); /*0x4f1104*/
  TESFullName_Save((TESForm::ModReferenceList *)&this->fullName); /*0x4f110c*/
  parentWorldspace = this->parentWorldspace; /*0x4f1111*/
  Src = 0; /*0x4f1116*/
  if ( parentWorldspace ) /*0x4f111e*/
  {
    LODWORD(v13) = 4; /*0x4f1123*/
    Src = parentWorldspace->super.refID; /*0x4f112f*/
    TESForm_PutFormRecordChunkData(WNAM_ID, &Src, v13); /*0x4f1133*/
    goto LABEL_16; /*0x4f113b*/
  }
  climate = this->climate; /*0x4f1140*/
  if ( climate ) /*0x4f1145*/
  {
    LODWORD(v13) = 4; /*0x4f114a*/
    Src = *((_DWORD *)climate + 3); /*0x4f1156*/
    TESForm_PutFormRecordChunkData(CNAM_ID, &Src, v13); /*0x4f115a*/
  }
  v6 = this->parentWorldspace; /*0x4f1162*/
  HIDWORD(v12) = a2; /*0x4f1167*/
  v7 = MEMORY[0xB360AC]; /*0x4f1168*/
  if ( v6 ) /*0x4f116e*/
  {
    WaterFormParents = TESWorldSpace::GetWaterFormParents(v6); /*0x4f1172*/
  }
  else
  {
    if ( this->WaterForm ) /*0x4f1179*/
    {
LABEL_10:
      if ( v6 ) /*0x4f118b*/
      {
        WaterForm = TESWorldSpace::GetWaterFormParents(v6); /*0x4f118f*/
      }
      else
      {
        WaterForm = this->WaterForm; /*0x4f1196*/
        if ( !WaterForm ) /*0x4f119e*/
          WaterForm = v7; /*0x4f11a0*/
      }
      LODWORD(v12) = 4; /*0x4f11a5*/
      Src = WaterForm->super.refID; /*0x4f11b1*/
      TESForm_PutFormRecordChunkData(NAM2_ID, &Src, v12); /*0x4f11b5*/
      goto LABEL_15; /*0x4f11b5*/
    }
    WaterFormParents = MEMORY[0xB360AC]; /*0x4f1183*/
  }
  if ( WaterFormParents ) /*0x4f1187*/
    goto LABEL_10; /*0x4f1187*/
LABEL_15:
  TESTexture_Save((int)&this->texture, ICON_ID); /*0x4f11bd*/
  LODWORD(v12) = 0x10; /*0x4f11ca*/
  TESForm_PutFormRecordChunkData(MNAM_ID, this->unknown084, v12); /*0x4f11d8*/
  a2 = v14; /*0x4f11e0*/
LABEL_16:
  LODWORD(v13) = 1; /*0x4f11e1*/
  TESForm_SaveGenericComponents((TESForm *)this, a2, &this->worldFlags, v13); /*0x4f11e9*/
  LODWORD(v15) = 8; /*0x4f11ee*/
  TESForm_PutFormRecordChunkData(NAM0_ID, this->cellBounds, v15);// Oblivion WRLD writer emits NAM0 as exactly 8 bytes from unk9C[0:2] at 0x4F11FC; NAM9 emits exactly 8 bytes from unk9C[2:4] at 0x4F120F. These are current accumulated object bounds, not a replay of the serialized chunks. /*0x4f11fc*/
  LODWORD(v11) = 8; /*0x4f1201*/
  TESForm_PutFormRecordChunkData(NAM9_ID, &this->cellBounds[2], v11);// Oblivion WRLD writer emits NAM9 as exactly 8 bytes from unk9C[2:4]. Paired NAM0 minimum-axis serialization is at 0x4F11FC. /*0x4f120f*/
  if ( this->unknown084[4] ) /*0x4f1214*/
    TESForm_PutCurrentChunkData4(SNAM_ID, this->unknown084[4]); /*0x4f1227*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4f1236*/
}
