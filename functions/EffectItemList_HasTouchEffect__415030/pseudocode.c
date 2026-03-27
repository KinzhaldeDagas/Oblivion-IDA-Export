char __thiscall EffectItemList_HasTouchEffect(_DWORD *this)
{
  if ( !*(this + 2) && !*(this + 1) )
    return 0;
  if ( this )
    return EffectItemList_HasTouchEffect_::EffectLoop(this, 0);
  return EffectItemList_HasTouchEffect_::Done();
}
