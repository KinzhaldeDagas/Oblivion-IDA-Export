signed int __thiscall AlchemyItem_IsEdible(int this)
{
  if ( (*(_BYTE *)(this + 0x7C) & 2) == 0 || EffectItemList_AllEffectsHostile((_DWORD *)(this + 0x30)) ) /*0x484329*/
    return AlchemyItem_IsEdible_::Return_False(); /*0x484324*/
  else
    return 1; /*0x484332*/
}
