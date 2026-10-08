// Initializes only TESForm header state (type, flags, FormID, source file). It does not reset derived-form component fields before a loader replays subrecords.
void __userpurge TESFile_InitializeFormFromRecord(Data *this@<ecx>, TESForm *a2, int a3, int a4)
{
  TESForm::FormType FormTypeFromChunkType; // al
  bool v6; // zf

  if ( !this->currentRecord.chunkInfo.type ) /*0x451216*/
  {
    if ( !TESFile_LoadRecordHeader(this) ) /*0x45121e*/
    {
      FormTypeFromChunkType = kFormType_None; /*0x451227*/
      goto TESFile_InitializeFormFromRecord___SetFormData; /*0x451229*/
    }
    this->currentChunk.type = 0; /*0x45122d*/
    this->currentChunk.length = 0; /*0x451233*/
    TESFile_LoadChunkHeader(this); /*0x451239*/
  }
  FormTypeFromChunkType = (unsigned __int8)TESForm_GetFormTypeFromChunkType(this->currentRecord.chunkInfo.type); /*0x451245*/
TESFile_InitializeFormFromRecord___SetFormData:
  v6 = (a2->member.flags & 0x4000) == 0;        // Existing 0x4000 partial marker is sticky: if already set on the in-memory form, OR it into the incoming record flags; otherwise replace flags with the incoming value. /*0x45124d*/
  a2->member.type = FormTypeFromChunkType; /*0x45125a*/
  if ( v6 ) /*0x45125d*/
    a2->member.flags = this->currentRecord.flags; /*0x451276*/
  else
    a2->member.flags = this->currentRecord.flags | 0x4000; /*0x45126b*/
  TESForm_SetFormID(a2, this->currentRecord.formID, 1); /*0x451284*/
  TESForm_SetFile(a2, this); /*0x45128c*/
}
