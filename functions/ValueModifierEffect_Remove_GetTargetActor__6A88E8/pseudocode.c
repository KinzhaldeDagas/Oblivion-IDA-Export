int __usercall ValueModifierEffect_Remove_::GetTargetActor@<eax>(int a1@<esi>, int a2, float a3)
{
  MagicTarget *v3; // ecx

  v3 = *(MagicTarget **)(a1 + 0x20);
  if ( v3 )
    MagicTarget_GetParentActor(v3);
  return ValueModifierEffect_Remove_::TestMagnitude_(a1, a2, a3);
}
