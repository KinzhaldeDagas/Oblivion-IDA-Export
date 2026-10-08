void __userpurge ValueModifierEffect_UpdateEffect_::TestRecoverable(int a1@<esi>, int a2)
{
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x58) & 2) != 0 ) /*0x6a8811*/
    ValueModifierEffect_UpdateEffect_::Done(a2); /*0x6a8811*/
  else
    ValueModifierEffect_UpdateEffect_::GetTargetActor(a1, a2); /*0x6a8812*/
}
