int __cdecl sub_770860(int a1)
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

  v2 = *(unsigned __int8 **)(a1 + 0x10); /*0x77086a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x77086d*/
  v4 = 0; /*0x770870*/
  v16 = 0; /*0x770875*/
  if ( v2 ) /*0x770879*/
  {
    v18 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x7708d8*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x18 - v18) <= 0 ) /*0x7708dc*/
      v19 = *(_WORD *)(a1 + 4) - 0x18; /*0x7708ea*/
    else
      v19 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x7708e1*/
    v17 = 0; /*0x7708f2*/
    if ( *(_WORD *)(a1 + 8) ) /*0x7708ee*/
    {
      do /*0x77096f*/
      {
        v8 = v2; /*0x770907*/
        v9 = (_WORD *)v3; /*0x770909*/
        v15 = 0; /*0x77090b*/
        if ( v19 ) /*0x770913*/
        {
          v10 = v19; /*0x770915*/
          v15 = v19; /*0x77091b*/
          do /*0x770930*/
          {
            *v9++ = *v8++; /*0x770924*/
            --v10; /*0x77092d*/
          }
          while ( v10 ); /*0x770930*/
          v4 = v16; /*0x770932*/
        }
        if ( v15 < v18 ) /*0x770941*/
        {
          v11 = (unsigned __int16)(v18 - v15) >> 1; /*0x77094a*/
          memset(v9, 0, 4 * v11); /*0x77094c*/
          v12 = &v9[2 * v11]; /*0x77094c*/
          for ( i = ((_BYTE)v18 - (_BYTE)v15) & 1; i; --i ) /*0x77094e*/
            *v12++ = 0; /*0x770950*/
        }
        v4 += *(_DWORD *)(a1 + 0x1C); /*0x770957*/
        v2 += *(_DWORD *)(a1 + 0x18); /*0x77095a*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x77095d*/
        v14 = (unsigned __int16)(v17 + 1) < *(_WORD *)(a1 + 8); /*0x770963*/
        v16 = v4; /*0x770967*/
        ++v17; /*0x77096b*/
      }
      while ( v14 ); /*0x77096f*/
    }
    return v4; /*0x77096f*/
  }
  v5 = 0; /*0x77087b*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x770881*/
    return v4; /*0x770973*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x770887*/
  do /*0x7708ab*/
  {
    _memset(v3, 0, v6); /*0x770894*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x770899*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x77089c*/
    ++v5; /*0x77089f*/
    v4 += v6; /*0x7708a5*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) ); /*0x7708ab*/
  return v4; /*0x7708ad*/
}
