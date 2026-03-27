signed int __thiscall AlchemyItem_IsEdible(int this)
{
  if ( (*(_BYTE *)(this + 0x7C) & 2) == 0 || (unsigned __int8)EffectItemList_AllEffectsHostile((_DWORD *)(this + 0x30)) )
    return AlchemyItem_IsEdible_::Return_False();
  else
    return 1;
}
