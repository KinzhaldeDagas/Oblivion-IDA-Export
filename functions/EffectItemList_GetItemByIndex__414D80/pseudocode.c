int __thiscall EffectItemList_GetItemByIndex(void *this, int a2)
{
  if ( !this || this == (void *)0xFFFFFFFC )
    return EffectItemList_GetItemByIndex_::return_0(a2);
  else
    return EffectItemList_GetItemByIndex_::Loop((int)this + 4, 0, a2, a2);
}
