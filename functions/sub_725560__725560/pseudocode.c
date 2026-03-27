int __thiscall sub_725560(char **this, _DWORD **a2)
{
  NiLight *v3; // eax
  int v4; // esi

  v3 = (NiLight *)FormHeapAlloc(0x114u);
  v4 = (int)v3;
  if ( v3 )
  {
    NiLight::NiLight(v3);
    *(float *)(v4 + 0x108) = 0.0;
    *(_DWORD *)v4 = &NiPointLight::`vftable';
    *(float *)(v4 + 0x10C) = 1.0;
    *(float *)(v4 + 0x110) = 0.0;
  }
  else
  {
    v4 = 0;
  }
  sub_71A5A0(this, v4, a2);
  *(float *)(v4 + 0x108) = *((float *)this + 0x42);
  *(float *)(v4 + 0x10C) = *((float *)this + 0x43);
  *(float *)(v4 + 0x110) = *((float *)this + 0x44);
  return v4;
}
