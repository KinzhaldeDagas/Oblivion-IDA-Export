bool __thiscall sub_5E34B0(_DWORD *this)
{
  int v2; // eax
  BSExtraDataVtbl *ExtraPackage; // esi

  v2 = *(this + 0x16);
  if ( !v2 )
    return 0;
  ExtraPackage = *(BSExtraDataVtbl **)(v2 + 8);
  if ( !ExtraPackage || sub_567770(*(char **)(v2 + 8)) )
    ExtraPackage = ExtraDataList::GetExtraPackage((ExtraDataList *)(this + 0x11));
  return ExtraPackage && ((int)ExtraPackage[3].CompareTo & 0x80000) != 0;
}
