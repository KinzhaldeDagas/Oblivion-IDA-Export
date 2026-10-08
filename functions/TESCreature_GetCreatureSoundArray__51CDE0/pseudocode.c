int __thiscall TESCreature_GetCreatureSoundArray(_DWORD *this)
{
  if ( (*(this + 0xA) & 0x100) != 0 ) /*0x51ce0c*/
  {
    if ( *(this + 0x40) ) /*0x51ce0e*/
      JUMPOUT(0x51CE56); /*0x51ce56*/
  }
  return TESCreature_GetCreatureSoundArray_::MakeSoundArray(this);
}
