ActiveEffect *__thiscall DisintegrateWeaponEffect_Clone(int this)
{
  ActiveEffect *v2; // esi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x69381c*/
  if ( v2 ) /*0x69382f*/
  {
    ActiveEffect_Ctor(v2, *(MagicCaster **)(this + 0x24), *(MagicItem **)(this + 8), *(EffectItem **)(this + 0xC)); /*0x69383f*/
    v2->vtbl = (ActiveEffectVtbl *)&DisintegrateWeaponEffect::`vftable'; /*0x693844*/
  }
  else
  {
    v2 = 0; /*0x69384c*/
  }
  ActiveEffect_Base_CopyTo(this, (int)v2); /*0x693859*/
  return v2; /*0x693860*/
}
