double __userpurge IngredAlch_GetMagickaCost@<st0>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  if ( (*(_BYTE *)(a1 + 0x4C) & 1) != 0 )
    return (double)*(int *)(a1 + 0x48);
  else
    return EffectItemList_MagickaCostForCaster(a1, a2, 0);
}
