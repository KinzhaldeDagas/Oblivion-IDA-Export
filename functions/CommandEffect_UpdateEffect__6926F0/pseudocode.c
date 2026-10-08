double __userpurge CommandEffect_UpdateEffect@<st0>(ActiveEffect *a1@<ecx>, double result@<st0>, char a3@<bpl>, int a4)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // esi
  MagicCaster *caster; // ecx
  Actor *v8; // edi
  PlayerCharacter *v9; // [esp+0h] [ebp-Ch]

  target = a1->members.target; /*0x6926f3*/
  if ( target ) /*0x6926fa*/
    ParentActor = MagicTarget_GetParentActor(target); /*0x692701*/
  else
    ParentActor = 0; /*0x692705*/
  caster = a1->members.caster; /*0x692707*/
  if ( caster ) /*0x69270c*/
    v8 = MagicCaster_GetParentActor(caster); /*0x692713*/
  else
    v8 = 0; /*0x692717*/
  if ( ParentActor ) /*0x69271b*/
  {
    if ( v8 ) /*0x69271f*/
    {
      if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, _DWORD, double@<st0>))ParentActor->vtbl->super.super.IsDead)( /*0x69273d*/
             ParentActor,
             0,
             result)
        || ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor) )
      {
        return ActiveEffect_Base_Remove(a1, a3, result, 0); /*0x692757*/
      }
      else
      {
        sub_6925C0((int)a1, ParentActor, (int)v8, v9); /*0x692745*/
      }
    }
  }
  return result; /*0x69274d*/
}
