int __usercall ValueModifierEffect_ModifyAV_::GetCasterActor@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  MagicCaster *v7; // ecx
  Actor *ParentActor; // ebx

  v7 = *(MagicCaster **)(a2 + 0x24); /*0x6a851e*/
  if ( !v7 ) /*0x6a8524*/
    return ValueModifierEffect_ModifyAV_::CheckHostility(0, a1, a2, a3, a4, a5, a6, a7); /*0x6a8530*/
  ParentActor = MagicCaster_GetParentActor(v7); /*0x6a852b*/
  return ValueModifierEffect_ModifyAV_::CheckHostility((int)ParentActor, a1, a2, a3, a4, a5, a6, a7);
}
