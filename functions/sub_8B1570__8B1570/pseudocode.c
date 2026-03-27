signed int __thiscall sub_8B1570(int *this, unsigned int a2)
{
  signed int v2; // esi
  signed int v3; // eax
  int v4; // edx

  v2 = *(this + 2);
  v3 = v2 & (0x9E3779B1 * (a2 >> 4));
  v4 = *(_DWORD *)(*this + 4 * v3);
  if ( v4 )
  {
    while ( v4 != a2 )
    {
      v3 = v2 & (v3 + 1);
      v4 = *(_DWORD *)(*this + 4 * v3);
      if ( !v4 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v3 = v2 + 1;
  }
  if ( v3 > v2 )
    return 1;
  sub_8B0FA0(this, v3);
  return 0;
}
