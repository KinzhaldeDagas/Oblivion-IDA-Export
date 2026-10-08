void __thiscall TESLeveledList_SetCalcAllLevels(_BYTE *this, char a2)
{
  if ( a2 ) /*0x46cb15*/
    *(this + 0xD) |= 1u; /*0x46cb17*/
  else
    *(this + 0xD) &= ~1u; /*0x46cb1e*/
}
