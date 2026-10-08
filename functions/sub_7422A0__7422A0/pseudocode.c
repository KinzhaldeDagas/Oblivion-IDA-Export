NiLight *__thiscall sub_7422A0(char **this, _DWORD **a2)
{
  NiLight *v3; // eax
  NiLight *v4; // esi

  v3 = (NiLight *)FormHeapAlloc(0x108u); /*0x7422ca*/
  v4 = v3; /*0x7422cf*/
  if ( v3 ) /*0x7422e2*/
  {
    NiLight::NiLight(v3); /*0x7422e6*/
    v4->vtbl = (NiAVObjectVtbl *)&NiAmbientLight::`vftable'; /*0x7422eb*/
  }
  else
  {
    v4 = 0; /*0x7422f3*/
  }
  sub_71A5A0(this, (int)v4, a2); /*0x742305*/
  return v4; /*0x74230c*/
}
