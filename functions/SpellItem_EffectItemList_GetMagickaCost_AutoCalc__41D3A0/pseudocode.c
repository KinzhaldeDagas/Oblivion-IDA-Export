double __userpurge SpellItem_EffectItemList_GetMagickaCost_::AutoCalc@<st0>(
        int a1@<ebx>,
        int a2@<edi>,
        int *a3@<esi>,
        float a4)
{
  double result; // st7

  result = EffectItemList_MagickaCostForCaster(a2, a1, a3); /*0x41d3a3*/
  SpellItem_EffectItemList_GetMagickaCost_::Return(a4); /*0x41d3a9*/
  return result;
}
