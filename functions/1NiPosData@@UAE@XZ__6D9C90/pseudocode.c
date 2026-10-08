void __thiscall NiPosData::~NiPosData(NiPosData *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiPosData::`vftable'; /*0x6d9cb8*/
  v2 = *((_DWORD *)this + 3); /*0x6d9cbe*/
  if ( v2 ) /*0x6d9ccb*/
    (*(void (__cdecl **)(int))(4 * *((_DWORD *)this + 4) + 0xB3D2E0))(v2); /*0x6d9cd8*/
  NiRefObject_destr(this); /*0x6d9ce7*/
}
