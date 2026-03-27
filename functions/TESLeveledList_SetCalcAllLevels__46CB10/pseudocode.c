void __thiscall TESLeveledList_SetCalcAllLevels(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0xD) |= 1u;
  else
    *(this + 0xD) &= ~1u;
}
