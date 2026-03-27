__int16 __thiscall sub_45E180(unsigned int **this, int a2)
{
  unsigned int *v2; // esi
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // edx

  v2 = *(this + 0x1E);
  v3 = v2[3];
  v4 = 0;
  if ( !v3 )
  {
LABEL_5:
    v6 = v2[3];
    if ( v3 >= v2[2] )
      sub_452910(v2, v3 + v2[5]);
    if ( v6 < v2[3] )
    {
      if ( a2 )
      {
        v8 = v2[1];
        if ( !*(_DWORD *)(v8 + 4 * v6) )
        {
          ++v2[4];
          *(_DWORD *)(v8 + 4 * v6) = a2;
          LOWORD(v4) = v6;
          return v4;
        }
      }
      else if ( *(_DWORD *)(v2[1] + 4 * v6) )
      {
        --v2[4];
      }
    }
    else
    {
      v2[3] = v6 + 1;
      if ( a2 )
      {
        v7 = v2[1];
        ++v2[4];
        *(_DWORD *)(v7 + 4 * v6) = a2;
        LOWORD(v4) = v6;
        return v4;
      }
    }
    *(_DWORD *)(v2[1] + 4 * v6) = a2;
    LOWORD(v4) = v6;
    return v4;
  }
  v5 = (_DWORD *)v2[1];
  while ( *v5 != a2 )
  {
    ++v4;
    ++v5;
    if ( v4 >= v3 )
      goto LABEL_5;
  }
  return v4;
}
