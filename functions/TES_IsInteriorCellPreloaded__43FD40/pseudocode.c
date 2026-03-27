char __thiscall TES::IsInteriorCellPreloaded(TES *this, TESObjectCELL *a2)
{
  unsigned int i; // eax

  for ( i = 0; i < uInteriorCellBuffer; ++i )
  {
    if ( this->interiorCellBufferArray[i] == a2 )
      return 1;
  }
  return 0;
}
