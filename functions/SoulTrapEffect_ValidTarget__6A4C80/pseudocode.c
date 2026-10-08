bool __thiscall SoulTrapEffect_ValidTarget(ActiveEffect *This, MagicTarget *a1)
{
  Actor *ParentActor; // eax
  MobileObject *v3; // esi
  Actor *v4; // edi

  if ( !a1 ) /*0x6a4c88*/
  {
    v3 = 0; /*0x6a4ca7*/
LABEL_6:
    v4 = 0; /*0x6a4ca9*/
    return v3 /*0x6a4ca9*/
        && !v3->vtbl->super.IsDead((TESObjectREFR *)v3, 0)
        && !v3->vtbl->IsDead(v3)
        && !Actor::IsEssential((Actor *)v3)
        && (Actor_IsNPC((Actor *)v3) || v4 && (int)Actor::GetSoulLevel(v4) > 0);
  }
  ParentActor = MagicTarget_GetParentActor(a1); /*0x6a4c8c*/
  v3 = (MobileObject *)ParentActor; /*0x6a4c91*/
  if ( !ParentActor || !Actor_IsCreature(ParentActor) ) /*0x6a4c99*/
    goto LABEL_6; /*0x6a4ca0*/
  v4 = (Actor *)&a1[-13]; /*0x6a4ca2*/
  return v3 /*0x6a4cf6*/
      && !v3->vtbl->super.IsDead((TESObjectREFR *)v3, 0)
      && !v3->vtbl->IsDead(v3)
      && !Actor::IsEssential((Actor *)v3)
      && (Actor_IsNPC((Actor *)v3) || v4 && (int)Actor::GetSoulLevel(v4) > 0);
}
