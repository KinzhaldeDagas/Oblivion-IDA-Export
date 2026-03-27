_DWORD *__thiscall sub_785E90(unsigned int *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  _DWORD *result; // eax
  char *v7; // ebx
  _DWORD *v8; // [esp+8h] [ebp-8h] BYREF

  v3 = *(this + 1);
  if ( v3 )
    v4 = (int)(*(this + 2) - v3) / 0x18;
  else
    v4 = 0;
  if ( !v3 || v4 >= (int)(*(this + 3) - v3) / 0x18 )
  {
    v7 = (char *)*(this + 2);
    if ( v3 > (unsigned int)v7 )
      _invalid_parameter_noinfo();
    sub_7857D0(this, (int)&v8, this, v7, a2);
  }
  v5 = (_DWORD *)*(this + 2);
  LOBYTE(v8) = 0;
  result = sub_7848E0(v8, v5, 1, a2);
  *(this + 2) = (unsigned int)(v5 + 6);
  return result;
}
