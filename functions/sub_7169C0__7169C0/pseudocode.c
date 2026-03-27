NiDefaultAVObjectPalette *__thiscall sub_7169C0(void *this, _DWORD **a2)
{
  NiDefaultAVObjectPalette *v3; // eax
  NiDefaultAVObjectPalette *v4; // esi

  v3 = (NiDefaultAVObjectPalette *)FormHeapAlloc(0x20u);
  v4 = 0;
  if ( v3 )
    v4 = NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(v3, 0);
  sub_733850(this, (int)v4, a2);
  return v4;
}
