TESPackage *__thiscall CommandEffect_ApplyEffect(int this)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // edi
  MagicCaster *v5; // ecx
  TESPackage *result; // eax

  v3 = *(MagicTarget **)(this + 0x20);
  if ( v3 )
    ParentActor = MagicTarget_GetParentActor(v3);
  else
    ParentActor = 0;
  v5 = *(MagicCaster **)(this + 0x24);
  if ( v5 )
    result = (TESPackage *)MagicCaster_GetParentActor(v5);
  else
    result = 0;
  if ( ParentActor )
  {
    if ( result )
      return CommandEffect_MakeActorLoyal__(ParentActor, (PlayerCharacter *)result);
  }
  return result;
}
