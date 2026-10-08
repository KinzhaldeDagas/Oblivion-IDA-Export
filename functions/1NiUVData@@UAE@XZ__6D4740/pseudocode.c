void __thiscall NiUVData::~NiUVData(NiUVData *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiUVData::`vftable'; /*0x6d4768*/
  v2 = *((_DWORD *)this + 3); /*0x6d476e*/
  if ( v2 ) /*0x6d477b*/
    (*(void (__cdecl **)(int))(4 * *((_DWORD *)this + 4) + 0xB3D2C8))(v2); /*0x6d4788*/
  if ( *((_DWORD *)this + 6) ) /*0x6d478d*/
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 7) + 0xB3D2C8))(*((_DWORD *)this + 6)); /*0x6d479f*/
  if ( *((_DWORD *)this + 9) ) /*0x6d47a4*/
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 0xA) + 0xB3D2C8))(*((_DWORD *)this + 9)); /*0x6d47b6*/
  if ( *((_DWORD *)this + 0xC) ) /*0x6d47bb*/
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 0xD) + 0xB3D2C8))(*((_DWORD *)this + 0xC)); /*0x6d47cd*/
  NiRefObject_destr(this); /*0x6d47dc*/
}
