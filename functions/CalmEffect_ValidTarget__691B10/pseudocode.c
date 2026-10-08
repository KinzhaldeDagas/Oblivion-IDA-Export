bool __thiscall CalmEffect_ValidTarget(float *this, MagicTarget *a2)
{
  Actor *ParentActor; // esi
  unsigned __int16 Level; // ax
  bool result; // al
  float v6; // [esp+18h] [ebp+4h]

  result = 0; /*0x691b82*/
  if ( a2 ) /*0x691b1a*/
  {
    ParentActor = MagicTarget_GetParentActor(a2); /*0x691b21*/
    if ( ParentActor ) /*0x691b25*/
    {
      if ( !ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) /*0x691b55*/
        && !ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor)
        && ParentActor->vtbl->IsInCombat(ParentActor, 1) )
      {
        v6 = *(this + 6); /*0x691b5f*/
        Level = Actor_GetLevel(ParentActor); /*0x691b6c*/
        if ( Calc_MagnitudeAffectsLevel(Level, v6) ) /*0x691b75*/
          return 1; /*0x691b1a*/
      }
    }
  }
  return result; /*0x691b81*/
}
