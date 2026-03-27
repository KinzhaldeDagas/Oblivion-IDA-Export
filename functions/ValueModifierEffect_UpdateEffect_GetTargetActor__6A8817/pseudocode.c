int __usercall ValueModifierEffect_UpdateEffect_::GetTargetActor@<eax>(int a1@<esi>, int a2)
{
  MagicTarget *v2; // ecx

  v2 = *(MagicTarget **)(a1 + 0x20);
  if ( v2 )
    MagicTarget_GetParentActor(v2);
  return ValueModifierEffect_UpdateEffect_::TestImmediate(a1, a2);
}
