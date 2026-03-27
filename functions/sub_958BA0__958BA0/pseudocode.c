_DWORD *__thiscall sub_958BA0(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  int v4; // esi
  int v5; // edx
  int v6; // edx
  _DWORD *v7; // [esp+14h] [ebp+8h]

  result = a2;
  v4 = a3;
  v5 = *(this + 3) - 1;
  if ( a3 )
  {
    v7 = this + v5 + 0x378;
    do
    {
      if ( v5 < 0 )
        break;
      *(_DWORD *)(*a2 + 4 * a2[1]++) = *v7;
      --*(this + 3);
      --v4;
      --v5;
      v7 += 0xFFFFFFFF;
    }
    while ( v4 );
    if ( v4 > 0 )
    {
      do
      {
        v6 = *(this + 4);
        *(this + 4) = v6 + 1;
        *(_DWORD *)(*a2 + 4 * a2[1]) = this + 0x14 * v6 + 0x3DC;
        --v4;
        ++a2[1];
      }
      while ( v4 );
    }
  }
  return result;
}
