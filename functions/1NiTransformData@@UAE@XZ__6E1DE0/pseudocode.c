void __thiscall NiTransformData::~NiTransformData(NiTransformData *this)
{
  int *v2; // edi

  *(_DWORD *)this = &NiTransformData::`vftable';
  v2 = *((int **)this + 8);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 4) == 4 )
      sub_6BE490(v2);
    (*(void (__cdecl **)(int *))(4 * *((_DWORD *)this + 4) + 0xB3D2F8))(v2);
  }
  if ( *((_DWORD *)this + 9) )
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 5) + 0xB3D2E0))(*((_DWORD *)this + 9));
  if ( *((_DWORD *)this + 0xA) )
    (*(void (__cdecl **)(_DWORD))(4 * *((_DWORD *)this + 6) + 0xB3D2C8))(*((_DWORD *)this + 0xA));
  NiRefObject_destr(this);
}
