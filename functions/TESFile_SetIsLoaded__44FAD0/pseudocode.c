void __thiscall TESFile_SetIsLoaded(Data *this, char a2)
{
  if ( a2 ) /*0x44fad5*/
    this->fileFlags |= kFlag_Loaded; /*0x44fad7*/
  else
    this->fileFlags &= 0xFFFFFFF3; /*0x44fae1*/
}
