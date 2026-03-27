int __usercall EffectItemList_GetStrongestItem_::EffectsLoop@<eax>(
        void *this@<ecx>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  if ( this )
    return EffectItemList_GetStrongestItem_::LoopBody(0xFFFFFFFF, a2, a3, a4, a5, a6, a7, a8, a9);
  else
    return EffectItemList_GetStrongestItem_::Return(a3, a4);
}
