_DWORD *__thiscall sub_4A5060(_BYTE *this, _BYTE *a2)
{
  unsigned int v3; // eax

  sub_4A34E0(this, a2);
  *(_DWORD *)this = &TESRegionDataSound::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2);
  if ( v3 <= 2 && v3 != *((_DWORD *)this + 2) )
    *((_DWORD *)this + 2) = v3;
  return this;
}
