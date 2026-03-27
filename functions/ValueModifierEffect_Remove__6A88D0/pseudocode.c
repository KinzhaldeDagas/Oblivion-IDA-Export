int __thiscall ValueModifierEffect_Remove(_DWORD *this, int a2, float a3)
{
  if ( (*(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x58) & 2) != 0 )
    return ValueModifierEffect_Remove_::GetTargetActor((int)this, a2, a3);
  else
    return ValueModifierEffect_Remove_::Done();
}
