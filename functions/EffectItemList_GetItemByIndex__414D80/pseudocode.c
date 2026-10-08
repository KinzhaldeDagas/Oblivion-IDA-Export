int __thiscall EffectItemList_GetItemByIndex(void *this, int a2)
{
  if ( !this || this == (void *)0xFFFFFFFC ) /*0x414d8b*/
    return EffectItemList_GetItemByIndex_::return_0(a2); /*0x414d84*/
  else
    return EffectItemList_GetItemByIndex_::Loop((int)this + 4, 0, a2, a2); /*0x414d8e*/
}
