int __thiscall TESFile_SetFileIndex(Data *this, UInt8 a2)
{
  int result; // eax

  LOBYTE(result) = a2;
  this->nextFormID = this->nextFormID & 0xFFFFFF | (a2 << 0x18);
  this->fileIndex = a2;
  return result;
}
