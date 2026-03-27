Actor *__thiscall FrenzyEffect_ApplyEffect(float *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // edi
  MagicCaster *v4; // ecx
  Actor *result; // eax
  float v6; // [esp+0h] [ebp-8h]

  ValueModifierEffect_Apply(this, v6);
  v2 = *((MagicTarget **)this + 8);
  if ( v2 )
    ParentActor = MagicTarget_GetParentActor(v2);
  else
    ParentActor = 0;
  v4 = *((MagicCaster **)this + 9);
  if ( v4 )
    result = MagicCaster_GetParentActor(v4);
  else
    result = 0;
  if ( ParentActor )
  {
    if ( result )
    {
      result = (Actor *)((int (__thiscall *)(Actor *, int))ParentActor->vtbl->IsInCombat)(ParentActor, 1);
      if ( (_BYTE)result )
        *((_BYTE *)this + 0x3C) = 1;
    }
  }
  return result;
}
