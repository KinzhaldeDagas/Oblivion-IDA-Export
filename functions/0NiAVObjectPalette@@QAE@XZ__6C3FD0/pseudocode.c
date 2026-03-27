NiAVObjectPalette *__thiscall NiAVObjectPalette::NiAVObjectPalette(NiAVObjectPalette *this, char a2)
{
  *(_DWORD *)this = &NiAVObjectPalette::`vftable';
  NiRefObject_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
