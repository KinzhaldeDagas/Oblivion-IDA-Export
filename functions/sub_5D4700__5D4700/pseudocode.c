int __thiscall sub_5D4700(_DWORD *this)
{
  int v2; // esi
  unsigned __int8 v4; // [esp+Fh] [ebp-1h]

  v2 = 0;
  v4 = 0;
  if ( !EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), 0) )
    return 0;
  do
  {
    if ( *(_DWORD *)(EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), v2) + 0x10) == 1 )
      v4 = 1;
    ++v2;
  }
  while ( EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), v2) );
  return v4;
}
