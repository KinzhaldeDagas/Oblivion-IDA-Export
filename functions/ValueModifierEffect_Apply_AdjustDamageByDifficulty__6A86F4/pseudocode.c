int __usercall ValueModifierEffect_Apply_::AdjustDamageByDifficulty@<eax>(float *a1@<esi>, float a2)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // edi
  MagicCaster *v4; // ecx
  Actor *v5; // eax

  v2 = *((MagicTarget **)a1 + 8);
  if ( v2 )
    ParentActor = MagicTarget_GetParentActor(v2);
  else
    ParentActor = 0;
  if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x1C) + 0x58) & 4) == 0 )
    return ValueModifierEffect_Apply_::TestImmediate(a1, a2);
  a1[6] = -a1[6];
  if ( !ParentActor
    || (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x44))(a1) != 8
    || !*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x10) )
  {
    return ValueModifierEffect_Apply_::TestImmediate(a1, a2);
  }
  v4 = *((MagicCaster **)a1 + 9);
  if ( v4 )
    v5 = MagicCaster_GetParentActor(v4);
  else
    v5 = 0;
  a1[6] = Actor_AdjustDmgByDifficulty(ParentActor, a1[6], v5);
  return ValueModifierEffect_Apply_::TestImmediate(a1, a2);
}
