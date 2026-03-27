void __thiscall TESFile_SetIsLoaded(Data *this, char a2)
{
  if ( a2 )
    this->fileFlags |= kFlag_Loaded;
  else
    this->fileFlags &= 0xFFFFFFF3;
}
