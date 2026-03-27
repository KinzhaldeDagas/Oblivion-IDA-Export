void __thiscall TESLeveledList_SetCalcEachInCount(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0xD) |= 2u;
  else
    *(this + 0xD) &= ~2u;
}
