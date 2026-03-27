void __thiscall NiUVData::~NiUVData(NiUVData *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiUVData::`vftable';
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (__cdecl **)(int))(4 * *((_DWORD *)this + 4) + 0xB3D2C8))(v2);
  if ( *((_DWORD *)this + 6) )
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 7) + 0xB3D2C8))(*((_DWORD *)this + 6));
  if ( *((_DWORD *)this + 9) )
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 0xA) + 0xB3D2C8))(*((_DWORD *)this + 9));
  if ( *((_DWORD *)this + 0xC) )
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 0xD) + 0xB3D2C8))(*((_DWORD *)this + 0xC));
  NiRefObject_destr(this);
}
