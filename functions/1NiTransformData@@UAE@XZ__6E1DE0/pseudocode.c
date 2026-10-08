// Oblivion NiTransformData destructor. Destroys rotation, translation, and scale arrays through their numeric-type destructor tables; rotation type 4 first destroys its three nested scalar-axis tracks. Then runs the NiRefObject base destructor.
void __thiscall NiTransformData::~NiTransformData(NiTransformData *this)
{
  int *v2; // edi

  *(_DWORD *)this = &NiTransformData::`vftable'; /*0x6e1e09*/
  v2 = *((int **)this + 8); /*0x6e1e0f*/
  if ( v2 ) /*0x6e1e1f*/
  {
    if ( *((_DWORD *)this + 4) == 4 ) /*0x6e1e24*/
      NiEulerRotKey_DestroyAxisTracks(v2); /*0x6e1e28*/
    (*(void (__cdecl **)(int *))(4 * *((_DWORD *)this + 4) + 0xB3D2F8))(v2); /*0x6e1e38*/
  }
  if ( *((_DWORD *)this + 9) ) /*0x6e1e3d*/
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 5) + 0xB3D2E0))(*((_DWORD *)this + 9)); /*0x6e1e4f*/
  if ( *((_DWORD *)this + 0xA) ) /*0x6e1e54*/
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 6) + 0xB3D2C8))(*((_DWORD *)this + 0xA)); /*0x6e1e66*/
  NiRefObject_destr(this); /*0x6e1e75*/
}
