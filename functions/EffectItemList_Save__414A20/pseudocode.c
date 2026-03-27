int __thiscall EffectItemList_Save(void *this, int a2, int a3)
{
  if ( this )
    return EffectItemList_Save_::LoopBody((int)this, a2, a3);
  else
    return EffectItemList_Save_::Done();
}
