bool __thiscall sub_74A780(NiPoint3 *this, int a2)
{
  bool result; // al
  unsigned int v4; // ebp
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax

  result = sub_74F160(&this->x, (float *)a2); /*0x74a789*/
  if ( result ) /*0x74a790*/
  {
    v4 = *((unsigned __int16 *)this + 0x2D); /*0x74a79c*/
    if ( v4 == *(unsigned __int16 *)(a2 + 0x5A) ) /*0x74a7a2*/
    {
      v5 = 0; /*0x74a7ad*/
      if ( *((_WORD *)this + 0x2D) ) /*0x74a79c*/
      {
        do /*0x74a7b6*/
        {
          v6 = *(_DWORD *)(*((_DWORD *)this + 0x15) + 4 * v5); /*0x74a7b6*/
          v7 = *(_DWORD *)(*(_DWORD *)(a2 + 0x54) + 4 * v5); /*0x74a7be*/
          if ( v6 ) /*0x74a7c1*/
          {
            if ( !v7 || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2C))(v6, v7) ) /*0x74a7cd*/
              return 0; /*0x74a7d1*/
          }
          else if ( v7 ) /*0x74a7f5*/
          {
            return 0; /*0x74a7f5*/
          }
          ++v5; /*0x74a7d3*/
        }
        while ( v5 < v4 ); /*0x74a7b6*/
      }
      return *((_DWORD *)this + 0x1C) == *(_DWORD *)(a2 + 0x70) /*0x74a80a*/
          && *((_DWORD *)this + 0x1D) == *(_DWORD *)(a2 + 0x74)
          && !NiPoint3__NotEqual(this + 0xA, (const NiPoint3 *)(a2 + 0x78));
    }
    else
    {
      return 0; /*0x74a7a6*/
    }
  }
  return result; /*0x74a792*/
}
