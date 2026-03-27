bool __thiscall SoulTrapEffect_ValidTarget(ActiveEffect *This, MagicTarget *a1)
{
  Actor *ParentActor; // eax
  MobileObject *v3; // esi
  Actor *v4; // edi

  if ( !a1 )
  {
    v3 = 0;
LABEL_6:
    v4 = 0;
    return v3
        && !v3->vtbl->super.IsDead((TESObjectREFR *)v3, 0)
        && !v3->vtbl->IsDead(v3)
        && !Actor::IsEssential((Actor *)v3)
        && (Actor_IsNPC((Actor *)v3) || v4 && (int)Actor::GetSoulLevel(v4) > 0);
  }
  ParentActor = MagicTarget_GetParentActor(a1);
  v3 = (MobileObject *)ParentActor;
  if ( !ParentActor || !Actor_IsCreature(ParentActor) )
    goto LABEL_6;
  v4 = (Actor *)&a1[-13];
  return v3
      && !v3->vtbl->super.IsDead((TESObjectREFR *)v3, 0)
      && !v3->vtbl->IsDead(v3)
      && !Actor::IsEssential((Actor *)v3)
      && (Actor_IsNPC((Actor *)v3) || v4 && (int)Actor::GetSoulLevel(v4) > 0);
}
