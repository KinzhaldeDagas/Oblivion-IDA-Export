int __thiscall TESFile_SetFileIndex(Data *this, UInt8 a2)
{
  int result; // eax

  LOBYTE(result) = a2; /*0x44fb20*/
  this->nextFormID = this->nextFormID & 0xFFFFFF | (a2 << 0x18); /*0x44fb39*/
  this->fileIndex = a2; /*0x44fb3f*/
  return result; /*0x44fb45*/
}
