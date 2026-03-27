void __thiscall sub_5E2DD0(_DWORD *this)
{
  int v2; // ecx

  v2 = *(this + 0x16);
  if ( v2 )
  {
    if ( !*(_DWORD *)(v2 + 8) || sub_567770(*(char **)(v2 + 8)) )
      ExtraDataList::GetExtraPackage((ExtraDataList *)(this + 0x11));
  }
}
