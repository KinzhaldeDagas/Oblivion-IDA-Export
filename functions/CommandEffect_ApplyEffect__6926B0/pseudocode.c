TESPackage *__thiscall CommandEffect_ApplyEffect(_DWORD *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // edi
  MagicCaster *v4; // ecx
  TESPackage *result; // eax

  v2 = (MagicTarget *)*(this + 8); /*0x6926b3*/
  if ( v2 ) /*0x6926b9*/
    ParentActor = MagicTarget_GetParentActor(v2); /*0x6926c0*/
  else
    ParentActor = 0; /*0x6926c4*/
  v4 = (MagicCaster *)*(this + 9); /*0x6926c6*/
  if ( v4 ) /*0x6926cb*/
    result = (TESPackage *)MagicCaster_GetParentActor(v4); /*0x6926cd*/
  else
    result = 0; /*0x6926d4*/
  if ( ParentActor ) /*0x6926d8*/
  {
    if ( result ) /*0x6926dc*/
      return CommandEffect_MakeActorLoyal__(ParentActor, (PlayerCharacter *)result); /*0x6926e0*/
  }
  return result; /*0x6926e8*/
}
