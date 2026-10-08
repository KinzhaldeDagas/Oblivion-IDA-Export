void __thiscall NiRotData::~NiRotData(NiRotData *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiRotData::`vftable'; /*0x6d8c68*/
  v2 = *((_DWORD *)this + 3); /*0x6d8c6e*/
  if ( v2 ) /*0x6d8c7b*/
    (*(void (__cdecl **)(int))(4 * *((_DWORD *)this + 4) + 0xB3D2F8))(v2); /*0x6d8c88*/
  NiRefObject_destr(this); /*0x6d8c97*/
}
