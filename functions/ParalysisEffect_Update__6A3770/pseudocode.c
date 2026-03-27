void __userpurge ParalysisEffect_Update(ActiveEffect *this@<ecx>, char a2@<bpl>, int a3)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // eax

  ValueModifierEffect_UpdateEffect(this, a3);
  target = this->members.target;
  if ( target )
  {
    ParentActor = MagicTarget_GetParentActor(target);
    if ( ParentActor )
    {
      if ( ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) )
        ActiveEffect_Base_Remove(this, a2, *(float *)&a3, 1);
    }
  }
}
