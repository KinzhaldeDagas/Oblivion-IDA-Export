bool __thiscall sub_5E8870(_BYTE *this)
{
  BSExtraDataVtbl *ExtraPackage; // eax

  ExtraPackage = ExtraDataList::GetExtraPackage((ExtraDataList *)(this + 0x44)); /*0x5e8873*/
  return ExtraPackage && ((int)ExtraPackage[3].CompareTo & 1) != 0; /*0x5e8884*/
}
