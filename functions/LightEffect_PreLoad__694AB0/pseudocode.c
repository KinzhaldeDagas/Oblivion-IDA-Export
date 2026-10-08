void __thiscall LightEffect_PreLoad(LightEffect_DecodedLayout *self, int context)
{
  nullsub_returnvVoid_1arg(context); /*0x694ab8*/
  LightEffect_TeardownTransientPointLight(self);// PreLoad tears down any existing transient LightEffect point light and its native full-list entry. /*0x694abf*/
}
