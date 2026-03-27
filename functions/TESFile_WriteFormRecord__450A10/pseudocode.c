UInt32 __thiscall TESFile_WriteFormRecord(Data *this, int a2)
{
  UInt32 v3; // ebx

  TESFile_UpdateOpenGroups(this, a2);
  (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)this->bsFile + 0xC))(this->bsFile, 0, BSFile_FilePos_End);
  v3 = TESFile_WriteData(this, (int)TESForm_Static_FormRecordBuffer, TESForm_Static_FormRecordSize);
  if ( TESForm_Static_FormRecordBuffer )
  {
    if ( TESForm_Static_FormRecordSize )
      ++this->formCount;
  }
  TESFile_ClearFormRecord();
  return v3;
}
