BSShaderPPLightingProperty::TextureEffectData *__thiscall BSShaderPPLightingProperty::TextureEffectData::TextureEffectData(
        BSShaderPPLightingProperty::TextureEffectData *this)
{
  double v2; // st7
  int v3; // edi

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &BSShaderPPLightingProperty::TextureEffectData::`vftable';
  *((_DWORD *)this + 2) = 0;
  v2 = 0.0;
  *((float *)this + 3) = 0.0;
  *((float *)this + 4) = 0.0;
  *((float *)this + 5) = 0.0;
  *((float *)this + 6) = 0.0;
  *((float *)this + 7) = 0.0;
  *((float *)this + 8) = 0.0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 0xA) = 0.0;
  *((float *)this + 0xB) = 0.0;
  *((float *)this + 0xC) = 0.0;
  *((float *)this + 0xD) = 0.0;
  *((float *)this + 0xE) = 0.0;
  *((float *)this + 0xF) = 0.0;
  *((float *)this + 0x10) = 0.0;
  *((float *)this + 0x11) = 0.0;
  *((float *)this + 0x12) = 0.0;
  v3 = *((_DWORD *)this + 2);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    v2 = 0.0;
    *((_DWORD *)this + 2) = 0;
  }
  *((float *)this + 3) = v2;
  *((float *)this + 4) = v2;
  *((float *)this + 5) = v2;
  *((float *)this + 6) = v2;
  *((float *)this + 7) = v2;
  *((float *)this + 8) = v2;
  *((float *)this + 9) = v2;
  *((float *)this + 0xA) = v2;
  *((float *)this + 0xB) = v2;
  *((float *)this + 0xC) = v2;
  *((float *)this + 0xD) = v2;
  *((float *)this + 0xE) = v2;
  *((float *)this + 0xF) = v2;
  *((float *)this + 0x10) = v2;
  *((float *)this + 0x11) = v2;
  *((float *)this + 0x12) = v2;
  *((_DWORD *)this + 0x17) = 2;
  *((float *)this + 0x13) = v2;
  *((_DWORD *)this + 0x18) = 1;
  *((float *)this + 0x14) = v2;
  *((_DWORD *)this + 0x19) = 1;
  *((float *)this + 0x15) = v2;
  *((_DWORD *)this + 0x1A) = 3;
  *((float *)this + 0x16) = v2;
  return this;
}
