void __thiscall sub_7A8F30(unsigned int *this, int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  char *v6; // edi
  unsigned int *v7; // [esp+8h] [ebp-8h] BYREF

  v3 = *(this + 1);
  if ( v3 )
    v4 = (int)(*(this + 2) - v3) >> 3;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(*(this + 3) - v3) >> 3 )
  {
    v5 = (_DWORD *)*(this + 2);
    LOBYTE(v7) = 0;
    sub_7A8720(v5, 1, a2);
    *(this + 2) = (unsigned int)(v5 + 2);
  }
  else
  {
    v6 = (char *)*(this + 2);
    if ( v3 > (unsigned int)v6 )
      _invalid_parameter_noinfo();
    sub_7A8D90(this, &v7, this, v6, a2);
  }
}
