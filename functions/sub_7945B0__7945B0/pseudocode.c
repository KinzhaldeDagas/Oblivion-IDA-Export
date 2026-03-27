int __thiscall sub_7945B0(_DWORD *this, unsigned __int16 a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  int v8; // eax

  v3 = *(this + 0x13);
  if ( !v3 || a2 >= (unsigned int)((*(this + 0x14) - v3) >> 4) )
    _invalid_parameter_noinfo();
  v4 = *(this + 0x13) + 0x10 * a2;
  v5 = *(_DWORD *)(v4 + 4);
  if ( !v5 || !((*(_DWORD *)(v4 + 8) - v5) >> 2) )
    return 0;
  v6 = *(this + 0x13);
  if ( !v6 || a2 >= (unsigned int)((*(this + 0x14) - v6) >> 4) )
    _invalid_parameter_noinfo();
  v7 = *(this + 0x13) + 0x10 * a2;
  v8 = *(_DWORD *)(v7 + 4);
  if ( !v8 || !((*(_DWORD *)(v7 + 8) - v8) >> 2) )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(v7 + 4);
}
