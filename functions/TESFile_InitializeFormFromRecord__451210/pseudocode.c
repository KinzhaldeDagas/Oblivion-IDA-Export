void __userpurge TESFile_InitializeFormFromRecord(Data *this@<ecx>, TESForm *a2, int a3, int a4)
{
  TESForm::FormType FormTypeFromChunkType; // al
  bool v6; // zf

  if ( !this->currentRecord.chunkInfo.type )
  {
    if ( !TESFile_LoadRecordHeader(this) )
    {
      FormTypeFromChunkType = kFormType_None;
      goto TESFile_InitializeFormFromRecord___SetFormData;
    }
    this->currentChunk.type = 0;
    this->currentChunk.length = 0;
    TESFile_LoadChunkHeader(this);
  }
  FormTypeFromChunkType = (unsigned __int8)TESForm_GetFormTypeFromChunkType(this->currentRecord.chunkInfo.type);
TESFile_InitializeFormFromRecord___SetFormData:
  v6 = (a2->member.flags & 0x4000) == 0;
  a2->member.type = FormTypeFromChunkType;
  if ( v6 )
    a2->member.flags = this->currentRecord.flags;
  else
    a2->member.flags = this->currentRecord.flags | 0x4000;
  TESForm_SetFormID(a2, this->currentRecord.formID, 1);
  sub_46B6C0(a2, this);
}
