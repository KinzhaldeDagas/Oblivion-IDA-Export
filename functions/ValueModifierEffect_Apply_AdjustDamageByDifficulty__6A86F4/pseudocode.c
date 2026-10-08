int __usercall ValueModifierEffect_Apply_::AdjustDamageByDifficulty@<eax>(float *a1@<esi>, float a2)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // edi
  MagicCaster *v4; // ecx
  Actor *v5; // eax

  v2 = *((MagicTarget **)a1 + 8); /*0x6a86f4*/
  if ( v2 ) /*0x6a86fa*/
    ParentActor = MagicTarget_GetParentActor(v2); /*0x6a8701*/
  else
    ParentActor = 0; /*0x6a8705*/
  if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x1C) + 0x58) & 4) == 0 ) /*0x6a8716*/
    return ValueModifierEffect_Apply_::TestImmediate(a1, a2); /*0x6a8716*/
  a1[6] = -a1[6]; /*0x6a871f*/
  if ( !ParentActor /*0x6a8735*/
    || (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x44))(a1) != 8
    || !*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x10) )
  {
    return ValueModifierEffect_Apply_::TestImmediate(a1, a2); /*0x6a8739*/
  }
  v4 = *((MagicCaster **)a1 + 9); /*0x6a873b*/
  if ( v4 ) /*0x6a8740*/
    v5 = MagicCaster_GetParentActor(v4); /*0x6a8742*/
  else
    v5 = 0; /*0x6a8749*/
  a1[6] = Actor_AdjustDmgByDifficulty(ParentActor, a1[6], v5); /*0x6a875a*/
  return ValueModifierEffect_Apply_::TestImmediate(a1, a2);
}
