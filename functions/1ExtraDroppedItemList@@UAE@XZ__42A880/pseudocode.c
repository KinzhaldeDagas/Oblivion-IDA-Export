void __thiscall ExtraDroppedItemList::~ExtraDroppedItemList(ExtraDroppedItemList *this)
{
  int v2; // edi

  *(_DWORD *)this = &ExtraDroppedItemList::`vftable';
  if ( *((_DWORD *)this + 4) )
  {
    do
    {
      v2 = *(_DWORD *)(*((_DWORD *)this + 4) + 4);
      FormHeapFree(*((_DWORD *)this + 4));
      *((_DWORD *)this + 4) = v2;
    }
    while ( v2 );
  }
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &BSExtraData::`vftable';
}
