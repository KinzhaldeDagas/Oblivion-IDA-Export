SummonCreatureEffect *__thiscall SummonCreatureEffect_Clone(_DWORD *this)
{
  SummonCreatureEffect *v2; // eax
  SummonCreatureEffect *v3; // edi
  char *v4; // ecx

  v2 = (SummonCreatureEffect *)FormHeapAlloc(0x64u); /*0x6a52d7*/
  if ( v2 ) /*0x6a52ed*/
    v3 = SummonCreatureEffect::SummonCreatureEffect( /*0x6a5302*/
           v2,
           (MagicCaster *)*(this + 9),
           (MagicItem *)*(this + 2),
           (EffectItem *)*(this + 3));
  else
    v3 = 0; /*0x6a5306*/
  AssociatedItemEffect_CopyTo(this, v3); /*0x6a5313*/
  *((_DWORD *)v3 + 0xF) = *(this + 0xF); /*0x6a531b*/
  *((_BYTE *)v3 + 0x40) = *((_BYTE *)this + 0x40); /*0x6a5321*/
  *((float *)v3 + 0x11) = *((float *)this + 0x11); /*0x6a5327*/
  *((_DWORD *)v3 + 0x12) = *(this + 0x12); /*0x6a532d*/
  *((_DWORD *)v3 + 0x13) = *(this + 0x13); /*0x6a5333*/
  *((_DWORD *)v3 + 0x14) = *(this + 0x14); /*0x6a5339*/
  *((_DWORD *)v3 + 0x15) = *(this + 0x15); /*0x6a533f*/
  *((_DWORD *)v3 + 0x16) = *(this + 0x16); /*0x6a5345*/
  *((_DWORD *)v3 + 0x17) = *(this + 0x17); /*0x6a534b*/
  *((_BYTE *)v3 + 0x60) = *((_BYTE *)this + 0x60); /*0x6a5351*/
  if ( *((_BYTE *)this + 0x61) ) /*0x6a5354*/
  {
    if ( !*((_BYTE *)v3 + 0x61) ) /*0x6a535a*/
    {
      v4 = (char *)*(this + 2); /*0x6a5360*/
      if ( v4 ) /*0x6a5365*/
        MagicItem_LoadVFXModels(v4, 0); /*0x6a5369*/
    }
  }
  *((_BYTE *)v3 + 0x61) = *((_BYTE *)this + 0x61); /*0x6a5371*/
  return v3; /*0x6a5376*/
}
