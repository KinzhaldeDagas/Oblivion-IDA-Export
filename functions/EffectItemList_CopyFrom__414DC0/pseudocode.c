void __thiscall EffectItemList_CopyFrom(
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
  EffectItemList_Clear(this); /*0x414de9*/
  if ( a2 ) /*0x414df8*/
    EffectItemList_CopyFrom_::LoopBody(0, a2, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); /*0x414dff*/
  else
    EffectItemList_CopyFrom_::Done(0); /*0x414df8*/
}
