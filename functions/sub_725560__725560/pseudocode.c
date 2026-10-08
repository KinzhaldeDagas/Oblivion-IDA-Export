int __thiscall sub_725560(char **this, _DWORD **a2)
{
  NiLight *v3; // eax
  int v4; // esi

  v3 = (NiLight *)FormHeapAlloc(0x114u); /*0x72558a*/
  v4 = (int)v3; /*0x72558f*/
  if ( v3 ) /*0x7255a2*/
  {
    NiLight::NiLight(v3); /*0x7255a6*/
    *(float *)(v4 + 0x108) = 0.0; /*0x7255ad*/
    *(_DWORD *)v4 = &NiPointLight::`vftable'; /*0x7255b3*/
    *(float *)(v4 + 0x10C) = 1.0; /*0x7255bb*/
    *(float *)(v4 + 0x110) = 0.0; /*0x7255c1*/
  }
  else
  {
    v4 = 0; /*0x7255c9*/
  }
  sub_71A5A0(this, v4, a2); /*0x7255db*/
  *(float *)(v4 + 0x108) = *((float *)this + 0x42); /*0x7255e6*/
  *(float *)(v4 + 0x10C) = *((float *)this + 0x43); /*0x7255f4*/
  *(float *)(v4 + 0x110) = *((float *)this + 0x44); /*0x725600*/
  return v4; /*0x725606*/
}
