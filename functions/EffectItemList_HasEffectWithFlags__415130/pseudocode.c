void __thiscall EffectItemList_HasEffectWithFlags(_DWORD *this, int a2)
{
  if ( *(this + 2) || *(this + 1) ) /*0x415136*/
  {
    if ( this ) /*0x415145*/
      EffectItemList_HasEffectWithFlags_::EffectLoop_Continue(this, a2); /*0x41516e*/
    else
      EffectItemList_HasEffectWithFlags_::Done(a2); /*0x415145*/
  }
}
