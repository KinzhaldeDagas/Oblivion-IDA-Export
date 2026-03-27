bool __thiscall TESWorldSpace::SeekWorldInFileFast(TESWorldSpace *this, Data *a2)
{
  return a2
      && TESFile_GetIsMaster(a2)
      && this->recordOffsetFromFileBeginning
      && TESFIle_JumpToRecord(a2, (char *)this->recordOffsetFromFileBeginning)
      && TESFile_GetRecordType(a2) == (unsigned __int8)dword_B0607C
      && a2->currentRecord.formID == this->super.refID;
}
