ActiveEffect *__thiscall ReanimateEffect_Clone(float *this)
{
  ActiveEffect *v2; // eax
  float *v3; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x60u); /*0x6a3a27*/
  v3 = 0; /*0x6a3a33*/
  if ( v2 ) /*0x6a3a3b*/
    v3 = (float *)ReanimateEffect_constr( /*0x6a3a50*/
                    v2,
                    *((MagicCaster **)this + 9),
                    *((MagicItem **)this + 2),
                    *((EffectItem **)this + 3));
  (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 0x2C))(this, v3); /*0x6a3a62*/
  v3[0xE] = *(this + 0xE); /*0x6a3a67*/
  v3[0xF] = *(this + 0xF); /*0x6a3a6d*/
  v3[0x10] = *(this + 0x10); /*0x6a3a73*/
  v3[0x11] = *(this + 0x11); /*0x6a3a79*/
  v3[0x12] = *(this + 0x12); /*0x6a3a7f*/
  v3[0x13] = *(this + 0x13); /*0x6a3a88*/
  v3[0x14] = *(this + 0x14); /*0x6a3a8d*/
  v3[0x15] = *(this + 0x15); /*0x6a3a93*/
  v3[0x16] = *(this + 0x16); /*0x6a3a99*/
  v3[0x17] = *(this + 0x17); /*0x6a3a9f*/
  return (ActiveEffect *)v3; /*0x6a3aa4*/
}
