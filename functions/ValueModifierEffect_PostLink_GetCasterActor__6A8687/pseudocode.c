int __usercall ValueModifierEffect_PostLink_::GetCasterActor@<eax>(
        int a1@<esi>,
        int *a2@<edi>,
        int a3,
        int a4,
        float a5,
        int a6,
        float a7)
{
  MagicCaster *v7; // ecx

  v7 = *(MagicCaster **)(a1 + 0x24); /*0x6a8687*/
  if ( v7 ) /*0x6a868e*/
    MagicCaster_GetParentActor(v7); /*0x6a8690*/
  return ValueModifierEffect_PostLink_::FixupBoundObjEffects(a2, (float *)a1, a3);
}
