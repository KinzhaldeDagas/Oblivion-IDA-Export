void __thiscall sub_485BC0(_DWORD *this)
{
  int i; // esi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
      break;
    if ( *(_DWORD *)i )
      sub_425040(*(ExtraDataList **)i, 0x20, 0, 0, (TESForm *)*(this + 2));
  }
}
