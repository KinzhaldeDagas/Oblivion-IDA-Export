bool __thiscall CalmEffect_ValidTarget(float *this, MagicTarget *a2)
{
  Actor *ParentActor; // esi
  unsigned __int16 Level; // ax
  bool result; // al
  float v6; // [esp+18h] [ebp+4h]

  result = 0;
  if ( a2 )
  {
    ParentActor = MagicTarget_GetParentActor(a2);
    if ( ParentActor )
    {
      if ( !ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0)
        && !ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor)
        && ParentActor->vtbl->IsInCombat(ParentActor, 1) )
      {
        v6 = *(this + 6);
        Level = Actor_GetLevel(ParentActor);
        if ( Calc_MagnitudeAffectsLevel(Level, v6) )
          return 1;
      }
    }
  }
  return result;
}
