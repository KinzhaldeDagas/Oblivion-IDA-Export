char __thiscall TESLeveledList_GetCalcAllLevels(_BYTE *this)
{
  return *(this + 0xD) & 1; /*0x46cb05*/
}
