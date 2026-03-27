char __thiscall sub_705150(_WORD *this, int a2)
{
  unsigned int v4; // ebp
  unsigned int v5; // esi
  float *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebp
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // edx
  int v14; // eax
  float *v15; // [esp-Ch] [ebp-14h]

  if ( !sub_6D7E00(this, a2) || *(this + 0xC) != *(_WORD *)(a2 + 0x18) )
    return 0;
  v4 = (unsigned __int16)*(this + 0x13);
  if ( v4 != *(unsigned __int16 *)(a2 + 0x26) )
    return 0;
  v5 = 0;
  if ( *(this + 0x13) )
  {
    do
    {
      v6 = *(float **)(*((_DWORD *)this + 8) + 4 * v5);
      v7 = *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * v5);
      if ( v6 )
      {
        if ( !v7 )
          return 0;
        v15 = *(float **)(*(_DWORD *)(a2 + 0x20) + 4 * v5);
        if ( v5 == 5 )
        {
          if ( !sub_704300(v6, v15) )
            return 0;
        }
        else if ( !sub_704290(v6, (int)v15) )
        {
          return 0;
        }
      }
      else if ( v7 )
      {
        return 0;
      }
      ++v5;
    }
    while ( v5 < v4 );
  }
  v8 = *((_DWORD *)this + 0xB);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a2 + 0x2C);
    if ( v9 )
    {
      v10 = *(unsigned __int16 *)(v8 + 0xA);
      if ( v10 == *(unsigned __int16 *)(v9 + 0xA) )
      {
        v11 = 0;
        if ( *(_WORD *)(v8 + 0xA) )
        {
          while ( 1 )
          {
            v12 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 0xB) + 4) + 4 * v11);
            v13 = *(_DWORD *)(a2 + 0x2C);
            v14 = *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * v11);
            if ( v12 )
            {
              if ( !v14 || !sub_704380(v12, *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * v11)) )
                return 0;
            }
            else if ( v14 )
            {
              return 0;
            }
            if ( ++v11 >= v10 )
              return 1;
          }
        }
        return 1;
      }
    }
  }
  else if ( !*(_DWORD *)(a2 + 0x2C) )
  {
    return 1;
  }
  return 0;
}
