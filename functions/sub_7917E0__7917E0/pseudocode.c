unsigned int __thiscall sub_7917E0(_DWORD *this, unsigned int *a2)
{
  unsigned int v3; // edi
  int i; // ebx
  unsigned int result; // eax
  int v6; // eax
  _DWORD *v7; // [esp+10h] [ebp-4h] BYREF

  v7 = this;
  sub_791770(a2, &v7);
  v3 = 0;
  for ( i = 0; ; i += 0xC )
  {
    result = *(this + 3);
    if ( !result )
      break;
    result = (int)(*(this + 4) - result) / 0xC;
    if ( v3 >= result )
      break;
    v6 = *(this + 3);
    if ( !v6 || v3 >= (*(this + 4) - v6) / 0xC )
      _invalid_parameter_noinfo();
    sub_7917E0(*(_DWORD **)(*(this + 3) + i + 8), a2);
    ++v3;
  }
  return result;
}
