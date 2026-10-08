// Pass225/226: NiScreenTexture constructor; allocates 0x20 layout and zeroes records, +0x14 texturing property, +0x18 pending mask, +0x1C renderer buffer cache.
NiScreenTexture *__thiscall NiScreenTexture::NiScreenTexture(NiScreenTexture *this)
{
  NiObject_constr((NiObject *)this); /*0x73de74*/
  *(_DWORD *)this = &NiScreenTexture::`vftable'; /*0x73de7b*/
  *((_DWORD *)this + 2) = 0; /*0x73de81*/
  *((_DWORD *)this + 3) = 0; /*0x73de84*/
  *((_DWORD *)this + 4) = 0; /*0x73de87*/
  *((_DWORD *)this + 5) = 0; /*0x73de8a*/
  *((_WORD *)this + 0xC) = 0;                   // Pass226: Constructor clears NiScreenTexture +0x18 pending update mask. /*0x73de8d*/
  *((_DWORD *)this + 7) = 0; /*0x73de91*/
  return this; /*0x73de96*/
}
