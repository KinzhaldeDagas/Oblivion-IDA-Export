bool __thiscall sub_5233D0(_DWORD *this, Data *a2)
{
  return a2
      && *(this + 0x7B)
      && TESFile_OpenBSFileWrapper__(a2, 0, 0)
      && TESFIle_JumpToRecord(a2, (char *)*(this + 0x7B))
      && TESFile_GetRecordType(a2) == (unsigned __int8)byte_B05FA4
      && a2->currentRecord.formID == *(this + 3);
}
