char __thiscall sub_5D4760(_DWORD *this)
{
  int v2; // esi
  char i; // bl

  v2 = 0;
  for ( i = 0; EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), v2); ++v2 )
  {
    if ( !*(_DWORD *)(EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), v2) + 0x10) )
      i = 1;
  }
  return i;
}
