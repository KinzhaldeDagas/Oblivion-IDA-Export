NiObject *__thiscall sub_7556F0(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x18u); /*0x7556f6*/
  v4 = v3; /*0x7556fb*/
  if ( v3 ) /*0x755702*/
  {
    sub_752BF0(v3); /*0x755706*/
    v4->__vftable = (NiObjectVtbl *)&NiPSysPositionModifier::`vftable'; /*0x755713*/
    sub_752C40(this, (int)v4, a2); /*0x755719*/
    return v4; /*0x75571f*/
  }
  else
  {
    sub_752C40(this, 0, a2); /*0x75572f*/
    return 0; /*0x755735*/
  }
}
