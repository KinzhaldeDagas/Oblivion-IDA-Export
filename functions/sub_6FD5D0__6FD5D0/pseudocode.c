char __thiscall sub_6FD5D0(int this, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  char i; // bl
  _DWORD *v5; // esi
  unsigned int j; // edx
  int v7; // eax

  v2 = *(_DWORD *)(this + 0x40); /*0x6fd5d0*/
  if ( !v2 || *(_DWORD *)(this + 0x3C) == a2 || a2 != 0xFFFFFFFF && (a2 <= (int)0xFFFFFFFF || a2 >= v2) ) /*0x6fd5ea*/
    return 0; /*0x6fd654*/
  v3 = 0; /*0x6fd5ee*/
  for ( i = 0; v3 < *(unsigned __int16 *)(this + 0x4E); ++v3 ) /*0x6fd5f2*/
  {
    v5 = *(_DWORD **)(*(_DWORD *)(this + 0x48) + 4 * v3); /*0x6fd603*/
    if ( v5 ) /*0x6fd608*/
    {
      if ( v3 == a2 ) /*0x6fd60c*/
        i = 1; /*0x6fd60e*/
      for ( j = 0; j < v5[2]; ++j ) /*0x6fd612*/
      {
        if ( *(_DWORD *)(*v5 + 4 * j) ) /*0x6fd619*/
        {
          v7 = *(_DWORD *)(*v5 + 4 * j); /*0x6fd624*/
          if ( i ) /*0x6fd626*/
            *(_WORD *)(v7 + 0x18) |= 2u; /*0x6fd628*/
          else
            *(_WORD *)(v7 + 0x18) &= ~2u; /*0x6fd62f*/
        }
      }
    }
  }
  *(_DWORD *)(this + 0x3C) = a2; /*0x6fd64b*/
  return 1; /*0x6fd650*/
}
