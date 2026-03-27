double __thiscall CombatStyle_GetAttackDuringBlockMult(_DWORD *this)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x16C))(this, 1) && (v2 = *(this + 0x25)) != 0 )
    return *(float *)(v2 + 0x48);
  else
    return fAIDefaultAttackDuringBlockMult;
}
