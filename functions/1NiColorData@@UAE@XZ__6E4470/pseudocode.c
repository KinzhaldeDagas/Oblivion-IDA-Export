void __thiscall NiColorData::~NiColorData(NiColorData *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiColorData::`vftable'; /*0x6e4498*/
  v2 = *((_DWORD *)this + 3); /*0x6e449e*/
  if ( v2 ) /*0x6e44ab*/
    (*(void (__cdecl **)(int))(4 * *((_DWORD *)this + 4) + 0xB3D310))(v2); /*0x6e44b8*/
  NiRefObject_destr(this); /*0x6e44c7*/
}
