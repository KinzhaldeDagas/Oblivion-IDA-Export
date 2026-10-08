int __cdecl sub_770740(int a1)
{
  unsigned __int8 *v2; // edx
  int v3; // ebx
  int v4; // ebp
  int v5; // edi
  unsigned int v6; // eax
  unsigned __int8 *v8; // eax
  _WORD *v9; // edi
  int v10; // ecx
  int v11; // ecx
  _WORD *v12; // edi
  int i; // ecx
  bool v14; // cf
  unsigned __int16 v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]
  unsigned __int16 v18; // [esp+1Ch] [ebp-4h]
  unsigned __int16 v19; // [esp+24h] [ebp+4h]

  v2 = *(unsigned __int8 **)(a1 + 0x10); /*0x77074a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x77074d*/
  v4 = 0; /*0x770750*/
  v16 = 0; /*0x770755*/
  if ( v2 ) /*0x770759*/
  {
    v18 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x7707b8*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x14 - v18) <= 0 ) /*0x7707bc*/
      v19 = *(_WORD *)(a1 + 4) - 0x14; /*0x7707ca*/
    else
      v19 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x7707c1*/
    v17 = 0; /*0x7707d2*/
    if ( *(_WORD *)(a1 + 8) ) /*0x7707ce*/
    {
      do /*0x77084f*/
      {
        v8 = v2; /*0x7707e7*/
        v9 = (_WORD *)v3; /*0x7707e9*/
        v15 = 0; /*0x7707eb*/
        if ( v19 ) /*0x7707f3*/
        {
          v10 = v19; /*0x7707f5*/
          v15 = v19; /*0x7707fb*/
          do /*0x770810*/
          {
            *v9++ = *v8++; /*0x770804*/
            --v10; /*0x77080d*/
          }
          while ( v10 ); /*0x770810*/
          v4 = v16; /*0x770812*/
        }
        if ( v15 < v18 ) /*0x770821*/
        {
          v11 = (unsigned __int16)(v18 - v15) >> 1; /*0x77082a*/
          memset(v9, 0, 4 * v11); /*0x77082c*/
          v12 = &v9[2 * v11]; /*0x77082c*/
          for ( i = ((_BYTE)v18 - (_BYTE)v15) & 1; i; --i ) /*0x77082e*/
            *v12++ = 0; /*0x770830*/
        }
        v4 += *(_DWORD *)(a1 + 0x1C); /*0x770837*/
        v2 += *(_DWORD *)(a1 + 0x18); /*0x77083a*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x77083d*/
        v14 = (unsigned __int16)(v17 + 1) < *(_WORD *)(a1 + 8); /*0x770843*/
        v16 = v4; /*0x770847*/
        ++v17; /*0x77084b*/
      }
      while ( v14 ); /*0x77084f*/
    }
    return v4; /*0x77084f*/
  }
  v5 = 0; /*0x77075b*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x770761*/
    return v4; /*0x770853*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x770767*/
  do /*0x77078b*/
  {
    _memset(v3, 0, v6); /*0x770774*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x770779*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x77077c*/
    ++v5; /*0x77077f*/
    v4 += v6; /*0x770785*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) ); /*0x77078b*/
  return v4; /*0x77078d*/
}
