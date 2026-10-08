void __thiscall ExtraDroppedItemList::~ExtraDroppedItemList(ExtraDroppedItemList *this)
{
  int v2; // edi

  *(_DWORD *)this = &ExtraDroppedItemList::`vftable'; /*0x42a883*/
  if ( *((_DWORD *)this + 4) ) /*0x42a889*/
  {
    do /*0x42a8a4*/
    {
      v2 = *(_DWORD *)(*((_DWORD *)this + 4) + 4); /*0x42a893*/
      FormHeapFree(*((_DWORD *)this + 4)); /*0x42a897*/
      *((_DWORD *)this + 4) = v2; /*0x42a8a1*/
    }
    while ( v2 ); /*0x42a8a4*/
  }
  *((_DWORD *)this + 3) = 0; /*0x42a8a7*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42a8ae*/
}
