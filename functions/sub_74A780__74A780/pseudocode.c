bool __thiscall sub_74A780(float *this, int a2)
{
  bool result; // al
  unsigned int v4; // ebp
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax

  result = sub_74F160(this, (float *)a2);
  if ( result )
  {
    v4 = *((unsigned __int16 *)this + 0x2D);
    if ( v4 == *(unsigned __int16 *)(a2 + 0x5A) )
    {
      v5 = 0;
      if ( *((_WORD *)this + 0x2D) )
      {
        do
        {
          v6 = *(_DWORD *)(*((_DWORD *)this + 0x15) + 4 * v5);
          v7 = *(_DWORD *)(*(_DWORD *)(a2 + 0x54) + 4 * v5);
          if ( v6 )
          {
            if ( !v7 || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2C))(v6, v7) )
              return 0;
          }
          else if ( v7 )
          {
            return 0;
          }
          ++v5;
        }
        while ( v5 < v4 );
      }
      return *((_DWORD *)this + 0x1C) == *(_DWORD *)(a2 + 0x70)
          && *((_DWORD *)this + 0x1D) == *(_DWORD *)(a2 + 0x74)
          && !sub_8AA390(this + 0x1E, (float *)(a2 + 0x78));
    }
    else
    {
      return 0;
    }
  }
  return result;
}
