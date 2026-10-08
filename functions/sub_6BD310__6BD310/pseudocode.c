void __cdecl sub_6BD310(int a1, signed int a2, unsigned __int8 a3)
{
  int v3; // ecx
  float *v4; // esi
  float *v5; // ebp
  float *v6; // eax
  double v7; // st7
  unsigned int v8; // eax
  double v9; // st6
  unsigned int v10; // ecx
  int v11; // edx
  float *v12; // ebp
  float *v13; // ebx
  float *v14; // esi
  double v15; // st5
  double v16; // rt0
  double v17; // st6
  double v18; // st7
  double v19; // rt1
  double v20; // st5
  double v21; // st5
  double v22; // st5
  double v23; // rt0
  float *v24; // edi
  unsigned int v25; // ecx
  double v26; // rt1
  double v27; // st5
  double v28; // rt2
  double v29; // st6
  double v30; // st7
  double v31; // rtt
  float v32; // [esp+10h] [ebp-1Ch]
  int v33; // [esp+14h] [ebp-18h]
  float *v34; // [esp+14h] [ebp-18h]
  int v35; // [esp+18h] [ebp-14h]
  float v36[4]; // [esp+1Ch] [ebp-10h] BYREF

  v3 = a2; /*0x6bd310*/
  if ( a2 != 1 ) /*0x6bd324*/
  {
    v4 = (float *)(a3 + a1 + 4); /*0x6bd32b*/
    v5 = (float *)(a1 + 0xC); /*0x6bd32f*/
    v33 = a2 - 1; /*0x6bd332*/
    do /*0x6bd397*/
    {
      v32 = v4[1] * v5[0xFFFFFFFF] + v5[0xFFFFFFFE] * *v4 + v4[2] * *v5 + v4[3] * v5[1]; /*0x6bd353*/
      if ( v32 < (double)*(float *)&SrcStr ) /*0x6bd366*/
      {
        v6 = sub_714CC0(v4, v36); /*0x6bd36f*/
        *v4 = *v6; /*0x6bd376*/
        v4[1] = v6[1]; /*0x6bd37b*/
        v4[2] = v6[2]; /*0x6bd381*/
        v3 = a2; /*0x6bd387*/
        v4[3] = v6[3]; /*0x6bd38b*/
      }
      v4 = (float *)((char *)v4 + a3); /*0x6bd38e*/
      v5 = (float *)((char *)v5 + a3); /*0x6bd390*/
      --v33; /*0x6bd392*/
    }
    while ( v33 ); /*0x6bd397*/
  }
  v7 = kTerrainLODQuadRayDirectionZ; /*0x6bd399*/
  v8 = 0; /*0x6bd39f*/
  v9 = 1.0; /*0x6bd3a4*/
  if ( v3 >= 4 ) /*0x6bd3a6*/
  {
    v34 = (float *)(a3 + a1 + 2 * a3 + 4); /*0x6bd3be*/
    v10 = ((unsigned int)(v3 - 4) >> 2) + 1; /*0x6bd3c2*/
    v11 = 4 * a3; /*0x6bd3c5*/
    v12 = (float *)(a1 + 2 * a3 + 4); /*0x6bd3cc*/
    v13 = (float *)(a3 + a1 + 4); /*0x6bd3d0*/
    v14 = (float *)(a1 + 4); /*0x6bd3db*/
    v35 = 4 * v10; /*0x6bd3de*/
    do /*0x6bd4a0*/
    {
      v15 = *v14; /*0x6bd3e8*/
      if ( v15 >= v7 ) /*0x6bd3f3*/
      {
        if ( v15 > v9 ) /*0x6bd404*/
          *v14 = v9; /*0x6bd406*/
        v19 = v9; /*0x6bd408*/
        v17 = v7; /*0x6bd408*/
        v18 = v19; /*0x6bd408*/
      }
      else
      {
        v16 = v9; /*0x6bd3f7*/
        v17 = v7; /*0x6bd3f7*/
        v18 = v16; /*0x6bd3f7*/
        *v14 = v17; /*0x6bd3f9*/
      }
      v20 = *v13; /*0x6bd410*/
      if ( v20 >= v17 ) /*0x6bd41b*/
      {
        if ( v20 > v18 ) /*0x6bd42a*/
          *v13 = v18; /*0x6bd42e*/
      }
      else
      {
        *v13 = v17; /*0x6bd41f*/
      }
      v21 = *v12; /*0x6bd439*/
      if ( v21 >= v17 ) /*0x6bd444*/
      {
        if ( v21 > v18 ) /*0x6bd454*/
          *v12 = v18; /*0x6bd458*/
      }
      else
      {
        *v12 = v17; /*0x6bd448*/
      }
      v22 = *v34; /*0x6bd467*/
      if ( v22 >= v17 ) /*0x6bd472*/
      {
        if ( v22 > v18 ) /*0x6bd485*/
          *v34 = v18; /*0x6bd48d*/
      }
      else
      {
        *v34 = v17; /*0x6bd47a*/
      }
      v34 = (float *)((char *)v34 + v11); /*0x6bd491*/
      v23 = v17; /*0x6bd495*/
      v9 = v18; /*0x6bd495*/
      v7 = v23; /*0x6bd495*/
      v14 = (float *)((char *)v14 + v11); /*0x6bd497*/
      v13 = (float *)((char *)v13 + v11); /*0x6bd499*/
      v12 = (float *)((char *)v12 + v11); /*0x6bd49b*/
      --v10; /*0x6bd49d*/
    }
    while ( v10 ); /*0x6bd4a0*/
    v3 = a2; /*0x6bd4a6*/
    v8 = v35; /*0x6bd4aa*/
  }
  if ( v8 < v3 ) /*0x6bd4b0*/
  {
    v24 = (float *)(v8 * a3 + a1 + 4); /*0x6bd4bc*/
    v25 = v3 - v8; /*0x6bd4c0*/
    while ( 1 ) /*0x6bd4cc*/
    {
      v27 = *v24; /*0x6bd4cc*/
      if ( v27 >= v7 ) /*0x6bd4d7*/
      {
        if ( v27 > v9 ) /*0x6bd4e8*/
          *v24 = v9; /*0x6bd4ea*/
        v31 = v9; /*0x6bd4ec*/
        v29 = v7; /*0x6bd4ec*/
        v30 = v31; /*0x6bd4ec*/
      }
      else
      {
        v28 = v9; /*0x6bd4db*/
        v29 = v7; /*0x6bd4db*/
        v30 = v28; /*0x6bd4db*/
        *v24 = v29; /*0x6bd4dd*/
      }
      v24 = (float *)((char *)v24 + a3); /*0x6bd4ee*/
      if ( !--v25 ) /*0x6bd4f3*/
        break; /*0x6bd4f3*/
      v26 = v29; /*0x6bd4c4*/
      v9 = v30; /*0x6bd4c4*/
      v7 = v26; /*0x6bd4c4*/
    }
  }
}
