SummonCreatureEffect *__thiscall SummonCreatureEffect_Clone(_DWORD *this)
{
  SummonCreatureEffect *v2; // eax
  SummonCreatureEffect *v3; // edi
  char *v4; // ecx

  v2 = (SummonCreatureEffect *)FormHeapAlloc(0x64u);
  if ( v2 )
    v3 = SummonCreatureEffect::SummonCreatureEffect(
           v2,
           (MagicCaster *)*(this + 9),
           (MagicItem *)*(this + 2),
           (EffectItem *)*(this + 3));
  else
    v3 = 0;
  AssociatedItemEffect_CopyTo(this, v3);
  *((_DWORD *)v3 + 0xF) = *(this + 0xF);
  *((_BYTE *)v3 + 0x40) = *((_BYTE *)this + 0x40);
  *((float *)v3 + 0x11) = *((float *)this + 0x11);
  *((_DWORD *)v3 + 0x12) = *(this + 0x12);
  *((_DWORD *)v3 + 0x13) = *(this + 0x13);
  *((_DWORD *)v3 + 0x14) = *(this + 0x14);
  *((_DWORD *)v3 + 0x15) = *(this + 0x15);
  *((_DWORD *)v3 + 0x16) = *(this + 0x16);
  *((_DWORD *)v3 + 0x17) = *(this + 0x17);
  *((_BYTE *)v3 + 0x60) = *((_BYTE *)this + 0x60);
  if ( *((_BYTE *)this + 0x61) )
  {
    if ( !*((_BYTE *)v3 + 0x61) )
    {
      v4 = (char *)*(this + 2);
      if ( v4 )
        sub_41A610(v4, 0);
    }
  }
  *((_BYTE *)v3 + 0x61) = *((_BYTE *)this + 0x61);
  return v3;
}
