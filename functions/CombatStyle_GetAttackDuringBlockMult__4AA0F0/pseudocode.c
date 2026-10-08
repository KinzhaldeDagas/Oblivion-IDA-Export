double __thiscall CombatStyle_GetAttackDuringBlockMult(_DWORD *this)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x16C))(this, 1) && (v2 = *(this + 0x25)) != 0 ) /*0x4aa10c*/
    return *(float *)(v2 + 0x48); /*0x4aa115*/
  else
    return MEMORY[0xB35720]; /*0x4aa124*/
}
