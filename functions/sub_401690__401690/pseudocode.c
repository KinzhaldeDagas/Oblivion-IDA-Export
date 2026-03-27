unsigned int __thiscall sub_401690(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // edx
  unsigned int result; // eax
  int v7; // esi

  v3 = a3[2];
  v4 = a3[3];
  if ( v3 )
    *(_DWORD *)(v3 + 0xC) = a3[3];
  v5 = a3[3];
  if ( v5 )
    *(_DWORD *)(v5 + 8) = a3[2];
  a3[1] &= ~0x40000000u;
  a3[3] = 0;
  a3[2] = 0;
  if ( a3 == (_DWORD *)*a2 )
    *a2 = v4;
  if ( a3 == (_DWORD *)a2[1] )
    a2[1] = v3;
  result = a3[1] & 0xFFFFFFF;
  if ( result > 0x1000 )
  {
    --*(this + 0xA);
  }
  else
  {
    result = (int)(result - *(this + 1)) / 0x100;
    if ( result != 0xFFFFFFFF )
    {
      v7 = *(this + 0x11);
      --*(_DWORD *)(v7 + 8 * result);
      result = v7 + 8 * result;
    }
    --*(this + 0xA);
  }
  return result;
}
