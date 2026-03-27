ActiveEffect *__thiscall ShieldEffect_constr(ActiveEffect *this, int a2, int a3, _DWORD *a4)
{
  ActiveEffect *result; // eax

  ValueModifierEffect_constr(this, a2, a3, (int)a4);
  this->vtbl = (ActiveEffectVtbl *)&ShieldEffect::`vftable';
  result = this;
  if ( *a4 == 0x444C4853 )
  {
    *((_DWORD *)this + 0xF) = 0x48;
  }
  else
  {
    *((_DWORD *)this + 0xE) = a4[5];
    *((_DWORD *)this + 0xF) = 0x2B;
  }
  return result;
}
