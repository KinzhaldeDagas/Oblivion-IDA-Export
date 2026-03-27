void __userpurge SoulTrapEffect_Update(ActiveEffect *this@<ecx>, char bp0@<bpl>, double a3@<st0>, float a4)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // edi
  MagicCaster *caster; // ecx
  Actor *v10; // esi

  target = this->members.target;
  if ( target )
    ParentActor = MagicTarget_GetParentActor(target);
  else
    ParentActor = 0;
  caster = this->members.caster;
  if ( caster )
    v10 = MagicCaster_GetParentActor(caster);
  else
    v10 = 0;
  if ( !ParentActor
    || ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0)
    || !v10
    || v10->vtbl->super.super.IsDead((TESObjectREFR *)v10, 0) )
  {
    ActiveEffect_Base_Remove(this, bp0, a3, 0);
  }
}
