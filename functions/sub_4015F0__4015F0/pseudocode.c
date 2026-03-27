unsigned int __thiscall sub_4015F0(_DWORD *this, _DWORD *a2)
{
  unsigned int v2; // eax
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int result; // eax
  int v9; // ecx

  a2[1] |= 0x40000000u;
  v2 = a2[1] & 0xFFFFFFF;
  a2[3] = 0;
  a2[2] = 0;
  v3 = v2 / *(this + 1) - 1;
  if ( v3 < *(this + 0xC) )
    v4 = (_DWORD *)(*(this + 0xD) + 8 * v3);
  else
    v4 = this + 0xF;
  v5 = v4[1];
  if ( v5 )
  {
    a2[2] = v5;
    v6 = *(_DWORD *)(v5 + 0xC);
    a2[3] = v6;
    if ( v6 )
      *(_DWORD *)(v6 + 8) = a2;
    *(_DWORD *)(v5 + 0xC) = a2;
  }
  else
  {
    *v4 = a2;
  }
  v4[1] = a2;
  v7 = ++*(this + 0xA);
  if ( v7 > *(this + 0xB) )
    *(this + 0xB) = v7;
  result = a2[1] & 0xFFFFFFF;
  if ( result <= 0x1000 )
  {
    result = (int)(result - *(this + 1)) / 0x100;
    if ( result != 0xFFFFFFFF )
    {
      v9 = *(this + 0x11);
      ++*(_DWORD *)(v9 + 8 * result);
      return v9 + 8 * result;
    }
  }
  return result;
}
