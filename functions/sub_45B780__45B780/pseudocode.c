char __thiscall sub_45B780(TESForm *this, unsigned int formID, bool a3)
{
  char result; // al

  result = formID; /*0x45b780*/
  if ( (*(_DWORD *)(formID + 8) & 0x4000) == 0 ) /*0x45b78d*/
    return SaveLoadChangesMap_RemoveChanges((ChangesMap *)this->vtbl, *(_DWORD *)(formID + 0xC), a3); /*0x45b798*/
  return result; /*0x45b79d*/
}
