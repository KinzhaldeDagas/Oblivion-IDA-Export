void __thiscall NiFloatData::~NiFloatData(NiFloatData *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiFloatData::`vftable'; /*0x6e3368*/
  v2 = *((_DWORD *)this + 3); /*0x6e336e*/
  if ( v2 ) /*0x6e337b*/
    (*(void (__cdecl **)(int))(4 * *((_DWORD *)this + 4) + 0xB3D2C8))(v2); /*0x6e3388*/
  NiRefObject_destr(this); /*0x6e3397*/
}
