_DWORD *__thiscall sub_796100(_DWORD *this, unsigned __int16 a2, int a3, unsigned __int16 a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ebx
  int v8; // ecx
  unsigned int v9; // ebp
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebp
  int v13; // ebx
  int v14; // ecx
  int v15; // ecx
  _DWORD *result; // eax

  v5 = *(this + 0xF);
  if ( !v5 || a2 >= (unsigned int)((*(this + 0x10) - v5) >> 4) )
    _invalid_parameter_noinfo();
  sub_795990((_DWORD *)(*(this + 0xF) + 0x10 * a2), *((unsigned __int16 *)this + 0x13) + 1, 0);
  v6 = *(this + 0xF);
  if ( !v6 || a2 >= (unsigned int)((*(this + 0x10) - v6) >> 4) )
    _invalid_parameter_noinfo();
  v7 = *(this + 0xF) + 0x10 * a2;
  v8 = *(_DWORD *)(v7 + 4);
  v9 = *((unsigned __int16 *)this + 0x13);
  if ( !v8 || v9 >= (*(_DWORD *)(v7 + 8) - v8) >> 1 )
    _invalid_parameter_noinfo();
  *(_WORD *)(*(_DWORD *)(v7 + 4) + 2 * v9) = a4;
  v10 = *(this + 0x13);
  if ( !v10 || a2 >= (unsigned int)((*(this + 0x14) - v10) >> 4) )
    _invalid_parameter_noinfo();
  sub_7958D0((_DWORD *)(*(this + 0x13) + 0x10 * a2), *((unsigned __int16 *)this + 0x13) + 1, 0);
  v11 = *(this + 0x13);
  if ( !v11 || a2 >= (unsigned int)((*(this + 0x14) - v11) >> 4) )
    _invalid_parameter_noinfo();
  v12 = *((unsigned __int16 *)this + 0x13);
  v13 = *(this + 0x13) + 0x10 * a2;
  v14 = *(_DWORD *)(v13 + 4);
  if ( !v14 || v12 >= (*(_DWORD *)(v13 + 8) - v14) >> 2 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * v12) = a3;
  v15 = *(this + 0xB);
  if ( !v15 || a2 >= (unsigned int)((*(this + 0xC) - v15) >> 2) )
    _invalid_parameter_noinfo();
  result = (_DWORD *)(*(this + 0xB) + 4 * a2);
  *result += a4 - 2;
  return result;
}
