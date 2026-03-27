int __usercall ValueModifierEffect_PostLink_::GetCasterActor@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        float a4,
        int a5,
        float a6)
{
  MagicCaster *v6; // ecx

  v6 = *(MagicCaster **)(a1 + 0x24);
  if ( v6 )
    MagicCaster_GetParentActor(v6);
  return ValueModifierEffect_PostLink_::FixupBoundObjEffects(a2, a3, a4, a5, a6);
}
