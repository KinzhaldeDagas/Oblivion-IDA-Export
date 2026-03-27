ActiveEffect *__thiscall DisintegrateWeaponEffect_Clone(int this)
{
  ActiveEffect *v2; // esi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u);
  if ( v2 )
  {
    ActiveEffect::ActiveEffect(
      v2,
      *(MagicCaster **)(this + 0x24),
      *(MagicItem **)(this + 8),
      *(EffectItem **)(this + 0xC));
    v2->vtbl = (ActiveEffectVtbl *)&DisintegrateWeaponEffect::`vftable';
  }
  else
  {
    v2 = 0;
  }
  ActiveEffect_Base_CopyTo(this, (int)v2);
  return v2;
}
