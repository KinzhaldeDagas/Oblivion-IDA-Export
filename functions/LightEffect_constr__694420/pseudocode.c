ActiveEffect *__thiscall LightEffect_constr(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  int v5; // edi

  ActiveEffect::ActiveEffect(this, a2, a3, a4);
  this->vtbl = (ActiveEffectVtbl *)&LightEffect::`vftable';
  *((_DWORD *)this + 0xE) = 0;
  v5 = *((_DWORD *)this + 0xE);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0xE) = 0;
  }
  return this;
}
