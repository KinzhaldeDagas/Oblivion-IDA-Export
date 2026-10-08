ActiveEffect *__thiscall DisintegrateArmorEffect_Clone(int this)
{
  ActiveEffect *v2; // esi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x6934ec*/
  if ( v2 ) /*0x6934ff*/
  {
    ActiveEffect_Ctor(v2, *(MagicCaster **)(this + 0x24), *(MagicItem **)(this + 8), *(EffectItem **)(this + 0xC)); /*0x69350f*/
    v2->vtbl = (ActiveEffectVtbl *)&DisintegrateArmorEffect::`vftable'; /*0x693514*/
    v2[1].vtbl = 0; /*0x69351a*/
  }
  else
  {
    v2 = 0; /*0x693523*/
  }
  ActiveEffect_Base_CopyTo(this, (int)v2); /*0x693530*/
  return v2; /*0x693537*/
}
