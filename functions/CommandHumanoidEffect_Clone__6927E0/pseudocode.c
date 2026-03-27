ActiveEffect *__thiscall CommandHumanoidEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u);
  if ( v2 )
  {
    CommandEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3));
    v2->vtbl = (ActiveEffectVtbl *)&CommandHumanoidEffect::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2);
  return v2;
}
