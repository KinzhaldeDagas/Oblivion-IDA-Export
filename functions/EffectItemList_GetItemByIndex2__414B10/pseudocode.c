int __thiscall EffectItemList_GetItemByIndex2(char *this, int a2)
{
  if ( a2 < 0 )
    return EffectItemList_GetItemByIndex2_::Done(a2);
  else
    return EffectItemList_GetItemByIndex2_::GetEffectCount(this, this + 4);
}
