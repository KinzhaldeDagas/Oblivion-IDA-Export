BoundItemEffect *__thiscall BoundItemEffect::BoundItemEffect(
        BoundItemEffect *this,
        MagicCaster *a2,
        MagicItem *a3,
        EffectItem *a4)
{
  AssociatedItemEffect_constr((ActiveEffect *)this, a2, a3, a4); /*0x68fc74*/
  *((_DWORD *)this + 0xF) = 0; /*0x68fc7d*/
  *(_DWORD *)this = &BoundItemEffect::`vftable'; /*0x68fc80*/
  *((_DWORD *)this + 0x10) = 0; /*0x68fc86*/
  *((_DWORD *)this + 0x11) = 0; /*0x68fc89*/
  *((_DWORD *)this + 0x12) = 0; /*0x68fc8c*/
  *((_DWORD *)this + 0x13) = 0; /*0x68fc8f*/
  *((_DWORD *)this + 0x14) = 0; /*0x68fc92*/
  *((_DWORD *)this + 0x15) = 0; /*0x68fc95*/
  *((_DWORD *)this + 0x16) = 0; /*0x68fc98*/
  *((_DWORD *)this + 0x17) = 0; /*0x68fc9b*/
  *((_DWORD *)this + 0x18) = 0; /*0x68fc9e*/
  *((_DWORD *)this + 0x19) = 0; /*0x68fca1*/
  *((_DWORD *)this + 0x1A) = 0; /*0x68fca4*/
  *((_DWORD *)this + 0x1B) = 0; /*0x68fca7*/
  *((_DWORD *)this + 0x1C) = 0; /*0x68fcaa*/
  *((_DWORD *)this + 0x1D) = 0; /*0x68fcad*/
  *((_DWORD *)this + 0x1E) = 0; /*0x68fcb0*/
  *((_DWORD *)this + 0x1F) = 0; /*0x68fcb3*/
  *((float *)this + 0x20) = 0.0; /*0x68fcb6*/
  *((_BYTE *)this + 0x84) = 0; /*0x68fcbc*/
  *((_BYTE *)this + 0x85) = 0; /*0x68fcc2*/
  *((_BYTE *)this + 0x86) = 0; /*0x68fcc8*/
  *((_BYTE *)this + 0x87) = 0; /*0x68fcce*/
  *((_BYTE *)this + 0x88) = 0; /*0x68fcd4*/
  return this; /*0x68fcdc*/
}
