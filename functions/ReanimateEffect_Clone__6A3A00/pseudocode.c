ActiveEffect *__thiscall ReanimateEffect_Clone(float *this)
{
  ActiveEffect *v2; // eax
  float *v3; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x60u);
  v3 = 0;
  if ( v2 )
    v3 = (float *)ReanimateEffect_constr(
                    v2,
                    *((MagicCaster **)this + 9),
                    *((MagicItem **)this + 2),
                    *((EffectItem **)this + 3));
  (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 0x2C))(this, v3);
  v3[0xE] = *(this + 0xE);
  v3[0xF] = *(this + 0xF);
  v3[0x10] = *(this + 0x10);
  v3[0x11] = *(this + 0x11);
  v3[0x12] = *(this + 0x12);
  v3[0x13] = *(this + 0x13);
  v3[0x14] = *(this + 0x14);
  v3[0x15] = *(this + 0x15);
  v3[0x16] = *(this + 0x16);
  v3[0x17] = *(this + 0x17);
  return (ActiveEffect *)v3;
}
