//  Verified: TESGlobal class loader accepts type-4 form records, initializes base form, reads FNAM one-byte type into member+0x20 and FLTV four-byte float into member+0x24, in addition to EDID. Confirmed by raw TESGlobal RTTI/vtable at A49818/A4981C; slot +0x38 dispatches here.
char __thiscall TESGlobal_LoadFormRecord(TESGlobal *self, Data *file)
{
  UInt32 i; // eax
  int v5[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(file) != 4 ) /*0x4f9490*/
    return 0; /*0x4f9492*/
  TESFile_InitializeFormFromRecord(file, (TESForm *)self, v5[0], v5[1]); /*0x4f949c*/
  for ( i = TESFile_GetChunkType(file); i; i = TESFile_GetChunkType(file) ) /*0x4f94aa*/
  {
    switch ( i ) /*0x4f94b5*/
    {
      case 0x44494445u: /*0x4f94b5*/
        _alloca_(v5[0]); /*0x4f94e7*/
        TESFile_GetChunkData(file, (char *)v5, 0x200u); /*0x4f94f6*/
        self->vtbl->SetEditorID((TESForm *)self, (const char *)v5); /*0x4f9506*/
        break;
      case 0x4D414E46u: /*0x4f94b5*/
        TESFile_GetChunkData(file, (char *)&self->type, 1u); /*0x4f94da*/
        break;
      case 0x56544C46u: /*0x4f94b5*/
        TESFile_GetChunkData4(file, (char *)&self->data); /*0x4f94cb*/
        break;
    }
    if ( !TESFile_GetNextChunk(file) ) /*0x4f950a*/
      break; /*0x4f9511*/
  }
  return 1; /*0x4f9523*/
}
