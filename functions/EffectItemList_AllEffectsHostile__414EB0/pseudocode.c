int __thiscall EffectItemList_AllEffectsHostile(_DWORD *this)
{
  if ( *(this + 2) || *(this + 1) )
    return EffectItemList_AllEffectsHostile_::TestItem((int)this);
  else
    return EffectItemList_AllEffectsHostile_::Return_False();
}
