_DWORD *__thiscall sub_791770(unsigned int *this, _DWORD *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *result; // eax
  void *v7; // edi
  int v8; // [esp+4h] [ebp-8h] BYREF

  v3 = *(this + 1);
  if ( v3 )
    v4 = (int)(*(this + 2) - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(*(this + 3) - v3) >> 2 )
  {
    v5 = (_DWORD *)*(this + 2);
    *v5 = *a2;
    result = v5 + 1;
    *(this + 2) = (unsigned int)result;
  }
  else
  {
    v7 = (void *)*(this + 2);
    if ( v3 > (unsigned int)v7 )
      _invalid_parameter_noinfo();
    return (_DWORD *)sub_7A3620(this, (int)&v8, (int)this, v7, (int)a2);
  }
  return result;
}
