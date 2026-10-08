int __cdecl sub_7701E0(int a1)
{
  float *v2; // ebx
  int v3; // ebp
  int v4; // edi
  unsigned int v5; // eax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  _WORD *v11; // edi
  unsigned int v12; // ecx
  char v13; // cf
  _WORD *v14; // edi
  int i; // ecx
  int v16; // [esp+10h] [ebp-18h]
  int v17; // [esp+14h] [ebp-14h]
  unsigned __int16 v18; // [esp+18h] [ebp-10h]
  float *v19; // [esp+1Ch] [ebp-Ch]
  int v20; // [esp+20h] [ebp-8h]
  unsigned __int16 v21; // [esp+24h] [ebp-4h]
  unsigned __int16 v22; // [esp+2Ch] [ebp+4h]

  v2 = *(float **)(a1 + 0x10); /*0x7701ea*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x7701ed*/
  v4 = 0; /*0x7701f1*/
  v16 = 0; /*0x7701f5*/
  v19 = v2; /*0x7701f9*/
  if ( v2 ) /*0x7701fd*/
  {
    v7 = *(_WORD *)(a1 + 4); /*0x770237*/
    v8 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x770249*/
    v18 = v8; /*0x770251*/
    if ( (__int16)(v7 - v8) <= 0 ) /*0x770255*/
    {
      v22 = *(_WORD *)(a1 + 4); /*0x770263*/
      v9 = v7; /*0x770267*/
    }
    else
    {
      v9 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x770257*/
      v22 = v9; /*0x77025a*/
    }
    v20 = 0; /*0x77026d*/
    if ( *(_WORD *)(a1 + 8) ) /*0x770269*/
    {
      do /*0x7702f0*/
      {
        v10 = 0; /*0x770277*/
        v11 = (_WORD *)v3; /*0x77027c*/
        if ( v9 ) /*0x77027e*/
        {
          v17 = v9; /*0x770286*/
          v21 = v9; /*0x77028a*/
          do /*0x7702a5*/
          {
            *v11++ = Double_To_SInt32(*v2++); /*0x770297*/
            --v17; /*0x7702a0*/
          }
          while ( v17 ); /*0x7702a5*/
          v10 = v21; /*0x7702a7*/
          v9 = v22; /*0x7702ab*/
          v2 = v19; /*0x7702af*/
          v8 = v18; /*0x7702b3*/
        }
        if ( v10 < v8 ) /*0x7702ba*/
        {
          v12 = (unsigned __int16)(v8 - v10); /*0x7702be*/
          v13 = v12 & 1; /*0x7702c3*/
          v12 >>= 1; /*0x7702c3*/
          memset(v11, 0, 4 * v12); /*0x7702c5*/
          v14 = &v11[2 * v12]; /*0x7702c5*/
          for ( i = v13; i; --i ) /*0x7702c7*/
            *v14++ = 0; /*0x7702c9*/
          v8 = v18; /*0x7702cc*/
        }
        v16 += *(_DWORD *)(a1 + 0x1C); /*0x7702d3*/
        v2 = (float *)((char *)v2 + *(_DWORD *)(a1 + 0x18)); /*0x7702db*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x7702de*/
        v13 = (unsigned __int16)(v20 + 1) < *(_WORD *)(a1 + 8); /*0x7702e4*/
        v19 = v2; /*0x7702e8*/
        ++v20; /*0x7702ec*/
      }
      while ( v13 ); /*0x7702f0*/
      return v16; /*0x7702f2*/
    }
    return v4; /*0x7702f2*/
  }
  if ( !*(_WORD *)(a1 + 8) ) /*0x770203*/
    return v4; /*0x7702f6*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x770209*/
  do /*0x77022b*/
  {
    _memset(v3, 0, v5); /*0x770214*/
    v5 = *(_DWORD *)(a1 + 0x1C); /*0x770219*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x77021c*/
    v2 = (float *)((char *)v2 + 1); /*0x77021f*/
    v4 += v5; /*0x770225*/
  }
  while ( (unsigned __int16)v2 < *(_WORD *)(a1 + 8) ); /*0x77022b*/
  return v4; /*0x77022f*/
}
