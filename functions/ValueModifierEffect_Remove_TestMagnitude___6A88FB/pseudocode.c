int __usercall ValueModifierEffect_Remove_::TestMagnitude_@<eax>(int a1@<esi>, int a2, float a3)
{
  if ( *(float *)(a1 + 0x18) <= 0.0 )
    return ValueModifierEffect_Remove_::RemoveMod();
  else
    return ValueModifierEffect_Remove_::ExtraForPositiveMagnitude_(a2, a3);
}
