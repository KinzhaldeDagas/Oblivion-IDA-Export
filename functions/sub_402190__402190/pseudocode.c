_DWORD *__stdcall sub_402190(_DWORD *a1)
{
  unsigned int v2; // ebp
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  bool v5; // zf
  int v6; // edi
  unsigned int v7; // edx
  _DWORD *i; // ecx
  int v9; // ebx
  _DWORD *v10; // edx
  int v11; // [esp+0h] [ebp-8h]
  _DWORD *v12; // [esp+4h] [ebp-4h]

  if ( !a1 ) /*0x402199*/
    return 0; /*0x4021a0*/
  v2 = 1; /*0x4021a7*/
  do /*0x402264*/
  {
    v3 = a1; /*0x4021b0*/
    v4 = 0; /*0x4021b4*/
    v5 = a1 == 0; /*0x4021b6*/
    a1 = 0; /*0x4021b8*/
    v12 = 0; /*0x4021bc*/
    v11 = 0; /*0x4021c0*/
    if ( v5 ) /*0x4021c4*/
      goto LABEL_24; /*0x4021c4*/
    do /*0x402252*/
    {
      ++v11; /*0x4021d0*/
      v6 = 0; /*0x4021d5*/
      v7 = 0; /*0x4021d7*/
      for ( i = v3; v7 < v2; ++v7 ) /*0x4021dd*/
      {
        i = (_DWORD *)i[1]; /*0x4021e0*/
        ++v6; /*0x4021e3*/
        if ( !i ) /*0x4021e8*/
          break; /*0x4021e8*/
      }
      v9 = v2; /*0x4021f1*/
      while ( 1 ) /*0x4021f3*/
      {
        if ( v6 > 0 ) /*0x4021f5*/
          goto LABEL_14; /*0x4021f5*/
        if ( v9 <= 0 || !i ) /*0x4021fd*/
          break; /*0x4021fd*/
        if ( !v6 ) /*0x402201*/
        {
          v10 = i; /*0x402203*/
          i = (_DWORD *)i[1]; /*0x402205*/
          --v9; /*0x402208*/
          goto LABEL_19; /*0x40220b*/
        }
LABEL_14:
        if ( v9 && i && i < v3 ) /*0x402217*/
        {
          v10 = i; /*0x402219*/
          i = (_DWORD *)i[1]; /*0x40221b*/
          --v9; /*0x40221e*/
        }
        else
        {
          v10 = v3; /*0x402223*/
          v3 = (_DWORD *)v3[1]; /*0x402225*/
          --v6; /*0x402228*/
        }
LABEL_19:
        if ( v4 ) /*0x40222d*/
        {
          v4[1] = v10; /*0x40222f*/
          *v10 = v4; /*0x402232*/
          v4 = v10; /*0x402234*/
        }
        else
        {
          *v10 = v12; /*0x402240*/
          v4 = v10; /*0x402242*/
          a1 = v10; /*0x402244*/
        }
        v12 = v10; /*0x402236*/
      }
      v3 = i; /*0x402250*/
    }
    while ( i ); /*0x402252*/
LABEL_24:
    v2 *= 2; /*0x402258*/
    v4[1] = 0; /*0x402261*/
  }
  while ( v11 != 1 ); /*0x402264*/
  return a1; /*0x40219d*/
}
