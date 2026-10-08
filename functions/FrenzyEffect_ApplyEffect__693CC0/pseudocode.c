Actor *__thiscall FrenzyEffect_ApplyEffect(float *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // edi
  MagicCaster *v4; // ecx
  Actor *result; // eax
  float v6; // [esp+0h] [ebp-8h]

  ValueModifierEffect_Apply(this, v6); /*0x693cc4*/
  v2 = *((MagicTarget **)this + 8); /*0x693cc9*/
  if ( v2 ) /*0x693cce*/
    ParentActor = MagicTarget_GetParentActor(v2); /*0x693cd5*/
  else
    ParentActor = 0; /*0x693cd9*/
  v4 = *((MagicCaster **)this + 9); /*0x693cdb*/
  if ( v4 ) /*0x693ce0*/
    result = MagicCaster_GetParentActor(v4); /*0x693ce2*/
  else
    result = 0; /*0x693ce9*/
  if ( ParentActor ) /*0x693ced*/
  {
    if ( result ) /*0x693cf1*/
    {
      result = (Actor *)((int (__thiscall *)(Actor *, int))ParentActor->vtbl->IsInCombat)(ParentActor, 1); /*0x693cff*/
      if ( (_BYTE)result ) /*0x693d03*/
        *((_BYTE *)this + 0x3C) = 1; /*0x693d05*/
    }
  }
  return result; /*0x693d09*/
}
