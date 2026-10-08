char __thiscall TES::IsInteriorCellPreloaded(TES *this, TESObjectCELL *a2)
{
  unsigned int i; // eax

  for ( i = 0; i < uInteriorCellBuffer; ++i ) /*0x43fd4c*/
  {
    if ( this->interiorCellBufferArray[i] == a2 ) /*0x43fd5a*/
      return 1; /*0x43fd65*/
  }
  return 0; /*0x43fd61*/
}
