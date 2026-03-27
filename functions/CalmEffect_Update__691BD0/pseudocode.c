void __userpurge CalmEffect_Update(ActiveEffect *a1@<ecx>, int a2@<ebx>, char a3@<bpl>, int a4)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // esi
  CombatController *v7; // eax
  bool v8; // bl

  ValueModifierEffect_UpdateEffect(a1, a4);
  target = a1->members.target;
  if ( target )
  {
    ParentActor = MagicTarget_GetParentActor(target);
    if ( ParentActor )
    {
      if ( ((int (__thiscall *)(Actor *, int))ParentActor->vtbl->GetCombatController)(ParentActor, a2) )
      {
        v7 = ParentActor->vtbl->GetCombatController(ParentActor);
        v8 = sub_612C60(v7);
      }
      else
      {
        v8 = 1;
      }
      if ( ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0)
        || ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor)
        || !v8 )
      {
        ActiveEffect_Base_Remove(a1, a3, *(float *)&a4, 0);
      }
    }
  }
}
