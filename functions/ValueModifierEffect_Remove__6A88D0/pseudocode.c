void __thiscall ValueModifierEffect_Remove(_DWORD *this, int a2, float a3)
{
  if ( (*(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x58) & 2) != 0 ) /*0x6a88e2*/
    ValueModifierEffect_Remove_::GetTargetActor((int)this, a2, a3); /*0x6a88e3*/
  else
    ValueModifierEffect_Remove_::Done(); /*0x6a88e2*/
}
