ActiveEffect *__thiscall DetectLifeEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu);
  if ( v2 )
  {
    ValueModifierEffect_constr(v2, *(this + 9), *(this + 2), *(this + 3));
    v2->vtbl = (ActiveEffectVtbl *)&DetectLifeEffect::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2);
  return v2;
}
