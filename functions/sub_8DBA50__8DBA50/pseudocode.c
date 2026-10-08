__int16 __thiscall sub_8DBA50(int this, int a2, int a3, int a4, unsigned int *a5)
{
  unsigned int *v5; // ebp
  float *v7; // eax
  int v8; // ebx
  unsigned __int16 v9; // ax
  unsigned int v10; // edi
  unsigned int *v11; // eax
  bool v12; // cf
  char *v13; // edx
  int v14; // ebx
  int v15; // ebp
  int v16; // eax
  unsigned int v17; // edx
  __m128 *v18; // ecx
  __m128 v19; // xmm0
  int v21; // [esp+10h] [ebp-41Ch]
  int v22; // [esp+14h] [ebp-418h]
  _DWORD v23[4]; // [esp+18h] [ebp-414h] BYREF
  char v24; // [esp+28h] [ebp-404h] BYREF
  int v25; // [esp+428h] [ebp-4h]

  v5 = a5; /*0x8dba58*/
  LOWORD(v7) = *(_WORD *)(this + 0xE); /*0x8dba64*/
  *(_WORD *)(this + 0xE) = (_WORD)v7 - 1; /*0x8dba6f*/
  if ( !(_WORD)v7 ) /*0x8dba73*/
  {
    v8 = a2 + *(_DWORD *)(a2 + 0x10); /*0x8dba8f*/
    v21 = a3 + *(_DWORD *)(a3 + 0x10); /*0x8dba9a*/
    v9 = *(_WORD *)(v21 + 0x8E); /*0x8dba9e*/
    v22 = v8; /*0x8dbaa8*/
    if ( *(_WORD *)(v8 + 0x8E) < v9 ) /*0x8dbaac*/
      v9 = *(_WORD *)(v8 + 0x8E); /*0x8dbaae*/
    *(_WORD *)(this + 0xE) = v9; /*0x8dbab0*/
    v10 = *a5; /*0x8dbab4*/
    v11 = a5 + 0xC; /*0x8dbab7*/
    v12 = (unsigned int)(a5 + 0xC) < *a5; /*0x8dbaba*/
    v23[1] = a3; /*0x8dbabc*/
    v23[0] = a2; /*0x8dbac0*/
    v23[3] = a5; /*0x8dbac4*/
    v25 = this; /*0x8dbac8*/
    v13 = &v24; /*0x8dbacf*/
    if ( v12 ) /*0x8dbad3*/
    {
      v14 = *(_DWORD *)(this + 0x1C); /*0x8dbad5*/
      v15 = *(_DWORD *)(this + 0x48); /*0x8dbad8*/
      do /*0x8dbaf9*/
      {
        *(_DWORD *)v13 = v15 + 0x14 * *(unsigned __int8 *)(*((unsigned __int16 *)v11 + 0x10) + v14); /*0x8dbaef*/
        v11 += 0xC; /*0x8dbaf1*/
        v13 += 4; /*0x8dbaf4*/
      }
      while ( (unsigned int)v11 < v10 ); /*0x8dbaf9*/
      v8 = v22; /*0x8dbafb*/
      v5 = a5; /*0x8dbaff*/
    }
    sub_8DC9B0(*(_DWORD *)(this + 8), *(_DWORD *)(this + 8), (int)v23); /*0x8dbb0f*/
    v16 = *(_DWORD *)(v8 + 0x98); /*0x8dbb14*/
    if ( v16 ) /*0x8dbb1f*/
      sub_8DC130(v16, v8, (int)v23); /*0x8dbb27*/
    LOWORD(v7) = v21; /*0x8dbb2f*/
    if ( *(_DWORD *)(v21 + 0x98) ) /*0x8dbb33*/
      LOWORD(v7) = sub_8DC130(v21, v21, (int)v23); /*0x8dbb43*/
  }
  v17 = *v5; /*0x8dbb4b*/
  v18 = (__m128 *)(v5 + 0xC); /*0x8dbb4e*/
  if ( (unsigned int)(v5 + 0xC) < *v5 ) /*0x8dbb53*/
  {
    do /*0x8dbb7b*/
    {
      v7 = (float *)(*(_DWORD *)(this + 0x30) /*0x8dbb69*/
                   + 0x20 * *(unsigned __int8 *)(v18[2].m128_u16[0] + *(_DWORD *)(this + 0x1C)));
      _mm_stream_ps(v7, *v18); /*0x8dbb6b*/
      v19 = v18[1]; /*0x8dbb6e*/
      v18 += 3; /*0x8dbb72*/
      _mm_stream_ps(v7 + 4, v19); /*0x8dbb77*/
    }
    while ( (unsigned int)v18 < v17 ); /*0x8dbb7b*/
  }
  return (__int16)v7; /*0x8dbb7d*/
}
