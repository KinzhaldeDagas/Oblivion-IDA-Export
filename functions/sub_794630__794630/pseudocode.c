int __thiscall sub_794630(_DWORD *this, __int16 a2)
{
  unsigned int i; // ebp
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // esi
  int v13; // ecx

  for ( i = 0; ; ++i )
  {
    if ( a2 <= (__int16)0xFFFFFFFF )
      goto LABEL_8;
    v4 = *(this + 0x13);
    if ( !v4 || a2 >= (unsigned int)((*(this + 0x14) - v4) >> 4) )
      _invalid_parameter_noinfo();
    v5 = *(this + 0x13) + 0x10 * a2;
    v6 = *(_DWORD *)(v5 + 4);
    if ( v6 )
      result = (unsigned __int16)((*(_DWORD *)(v5 + 8) - v6) >> 2);
    else
LABEL_8:
      result = 0;
    if ( (int)i >= (unsigned __int16)result )
      break;
    v8 = *(this + 0x13);
    if ( !v8 || (unsigned __int16)a2 >= (unsigned int)((*(this + 0x14) - v8) >> 4) )
      _invalid_parameter_noinfo();
    v9 = *(this + 0x13) + 0x10 * (unsigned __int16)a2;
    v10 = *(_DWORD *)(v9 + 4);
    if ( !v10 || i >= (*(_DWORD *)(v9 + 8) - v10) >> 2 )
      _invalid_parameter_noinfo();
    FormHeapFree(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4 * i));
    v11 = *(this + 0x13);
    if ( !v11 || (unsigned __int16)a2 >= (unsigned int)((*(this + 0x14) - v11) >> 4) )
      _invalid_parameter_noinfo();
    v12 = *(this + 0x13) + 0x10 * (unsigned __int16)a2;
    v13 = *(_DWORD *)(v12 + 4);
    if ( !v13 || i >= (*(_DWORD *)(v12 + 8) - v13) >> 2 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(*(_DWORD *)(v12 + 4) + 4 * i) = 0;
  }
  return result;
}
