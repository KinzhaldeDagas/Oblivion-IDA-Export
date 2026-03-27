int __usercall ValueModifierEffect_Remove_::GetCasterActor@<eax>(int a1@<edi>, int a2@<esi>, int a3, float a4)
{
  MagicCaster *v4; // ecx
  Actor *ParentActor; // eax

  v4 = *(MagicCaster **)(a2 + 0x24);
  if ( v4 )
    ParentActor = MagicCaster_GetParentActor(v4);
  else
    ParentActor = 0;
  (*(void (__thiscall **)(int, _DWORD, _DWORD, Actor *))(*(_DWORD *)a1 + 0x2A4))(
    a1,
    *(_DWORD *)(a2 + 0x38),
    LODWORD(a4),
    ParentActor);
  return ValueModifierEffect_Remove_::RemoveMod();
}
