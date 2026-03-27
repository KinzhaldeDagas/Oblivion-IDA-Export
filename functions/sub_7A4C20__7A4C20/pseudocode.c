_DWORD *__thiscall sub_7A4C20(int *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int v5; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(this + 2);
  if ( *(this + 1) > v2 )
    _invalid_parameter_noinfo();
  v3 = *(this + 1);
  if ( v3 > *(this + 2) )
    _invalid_parameter_noinfo();
  return sub_7A4B80(this, &v5, (int)this, v3, (int)this, v2);
}
