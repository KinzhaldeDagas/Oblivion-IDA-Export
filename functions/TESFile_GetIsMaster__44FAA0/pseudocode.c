char __thiscall TESFile_GetIsMaster(Data *this)
{
  return this->fileFlags & kFlag_IsMaster;
}
