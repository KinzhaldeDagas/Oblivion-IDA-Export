int __thiscall EffectItemList_GetIndexOfItem(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx

  if ( this && (v2 = this + 1) != 0 )
    return EffectItemList_GetIndexOfItem_::loop(0, a2, v2, a2);
  else
    return EffectItemList_GetIndexOfItem_::return_0(a2);
}
