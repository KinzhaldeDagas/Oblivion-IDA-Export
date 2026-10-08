void __thiscall ValueModifierEffect_constr(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  EffectSetting *setting; // eax

  ActiveEffect_Ctor(this, a2, a3, a4); /*0x6a8305*/
  this->vtbl = (ActiveEffectVtbl *)&ValueModifierEffect::`vftable'; /*0x6a830a*/
  setting = a4->setting; /*0x6a8310*/
  if ( (setting->effectFlags & 0x1000000) != 0 ) /*0x6a8317*/
  {
    *((_DWORD *)this + 0xE) = setting->data; /*0x6a831c*/
    JUMPOUT(0x6A8327); /*0x6a8327*/
  }
  ValueModifierEffect_constr_::OverrideAV((int)a4, (int)this, (int)a2, (int)a3, (int)a4); /*0x6a8317*/
}
