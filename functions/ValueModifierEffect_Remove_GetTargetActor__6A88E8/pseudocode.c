int __usercall ValueModifierEffect_Remove_::GetTargetActor@<eax>(int a1@<esi>, int a2, float a3)
{
  MagicTarget *v3; // ecx

  v3 = *(MagicTarget **)(a1 + 0x20); /*0x6a88e8*/
  if ( v3 ) /*0x6a88ee*/
    MagicTarget_GetParentActor(v3); /*0x6a88f0*/
  return ValueModifierEffect_Remove_::TestMagnitude_(a1, a2, a3);
}
