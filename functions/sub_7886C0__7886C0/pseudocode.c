int __thiscall sub_7886C0(_DWORD *this, __int16 a2)
{
  int v3; // ecx
  int v4; // esi
  int result; // eax

  if ( a2 <= (__int16)0xFFFFFFFF )
    return 0;
  v3 = *(this + 0x13);
  if ( !v3 || a2 >= (unsigned int)((*(this + 0x14) - v3) >> 4) )
    _invalid_parameter_noinfo();
  v4 = *(this + 0x13) + 0x10 * a2;
  result = *(_DWORD *)(v4 + 4);
  if ( result )
    return (unsigned __int16)((*(_DWORD *)(v4 + 8) - result) >> 2);
  return result;
}
