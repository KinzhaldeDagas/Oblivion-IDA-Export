double __userpurge EnchantmentItem_GetMagickaCost@<st0>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  if ( (*(_BYTE *)(a1 + 0x1C) & 1) != 0 ) /*0x4190a4*/
    return (double)*(int *)(a1 + 0x18); /*0x4190a6*/
  else
    return EffectItemList_MagickaCostForCaster(a1, a2, 0); /*0x4190b4*/
}
