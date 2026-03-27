int __thiscall sub_925A80(const void **this, char a2)
{
  int v3; // edx
  int result; // eax
  _BYTE *v5; // ecx
  int v6; // eax

  v3 = (int)*(this + 1);
  result = v3 - 1;
  if ( v3 - 1 < 0 )
  {
LABEL_5:
    if ( v3 == ((unsigned int)*(this + 2) & 0x3FFFFFFF) )
      sub_8A6EE0(this, 1);
    *((_BYTE *)*(this + 1) + (_DWORD)*this) = a2;
    v6 = (int)*(this + 1) + 1;
    *(this + 1) = (const void *)v6;
    return v6 - 1;
  }
  else
  {
    v5 = *this;
    while ( v5[result] != 0xFF )
    {
      if ( --result < 0 )
        goto LABEL_5;
    }
    v5[result] = a2;
  }
  return result;
}
