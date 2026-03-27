bool __thiscall FrenzyEffect_ValidTarget(float *this, void *a2)
{
  Actor *v3; // eax
  Actor *v4; // esi
  unsigned __int16 Level; // ax
  bool result; // al
  float v7; // [esp+14h] [ebp+4h]

  v3 = (Actor *)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
                  &Character `RTTI Type Descriptor',
                  0);
  v4 = v3;
  result = 0;
  if ( v3 )
  {
    if ( !v3->vtbl->super.super.IsDead((TESObjectREFR *)v3, 0) && !v4->vtbl->super.IsDead((MobileObject *)v4) )
    {
      v7 = *(this + 6);
      Level = Actor_GetLevel(v4);
      if ( Calc_MagnitudeAffectsLevel(Level, v7) )
        return 1;
    }
  }
  return result;
}
