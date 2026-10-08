LightEffect_DecodedLayout *__cdecl LightEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  LightEffect_DecodedLayout *v3; // eax

  v3 = (LightEffect_DecodedLayout *)FormHeapAlloc(0x3Cu); /*0x694a53*/
  if ( v3 ) /*0x694a69*/
    return LightEffect_constr(v3, caster, magicItem, effectItem); /*0x694a7c*/
  else
    return 0; /*0x694a91*/
}
