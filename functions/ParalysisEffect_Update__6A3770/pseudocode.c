void __userpurge ParalysisEffect_Update(ActiveEffect *this@<ecx>, char a2@<bpl>, int a3)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // eax

  ValueModifierEffect_UpdateEffect(this, a3); /*0x6a377b*/
  target = this->members.target; /*0x6a3780*/
  if ( target ) /*0x6a3785*/
  {
    ParentActor = MagicTarget_GetParentActor(target); /*0x6a3787*/
    if ( ParentActor ) /*0x6a378e*/
    {
      if ( ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) ) /*0x6a379c*/
        ActiveEffect_Base_Remove(this, a2, *(float *)&a3, 1); /*0x6a37a6*/
    }
  }
}
