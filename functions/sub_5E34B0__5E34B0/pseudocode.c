bool __thiscall sub_5E34B0(_DWORD *this)
{
  int v2; // eax
  BSExtraDataVtbl *ExtraPackage; // esi

  v2 = *(this + 0x16); /*0x5e34b4*/
  if ( !v2 ) /*0x5e34bb*/
    return 0; /*0x5e34f5*/
  ExtraPackage = *(BSExtraDataVtbl **)(v2 + 8); /*0x5e34be*/
  if ( !ExtraPackage || TESPackage::IsTemporaryOverrideType(*(char **)(v2 + 8)) ) /*0x5e34c7*/
    ExtraPackage = ExtraDataList::GetExtraPackage((ExtraDataList *)(this + 0x11)); /*0x5e34d8*/
  return ExtraPackage && ((int)ExtraPackage[3].CompareTo & 0x80000) != 0; /*0x5e34e9*/
}
