int __userpurge ValueModifierEffect_UpdateEffect_::TestRecoverable@<eax>(int a1@<esi>, int a2)
{
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x58) & 2) != 0 )
    return ValueModifierEffect_UpdateEffect_::Done(a2);
  else
    return ValueModifierEffect_UpdateEffect_::GetTargetActor(a1, a2);
}
