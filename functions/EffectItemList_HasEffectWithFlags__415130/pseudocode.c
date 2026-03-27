char __thiscall EffectItemList_HasEffectWithFlags(_DWORD *this, int a2)
{
  if ( !*(this + 2) && !*(this + 1) )
    return 0;
  if ( this )
    return EffectItemList_HasEffectWithFlags_::EffectLoop_Continue(this, a2);
  return EffectItemList_HasEffectWithFlags_::Done(a2);
}
