int __usercall ValueModifierEffect_Remove_::GetCasterActor@<eax>(int a1@<edi>, int a2@<esi>, int a3, float a4)
{
  MagicCaster *v4; // ecx
  Actor *ParentActor; // eax

  v4 = *(MagicCaster **)(a2 + 0x24); /*0x6a8959*/
  if ( v4 ) /*0x6a895e*/
    ParentActor = MagicCaster_GetParentActor(v4); /*0x6a8960*/
  else
    ParentActor = 0; /*0x6a8967*/
  (*(void (__thiscall **)(int, _DWORD, _DWORD, Actor *))(*(_DWORD *)a1 + 0x2A4))( /*0x6a8980*/
    a1,
    *(_DWORD *)(a2 + 0x38),
    LODWORD(a4),
    ParentActor);
  return ValueModifierEffect_Remove_::RemoveMod();
}
