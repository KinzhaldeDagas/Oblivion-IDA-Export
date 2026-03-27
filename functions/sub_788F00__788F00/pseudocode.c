int __thiscall sub_788F00(_DWORD *this)
{
  char *v2; // ebx
  _DWORD *v3; // esi
  char *v4; // ebp
  int result; // eax
  char *v6; // esi
  char *v7; // ebx
  char *v8; // ebp
  rsize_t v9; // [esp+0h] [ebp-18h]
  int v10; // [esp+10h] [ebp-8h] BYREF

  v2 = (char *)*(this + 0x40);
  v3 = this + 0x3E;
  if ( *(this + 0x3F) > (unsigned int)v2 )
    _invalid_parameter_noinfo();
  v4 = (char *)v3[1];
  if ( (unsigned int)v4 > v3[2] )
    _invalid_parameter_noinfo();
  result = (int)sub_439050(v3, (int)v2, &v10, (int)v3, v4, (int)v3, v2);
  v6 = (char *)*(this + 0x44);
  if ( *(this + 0x43) > (unsigned int)v6 )
    result = _invalid_parameter_noinfo();
  v7 = (char *)*(this + 0x43);
  if ( (unsigned int)v7 > *(this + 0x44) )
    result = _invalid_parameter_noinfo();
  if ( v7 != v6 )
  {
    result = *(this + 0x44) - (_DWORD)v6;
    v8 = &v7[result];
    if ( result > 0 )
      result = memmove_s(v7, __PAIR64__((unsigned int)v6, result), (const void *)(*(this + 0x44) - (_DWORD)v6), v9);
    *(this + 0x44) = v8;
  }
  return result;
}
