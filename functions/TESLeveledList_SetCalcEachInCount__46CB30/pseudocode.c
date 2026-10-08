void __thiscall TESLeveledList_SetCalcEachInCount(_BYTE *this, char a2)
{
  if ( a2 ) /*0x46cb35*/
    *(this + 0xD) |= 2u; /*0x46cb37*/
  else
    *(this + 0xD) &= ~2u; /*0x46cb3e*/
}
