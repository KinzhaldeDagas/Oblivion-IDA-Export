signed int __thiscall sub_8B0F40(int *this, unsigned int a2, _DWORD *a3)
{
  signed int v3; // edx
  int v4; // esi
  signed int v5; // eax
  int v6; // ecx

  v3 = *(this + 2);
  v4 = *this;
  v5 = v3 & (0x9E3779B1 * (a2 >> 4));
  v6 = *(_DWORD *)(*this + 4 * v5);
  if ( v6 )
  {
    while ( v6 != a2 )
    {
      v5 = v3 & (v5 + 1);
      v6 = *(_DWORD *)(v4 + 4 * v5);
      if ( !v6 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = v3 + 1;
  }
  if ( v5 > v3 )
    return 1;
  *a3 = *(_DWORD *)(v4 + 4 * (v5 + v3) + 4);
  return 0;
}
