int __thiscall EffectItemList_GetIndexOfItem(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx

  if ( this && (v2 = this + 1) != 0 ) /*0x414d59*/
    return EffectItemList_GetIndexOfItem_::loop(0, a2, v2, a2); /*0x414d5f*/
  else
    return EffectItemList_GetIndexOfItem_::return_0(a2); /*0x414d54*/
}
