void __thiscall NiTextureEffect::~NiTextureEffect(NiDynamicEffect *this)
{
  int v2; // esi

  this->vtbl = (NiAVObjectVtbl *)&NiTextureEffect::`vftable'; /*0x73bcc9*/
  sub_701480((int)this); /*0x73bcd8*/
  v2 = *((_DWORD *)this + 0x4F); /*0x73bcdd*/
  if ( v2 ) /*0x73bced*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x73bcf3*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x73bd09*/
  }
  NiDynamicEffect::~NiDynamicEffect(this); /*0x73bd15*/
}
