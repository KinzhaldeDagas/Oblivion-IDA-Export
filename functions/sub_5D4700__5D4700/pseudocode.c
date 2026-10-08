int __thiscall sub_5D4700(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned __int8 v7; // [esp+Fh] [ebp-1h]

  v2 = 0; /*0x5d4709*/
  v7 = 0; /*0x5d4711*/
  EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), 0); /*0x5d4715*/
  if ( !v3 ) /*0x5d471c*/
    return 0; /*0x5d4755*/
  do /*0x5d4748*/
  {
    EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), v2); /*0x5d472a*/
    if ( *(_DWORD *)(v4 + 0x10) == 1 ) /*0x5d4732*/
      v7 = 1; /*0x5d4734*/
    EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), ++v2); /*0x5d4741*/
  }
  while ( v5 ); /*0x5d4748*/
  return v7; /*0x5d474e*/
}
