void __thiscall LightEffect::~LightEffect(LightEffect_DecodedLayout *self)
{
  NiLight *transientPointLight_38; // esi

  transientPointLight_38 = self->transientPointLight_38; /*0x6944e9*/
  if ( transientPointLight_38 ) /*0x6944f6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&transientPointLight_38->members) ) /*0x6944fc*/
      transientPointLight_38->vtbl->super.super.Destructor((NiRefObject *)transientPointLight_38, 1); /*0x694512*/
  }
  ActiveEffect::~ActiveEffect(&self->base_00); /*0x69451e*/
}
