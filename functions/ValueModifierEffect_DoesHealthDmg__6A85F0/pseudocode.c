signed int __thiscall ValueModifierEffect_DoesHealthDmg(_DWORD *this)
{
  int v1; // eax

  if ( *(this + 0xE) == 8 && (v1 = *(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x58), (v1 & 4) != 0) && (v1 & 2) == 0 )
    return 1;
  else
    return ValueModifierEffect_DoesHealthDmg_::Return_False();
}
