ActiveEffect *__thiscall LightEffect_Clone(int *this)
{
  ActiveEffect *v2; // eax
  ActiveEffect *v3; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu);
  v3 = 0;
  if ( v2 )
    v3 = LightEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3));
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v3);
  return v3;
}
