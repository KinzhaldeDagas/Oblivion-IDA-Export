int __usercall ValueModifierEffect_UpdateEffect_::GetTargetActor@<eax>(int a1@<esi>, int a2)
{
  MagicTarget *v2; // ecx

  v2 = *(MagicTarget **)(a1 + 0x20); /*0x6a8817*/
  if ( v2 ) /*0x6a881d*/
    MagicTarget_GetParentActor(v2); /*0x6a881f*/
  return ValueModifierEffect_UpdateEffect_::TestImmediate(a1, a2);
}
