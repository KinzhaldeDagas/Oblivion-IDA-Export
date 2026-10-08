LightEffect_DecodedLayout *__thiscall LightEffect_Clone(LightEffect_DecodedLayout *self)
{
  LightEffect_DecodedLayout *v2; // eax
  LightEffect_DecodedLayout *v3; // edi

  v2 = (LightEffect_DecodedLayout *)FormHeapAlloc(0x3Cu); /*0x694567*/
  v3 = 0; /*0x694573*/
  if ( v2 ) /*0x69457b*/
    v3 = LightEffect_constr( /*0x694590*/
           v2,
           self->base_00.members.caster,
           self->base_00.members.item,
           self->base_00.members.effectItem);
  ((void (__thiscall *)(LightEffect_DecodedLayout *, LightEffect_DecodedLayout *))self->base_00.vtbl->copyTo)(self, v3); /*0x6945a2*/
  return v3; /*0x6945a6*/
}
