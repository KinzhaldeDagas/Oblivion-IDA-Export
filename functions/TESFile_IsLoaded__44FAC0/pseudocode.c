bool __thiscall TESFile_IsLoaded(Data *this)
{
  return (this->fileFlags & kFlag_Loaded) != 0;
}
