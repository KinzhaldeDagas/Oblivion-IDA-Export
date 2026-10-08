int __thiscall sub_6FAD00(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x1Cu); /*0x6fad27*/
  v4 = (int)v3; /*0x6fad2c*/
  if ( v3 ) /*0x6fad3f*/
  {
    sub_752BF0(v3); /*0x6fad43*/
    *(float *)(v4 + 0x18) = 1.0; /*0x6fad4a*/
    *(_DWORD *)v4 = &BSWindModifier::`vftable'; /*0x6fad4d*/
    *(_DWORD *)(v4 + 0xC) = 0xFA0; /*0x6fad53*/
  }
  else
  {
    v4 = 0; /*0x6fad5c*/
  }
  sub_752C40(this, v4, a2); /*0x6fad6e*/
  *(float *)(v4 + 0x18) = *((float *)this + 6); /*0x6fad76*/
  return v4; /*0x6fad7b*/
}
