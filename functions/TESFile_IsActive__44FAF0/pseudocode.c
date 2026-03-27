bool __thiscall TESFile_IsActive(Data *this)
{
  return (this->fileFlags & kFlag_Active) != 0;
}
