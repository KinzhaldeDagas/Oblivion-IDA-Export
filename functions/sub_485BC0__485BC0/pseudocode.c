void __thiscall sub_485BC0(_DWORD *this)
{
  int i; // esi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x485bc4*/
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i ) /*0x485bd6*/
      break; /*0x485bd9*/
    if ( *(_DWORD *)i ) /*0x485bdb*/
      sub_425040(*(ExtraDataList **)i, 0x20, 0, 0, (TESForm *)*(this + 2)); /*0x485beb*/
  }
}
