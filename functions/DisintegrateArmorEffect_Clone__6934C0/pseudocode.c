ActiveEffect *__thiscall DisintegrateArmorEffect_Clone(int this)
{
  ActiveEffect *v2; // esi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu);
  if ( v2 )
  {
    ActiveEffect::ActiveEffect(
      v2,
      *(MagicCaster **)(this + 0x24),
      *(MagicItem **)(this + 8),
      *(EffectItem **)(this + 0xC));
    v2->vtbl = (ActiveEffectVtbl *)&DisintegrateArmorEffect::`vftable';
    v2[1].vtbl = 0;
  }
  else
  {
    v2 = 0;
  }
  ActiveEffect_Base_CopyTo(this, (int)v2);
  return v2;
}
