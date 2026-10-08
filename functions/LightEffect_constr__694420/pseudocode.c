LightEffect_DecodedLayout *__thiscall LightEffect_constr(
        LightEffect_DecodedLayout *self,
        MagicCaster *caster,
        MagicItem *item,
        EffectItem *effectItem)
{
  NiLight *transientPointLight_38; // edi

  ActiveEffect_Ctor(&self->base_00, caster, item, effectItem); /*0x69445a*/
  self->base_00.vtbl = (ActiveEffectVtbl *)&LightEffect::`vftable'; /*0x69445f*/
  self->transientPointLight_38 = 0; /*0x69446d*/
  transientPointLight_38 = self->transientPointLight_38; /*0x694474*/
  if ( transientPointLight_38 ) /*0x69447e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&transientPointLight_38->members) ) /*0x694484*/
      transientPointLight_38->vtbl->super.super.Destructor((NiRefObject *)transientPointLight_38, 1); /*0x69449a*/
    self->transientPointLight_38 = 0; /*0x69449c*/
  }
  return self; /*0x6944a5*/
}
