bool __thiscall FrenzyEffect_ValidTarget(float *this, void *a2)
{
  Actor *v3; // eax
  Actor *v4; // esi
  unsigned __int16 Level; // ax
  bool result; // al
  float v7; // [esp+14h] [ebp+4h]

  v3 = (Actor *)OblivionDynamicCast( /*0x693c57*/
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
                  &Character `RTTI Type Descriptor',
                  0);
  v4 = v3; /*0x693c5c*/
  result = 0; /*0x693cb5*/
  if ( v3 ) /*0x693c63*/
  {
    if ( !v3->vtbl->super.super.IsDead((TESObjectREFR *)v3, 0) && !v4->vtbl->super.IsDead((MobileObject *)v4) ) /*0x693c81*/
    {
      v7 = *(this + 6); /*0x693c8b*/
      Level = Actor_GetLevel(v4); /*0x693c98*/
      if ( Calc_MagnitudeAffectsLevel(Level, v7) ) /*0x693ca1*/
        return 1; /*0x693c63*/
    }
  }
  return result; /*0x693cad*/
}
