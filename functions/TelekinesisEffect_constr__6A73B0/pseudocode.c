ActiveEffect *__thiscall TelekinesisEffect_constr(ActiveEffect *this, int a2, int a3, int a4)
{
  ValueModifierEffect_constr(this, a2, a3, a4);
  this->vtbl = (ActiveEffectVtbl *)&TelekinesisEffect::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((float *)this + 0x10) = 0.0;
  *((_BYTE *)this + 0x4C) = 0;
  *((float *)this + 0x11) = 0.0;
  *((_BYTE *)this + 0x4D) = 0;
  return this;
}
