void __thiscall ValueModifierEffect_constr(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  EffectSetting *setting; // eax

  ActiveEffect::ActiveEffect(this, a2, a3, a4);
  this->vtbl = (ActiveEffectVtbl *)&ValueModifierEffect::`vftable';
  setting = a4->setting;
  if ( (setting->effectFlags & 0x1000000) != 0 )
  {
    *((_DWORD *)this + 0xE) = setting->data;
    JUMPOUT(0x6A8327);
  }
  ValueModifierEffect_constr_::OverrideAV((int)a4, (int)this, (int)a2, (int)a3, (int)a4);
}
