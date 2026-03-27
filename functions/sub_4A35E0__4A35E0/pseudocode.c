_DWORD *__thiscall sub_4A35E0(_BYTE *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  sub_4A34C0(this);
  *(_DWORD *)this = &TESRegionDataGrass::`vftable';
  v2 = (_DWORD *)FormHeapAlloc(0x14u);
  if ( v2 )
    v3 = sub_4A5FD0(v2, 1);
  else
    v3 = 0;
  *((_DWORD *)this + 2) = v3;
  return this;
}
