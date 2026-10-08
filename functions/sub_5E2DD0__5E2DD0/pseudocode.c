void __thiscall sub_5E2DD0(_DWORD *this)
{
  int v2; // ecx

  v2 = *(this + 0x16); /*0x5e2dd3*/
  if ( v2 ) /*0x5e2dda*/
  {
    if ( !*(_DWORD *)(v2 + 8) || TESPackage::IsTemporaryOverrideType(*(char **)(v2 + 8)) ) /*0x5e2de6*/
      ExtraDataList::GetExtraPackage((ExtraDataList *)(this + 0x11)); /*0x5e2df4*/
  }
}
