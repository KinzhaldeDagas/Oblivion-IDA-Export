void __thiscall NiRotData::~NiRotData(NiRotData *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiRotData::`vftable';
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (__cdecl **)(int))(4 * *((_DWORD *)this + 4) + 0xB3D2F8))(v2);
  NiRefObject_destr(this);
}
