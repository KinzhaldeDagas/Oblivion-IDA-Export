char __thiscall EffectItemList_AllEffectsHostile(_DWORD *this)
{
  if ( *(this + 2) || *(this + 1) ) /*0x414eb9*/
    return EffectItemList_AllEffectsHostile_::TestItem((int)this); /*0x414eb7*/
  else
    return EffectItemList_AllEffectsHostile_::Return_False(); /*0x414ebe*/
}
