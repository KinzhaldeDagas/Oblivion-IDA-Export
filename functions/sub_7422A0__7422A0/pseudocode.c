NiLight *__thiscall sub_7422A0(char **this, _DWORD **a2)
{
  NiLight *v3; // eax
  NiLight *v4; // esi

  v3 = (NiLight *)FormHeapAlloc(0x108u);
  v4 = v3;
  if ( v3 )
  {
    NiLight::NiLight(v3);
    v4->vtbl = (NiAVObjectVtbl *)&NiAmbientLight::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_71A5A0(this, (int)v4, a2);
  return v4;
}
