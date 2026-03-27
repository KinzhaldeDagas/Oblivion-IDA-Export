void __thiscall NiPosData::~NiPosData(NiPosData *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiPosData::`vftable';
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (__cdecl **)(int))(4 * *((_DWORD *)this + 4) + 0xB3D2E0))(v2);
  NiRefObject_destr(this);
}
