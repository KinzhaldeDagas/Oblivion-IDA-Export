int __thiscall LightEffect_PostLink(volatile LONG ***this, int a2)
{
  ActiveEffect_Base_PostLink(this, a2);
  return ((int (__thiscall *)(volatile LONG ***))(*this)[0xE])(this);
}
