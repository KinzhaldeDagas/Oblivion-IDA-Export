BoundItemEffect *__thiscall BoundItemEffect::BoundItemEffect(
        BoundItemEffect *this,
        MagicCaster *a2,
        MagicItem *a3,
        EffectItem *a4)
{
  AssociatedItemEffect_constr((ActiveEffect *)this, a2, a3, a4);
  *((_DWORD *)this + 0xF) = 0;
  *(_DWORD *)this = &BoundItemEffect::`vftable';
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  *((float *)this + 0x20) = 0.0;
  *((_BYTE *)this + 0x84) = 0;
  *((_BYTE *)this + 0x85) = 0;
  *((_BYTE *)this + 0x86) = 0;
  *((_BYTE *)this + 0x87) = 0;
  *((_BYTE *)this + 0x88) = 0;
  return this;
}
