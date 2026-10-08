// Pass226: Vertex-buffer upload helper; low mask bits upload screen positions, UVs, and packed colors.
int *__userpurge sub_777240@<eax>(
        char *this@<ecx>,
        int a2@<ebp>,
        NiGeometryBufferData *a3,
        unsigned __int16 a4,
        float *a5,
        float *a6,
        _DWORD *a7,
        char a8,
        int *a9,
        int a10)
{
  float *v10; // esi
  UInt32 v11; // edi
  UInt32 v12; // ebx
  int v13; // eax
  int *v14; // eax
  unsigned __int16 v15; // bp
  float *v16; // ecx
  int v17; // edx
  int *v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  int v22; // ebp
  _DWORD *v23; // edx
  _DWORD *v24; // eax
  int v25; // ecx
  int v28; // [esp+8h] [ebp-24h]
  float v29; // [esp+Ch] [ebp-20h]
  float v30; // [esp+Ch] [ebp-20h]
  float v31; // [esp+Ch] [ebp-20h]
  float v32; // [esp+Ch] [ebp-20h]
  UInt32 v33; // [esp+10h] [ebp-1Ch]
  _DWORD v34[6]; // [esp+14h] [ebp-18h] BYREF
  int *v35; // [esp+30h] [ebp+4h]
  char v36; // [esp+3Ch] [ebp+10h]

  if ( !a4 || !a5 ) /*0x777258*/
    return a9; /*0x7774ac*/
  v10 = a6; /*0x777260*/
  v11 = 4; /*0x777267*/
  v12 = 0x10; /*0x77726c*/
  if ( a6 ) /*0x777271*/
  {
    v28 = 0x10; /*0x777273*/
    v11 = 0x44; /*0x777277*/
    v12 = 0x14; /*0x77727c*/
  }
  if ( a7 ) /*0x777286*/
  {
    v11 |= 0x100u; /*0x777288*/
    v33 = v12; /*0x77728e*/
    v12 += 8; /*0x777292*/
  }
  sub_7780A0(a3, v11); /*0x77729d*/
  if ( a3->StreamCount ) /*0x7772a2*/
    *a3->VertexStride = v12; /*0x7772ab*/
  v36 = 1; /*0x7772b2*/
  if ( a10 ) /*0x7772b7*/
  {
    v35 = a9; /*0x7772bd*/
    v36 = 0; /*0x7772c1*/
  }
  else
  {
    if ( a9 /*0x7772fd*/
      && (v13 = a9[2]) != 0
      && ((*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v13 + 0x34))(v13, v34), v34[0] == 0x64)
      && v34[5] == v11
      && v34[4] >= v12 * a4 )
    {
      v14 = a9; /*0x7772ff*/
      v35 = a9; /*0x777303*/
    }
    else
    {
      if ( !NiGeometryBufferData::RefreshVBChips(a3, 0) ) /*0x777317*/
        return 0; /*0x77749b*/
      v14 = (int *)sub_761AC0(a3, 0); /*0x777321*/
      v35 = v14; /*0x777326*/
    }
    a10 = NiDX9VertexBufferManager_LockToStaging(this, v14[2], v14[3], __PAIR64__(v14[4], v14[5]), a2); /*0x777343*/
  }
  v15 = a4; /*0x77734c*/
  if ( (a8 & 1) != 0 ) /*0x777351*/
  {
    v16 = (float *)(a10 + 0xC); /*0x777360*/
    v17 = a4; /*0x777363*/
    do /*0x77738a*/
    {
      v16[0xFFFFFFFD] = *a5; /*0x77736e*/
      v16[0xFFFFFFFE] = a5[1]; /*0x777374*/
      v16[0xFFFFFFFF] = 0.0; /*0x777377*/
      *v16 = 1.0; /*0x77737f*/
      v16 = (float *)((char *)v16 + v12); /*0x777381*/
      --v17; /*0x777383*/
      a5 += 2; /*0x777386*/
    }
    while ( v17 ); /*0x77738a*/
  }
  if ( v10 ) /*0x777392*/
  {
    if ( (a8 & 4) != 0 ) /*0x77739d*/
    {
      v18 = (int *)(v28 + a10); /*0x7773ab*/
      v19 = a4; /*0x7773b6*/
      do /*0x77743a*/
      {
        v29 = v10[3] * dbl_A3DDD8; /*0x7773c9*/
        v20 = (int)v29; /*0x7773d7*/
        v30 = *v10 * dbl_A3DDD8; /*0x7773e1*/
        v21 = (int)v30; /*0x7773f0*/
        v31 = v10[1] * dbl_A3DDD8; /*0x7773fa*/
        v22 = (int)v31; /*0x777409*/
        v32 = v10[2] * dbl_A3DDD8; /*0x777413*/
        v10 += 4; /*0x777430*/
        *v18 = (int)v32 | ((v22 | ((v21 | (v20 << 8)) << 8)) << 8); /*0x777433*/
        v18 = (int *)((char *)v18 + v12); /*0x777435*/
        --v19; /*0x777437*/
      }
      while ( v19 ); /*0x77743a*/
      v15 = a4; /*0x77743c*/
    }
  }
  v23 = a7; /*0x777441*/
  if ( a7 ) /*0x777447*/
  {
    if ( (a8 & 2) != 0 ) /*0x77744e*/
    {
      v24 = (_DWORD *)(a10 + v33); /*0x777458*/
      v25 = v15; /*0x77745f*/
      do /*0x777474*/
      {
        *v24 = *v23; /*0x777464*/
        v10 = (float *)v23[1]; /*0x777466*/
        v24[1] = v10; /*0x777469*/
        v24 = (_DWORD *)((char *)v24 + v12); /*0x77746c*/
        v23 += 2; /*0x77746e*/
        --v25; /*0x777471*/
      }
      while ( v25 ); /*0x777474*/
    }
  }
  if ( v36 && !sub_776D80((int)this, (int)v10, v35[2]) ) /*0x777489*/
    return 0; /*0x777490*/
  return v35; /*0x777498*/
}
