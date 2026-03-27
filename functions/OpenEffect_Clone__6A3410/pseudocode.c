ActiveEffect *__thiscall OpenEffect_Clone(_DWORD *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u);
  if ( v2 )
  {
    ActiveEffect::ActiveEffect(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3));
    v2->vtbl = (ActiveEffectVtbl *)&OpenEffect::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, ActiveEffect *))(*this + 0x2C))(this, v2);
  return v2;
}
