double __userpurge SoulTrapEffect_Update@<st0>(ActiveEffect *this@<ecx>, char bp0@<bpl>, double result@<st0>, float a4)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // edi
  MagicCaster *caster; // ecx
  Actor *v8; // esi

  target = this->members.target; /*0x6a4d83*/
  if ( target ) /*0x6a4d8a*/
    ParentActor = MagicTarget_GetParentActor(target); /*0x6a4d91*/
  else
    ParentActor = 0; /*0x6a4d95*/
  caster = this->members.caster; /*0x6a4d97*/
  if ( caster ) /*0x6a4d9c*/
    v8 = MagicCaster_GetParentActor(caster); /*0x6a4da3*/
  else
    v8 = 0; /*0x6a4da7*/
  if ( !ParentActor /*0x6a4dcf*/
    || ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0)
    || !v8
    || v8->vtbl->super.super.IsDead((TESObjectREFR *)v8, 0) )
  {
    return ActiveEffect_Base_Remove(this, bp0, result, 0); /*0x6a4dd9*/
  }
  return result; /*0x6a4dde*/
}
