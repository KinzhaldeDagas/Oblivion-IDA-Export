int __userpurge SpellItem_EffectItemList_GetMagickaCost_::AutoCalc@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int *a3@<esi>,
        int a4)
{
  double v4; // st7

  v4 = EffectItemList_MagickaCostForCaster(a2, a1, a3);
  return SpellItem_EffectItemList_GetMagickaCost_::Return(a4, v4);
}
