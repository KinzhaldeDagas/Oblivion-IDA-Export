NiAVObjectPalette *__thiscall NiAVObjectPalette::NiAVObjectPalette(NiAVObjectPalette *this, char a2)
{
  *(_DWORD *)this = &NiAVObjectPalette::`vftable'; /*0x6c3fd3*/
  NiRefObject_destr(this); /*0x6c3fd9*/
  if ( (a2 & 1) != 0 ) /*0x6c3fe3*/
    FormHeapFree((unsigned int)this); /*0x6c3fe6*/
  return this; /*0x6c3ff0*/
}
