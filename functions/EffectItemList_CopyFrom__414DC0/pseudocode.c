int __thiscall EffectItemList_CopyFrom(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  EffectItemList_Clear(this);
  if ( a2 )
    return EffectItemList_CopyFrom_::LoopBody(0, a2, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  else
    return EffectItemList_CopyFrom_::Done(0);
}
