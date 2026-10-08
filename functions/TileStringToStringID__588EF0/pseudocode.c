int __cdecl TileStringToStringID(unsigned __int8 *a1)
{
  signed __int8 v1; // al
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  const unsigned __int8 *v5; // eax
  int v7; // edi
  _DWORD *v8; // esi
  const unsigned __int8 *v9; // ecx

  if ( !a1 ) /*0x588ef7*/
    return 0; /*0x588ef7*/
  v1 = *a1; /*0x588efd*/
  if ( !*a1 ) /*0x588efd*/
    return 0; /*0x588fba*/
  if ( v1 == 0x26 ) /*0x588f0b*/
  {
    v2 = 0x1B; /*0x588f0d*/
    goto LABEL_5; /*0x588f0d*/
  }
  if ( v1 != 0x5F ) /*0x588f4a*/
  {
    v2 = v1 - 0x40; /*0x588f4f*/
    if ( v2 > 0x20 ) /*0x588f55*/
      v2 -= 0x20; /*0x588f57*/
    if ( (unsigned int)v2 > 0x1A ) /*0x588f5c*/
      v2 = 0; /*0x588f63*/
LABEL_5:
    v3 = (_DWORD *)dword_B3B0B4[4 * v2]; /*0x588f12*/
    if ( v3 ) /*0x588f1d*/
    {
      while ( 1 ) /*0x588f20*/
      {
        v4 = (_DWORD *)v3[2]; /*0x588f20*/
        v5 = (const unsigned __int8 *)v4[2]; /*0x588f26*/
        v3 = (_DWORD *)*v3; /*0x588f2c*/
        if ( *v5 ) /*0x588f29*/
        {
          if ( !_mbsicmp(v5, a1) ) /*0x588f32*/
            break; /*0x588f32*/
        }
        if ( !v3 ) /*0x588f40*/
          return 0; /*0x588f40*/
      }
      ++v4[1]; /*0x588fb0*/
      return *v4; /*0x588fb9*/
    }
    return 0; /*0x588f47*/
  }
  v7 = 0; /*0x588f67*/
  if ( !MEMORY[0xB13BCE] ) /*0x588f70*/
    return 0; /*0x588f70*/
  while ( 1 ) /*0x588f77*/
  {
    v8 = *(_DWORD **)(MEMORY[0xB13BC8] + 4 * v7); /*0x588f77*/
    v9 = (const unsigned __int8 *)v8[2]; /*0x588f7a*/
    if ( *v9 ) /*0x588f7d*/
    {
      if ( !_mbsicmp(v9, a1) ) /*0x588f86*/
        break; /*0x588f86*/
    }
    if ( ++v7 >= (unsigned int)(unsigned __int16)MEMORY[0xB13BCE] ) /*0x588f9e*/
      return 0; /*0x588fa5*/
  }
  ++v8[1]; /*0x588fa6*/
  return *v8; /*0x588f46*/
}
