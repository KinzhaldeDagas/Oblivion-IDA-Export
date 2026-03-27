void __thiscall sub_956B20(int *this, float a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi

  v2 = *this - 1;
  if ( *this < 4 )
  {
LABEL_11:
    while ( v2 >= 0 )
    {
      v7 = *(this + 2) + 4 * v2;
      if ( !*(_DWORD *)v7 )
        break;
      if ( *(float *)(*(_DWORD *)v7 + 0xC) >= (double)a2 )
        break;
      *(this + 3) = *(_DWORD *)v7;
      *(_DWORD *)v7 = 0;
      --v2;
      --*this;
    }
  }
  else
  {
    while ( 1 )
    {
      v3 = *(this + 2) + 4 * v2;
      if ( !*(_DWORD *)v3 )
        break;
      if ( *(float *)(*(_DWORD *)v3 + 0xC) >= (double)a2 )
        break;
      *(this + 3) = *(_DWORD *)v3;
      *(_DWORD *)v3 = 0;
      --*this;
      v4 = *(this + 2) + 4 * v2 - 4;
      if ( !*(_DWORD *)v4 )
        break;
      if ( *(float *)(*(_DWORD *)v4 + 0xC) >= (double)a2 )
        break;
      *(this + 3) = *(_DWORD *)v4;
      *(_DWORD *)v4 = 0;
      --*this;
      v5 = *(this + 2) + 4 * v2 - 8;
      if ( !*(_DWORD *)v5 )
        break;
      if ( *(float *)(*(_DWORD *)v5 + 0xC) >= (double)a2 )
        break;
      *(this + 3) = *(_DWORD *)v5;
      *(_DWORD *)v5 = 0;
      --*this;
      v6 = *(this + 2) + 4 * v2 - 0xC;
      if ( !*(_DWORD *)v6 || *(float *)(*(_DWORD *)v6 + 0xC) >= (double)a2 )
        break;
      *(this + 3) = *(_DWORD *)v6;
      *(_DWORD *)v6 = 0;
      v2 -= 4;
      --*this;
      if ( v2 < 3 )
        goto LABEL_11;
    }
  }
}
