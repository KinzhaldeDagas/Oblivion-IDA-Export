double __userpurge CommandEffect_UpdateEffect@<st0>(ActiveEffect *a1@<ecx>, double result@<st0>, char a3@<bpl>, int a4)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // esi
  MagicCaster *caster; // ecx
  Actor *v8; // edi
  PlayerCharacter *v9; // [esp+0h] [ebp-Ch]

  target = a1->members.target;
  if ( target )
    ParentActor = MagicTarget_GetParentActor(target);
  else
    ParentActor = 0;
  caster = a1->members.caster;
  if ( caster )
    v8 = MagicCaster_GetParentActor(caster);
  else
    v8 = 0;
  if ( ParentActor )
  {
    if ( v8 )
    {
      if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, _DWORD, double@<st0>))ParentActor->vtbl->super.super.IsDead)(
             ParentActor,
             0,
             result)
        || ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor) )
      {
        return ActiveEffect_Base_Remove(a1, a3, result, 0);
      }
      else
      {
        sub_6925C0((int)a1, ParentActor, (int)v8, v9);
      }
    }
  }
  return result;
}
