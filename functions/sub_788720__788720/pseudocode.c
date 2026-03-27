int __thiscall sub_788720(int this, __int16 a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // esi
  int v7; // eax

  if ( a2 < 0 )
    return 0;
  if ( a2 >= (int)*(unsigned __int16 *)(this + 0x20) )
    return 0;
  v2 = (_DWORD *)(this + 0x38);
  v3 = *(_DWORD *)(this + 0x3C);
  if ( !v3 || a2 >= (unsigned int)((v2[2] - v3) >> 4) )
    _invalid_parameter_noinfo();
  v4 = v2[1] + 0x10 * a2;
  v5 = *(_DWORD *)(v4 + 4);
  if ( !v5 || !((*(_DWORD *)(v4 + 8) - v5) >> 1) )
    return 0;
  v6 = sub_6F10E0(v2, a2);
  v7 = *(_DWORD *)(v6 + 4);
  if ( !v7 || !((*(_DWORD *)(v6 + 8) - v7) >> 1) )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(v6 + 4);
}
