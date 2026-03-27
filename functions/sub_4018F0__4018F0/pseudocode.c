unsigned int __thiscall sub_4018F0(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  signed int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  signed int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ecx

  v3 = (a2[1] & 0xFFFFFFFu) / *(this + 1) - 1;
  if ( v3 < *(this + 0xC) )
    v4 = (_DWORD *)(*(this + 0xD) + 8 * v3);
  else
    v4 = this + 0xF;
  sub_401690(this, v4, a2);
  v6 = (a3[1] & 0xFFFFFFFu) / v5[1] - 1;
  if ( v6 < v5[0xC] )
    v7 = (_DWORD *)(v5[0xD] + 8 * v6);
  else
    v7 = v5 + 0xF;
  sub_401690(v5, v7, a3);
  a2[1] = a2[1] & 0xF0000000 | ((a3[1] & 0xFFFFFFF) + (a2[1] & 0xFFFFFFF) + 8);
  if ( a3 == (_DWORD *)v8[9] )
  {
    --v8[7];
    v8[9] = a2;
  }
  else
  {
    *(_DWORD *)((char *)a3 + (a3[1] & 0xFFFFFFF) + 8) = a2;
    --v8[7];
  }
  return sub_4015F0(v8, a2);
}
