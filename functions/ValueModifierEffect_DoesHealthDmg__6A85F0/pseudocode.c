signed int __thiscall ValueModifierEffect_DoesHealthDmg(_DWORD *this)
{
  int v1; // eax

  if ( *(this + 0xE) == 8 && (v1 = *(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x58), (v1 & 4) != 0) && (v1 & 2) == 0 ) /*0x6a860d*/
    return 1; /*0x6a860f*/
  else
    return ValueModifierEffect_DoesHealthDmg_::Return_False(); /*0x6a85f4*/
}
