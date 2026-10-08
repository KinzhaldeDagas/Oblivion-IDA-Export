int __thiscall LightEffect_PostLink(volatile LONG ***this, TESObjectREFR *linkContext)
{
  ActiveEffect_Base_PostLink((ActiveEffect *)this, linkContext); /*0x6943c8*/
  return ((int (__thiscall *)(volatile LONG ***))(*this)[0xE])(this); /*0x6943d6*/
}
