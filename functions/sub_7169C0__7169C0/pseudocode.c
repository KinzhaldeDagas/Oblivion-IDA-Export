NiDefaultAVObjectPalette *__thiscall sub_7169C0(void *this, _DWORD **a2)
{
  NiDefaultAVObjectPalette *v3; // eax
  NiDefaultAVObjectPalette *v4; // esi

  v3 = (NiDefaultAVObjectPalette *)FormHeapAlloc(0x20u); /*0x7169e7*/
  v4 = 0; /*0x7169f3*/
  if ( v3 ) /*0x7169fb*/
    v4 = NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(v3, 0); /*0x716a05*/
  sub_733850(this, (int)v4, a2); /*0x716a17*/
  return v4; /*0x716a1e*/
}
