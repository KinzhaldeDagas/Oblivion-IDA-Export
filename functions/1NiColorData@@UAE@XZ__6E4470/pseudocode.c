void __thiscall NiColorData::~NiColorData(NiColorData *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiColorData::`vftable';
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (__cdecl **)(int))(4 * *((_DWORD *)this + 4) + 0xB3D310))(v2);
  NiRefObject_destr(this);
}
