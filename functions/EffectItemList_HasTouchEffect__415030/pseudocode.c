void __thiscall EffectItemList_HasTouchEffect(_DWORD *this)
{
  if ( *(this + 2) || *(this + 1) ) /*0x415036*/
  {
    if ( this ) /*0x415043*/
      EffectItemList_HasTouchEffect_::EffectLoop(this, 0); /*0x415044*/
    else
      EffectItemList_HasTouchEffect_::Done(); /*0x415043*/
  }
}
