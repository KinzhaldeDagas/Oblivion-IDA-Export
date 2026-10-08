void __userpurge CalmEffect_Update(ActiveEffect *a1@<ecx>, int a2@<ebx>, char a3@<bpl>, int a4)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // esi
  CombatController *v7; // eax
  bool v8; // bl

  ValueModifierEffect_UpdateEffect(a1, a4); /*0x691bdb*/
  target = a1->members.target; /*0x691be0*/
  if ( target ) /*0x691be5*/
  {
    ParentActor = MagicTarget_GetParentActor(target); /*0x691bed*/
    if ( ParentActor ) /*0x691bf1*/
    {
      if ( ((int (__thiscall *)(Actor *, int))ParentActor->vtbl->GetCombatController)(ParentActor, a2) ) /*0x691bfe*/
      {
        v7 = ParentActor->vtbl->GetCombatController(ParentActor); /*0x691c0e*/
        v8 = sub_612C60(v7); /*0x691c17*/
      }
      else
      {
        v8 = 1; /*0x691c1b*/
      }
      if ( ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) /*0x691c41*/
        || ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor)
        || !v8 )
      {
        ActiveEffect_Base_Remove(a1, a3, *(float *)&a4, 0); /*0x691c47*/
      }
    }
  }
}
