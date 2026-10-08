float *__cdecl sub_550A30(float *a1, float **a2, int a3)
{
  float z; // ecx
  float *v6; // esi
  float *v7; // ecx
  int v8; // ebp
  unsigned int v9; // edi
  float v10; // eax
  float *v11; // ecx
  float v12; // eax
  float *v13; // ecx
  float v14; // eax
  float *v15; // ecx
  int v16; // edi
  float *v17; // ecx
  int v18; // edi
  double v19; // rtt
  double v20; // st7
  double v21; // st6
  double v22; // st5
  unsigned int v23; // edx
  float v24; // eax
  float *v25; // ecx
  float v26; // eax
  float *v27; // ecx
  float v28; // eax
  float *v29; // ecx
  int v30; // ebx
  float v31; // [esp+4h] [ebp-34h]
  float v32; // [esp+4h] [ebp-34h]
  float v33; // [esp+4h] [ebp-34h]
  float v34; // [esp+4h] [ebp-34h]
  float v35; // [esp+4h] [ebp-34h]
  float v36; // [esp+8h] [ebp-30h]
  float v37; // [esp+8h] [ebp-30h]
  float v38; // [esp+Ch] [ebp-2Ch]
  float v39; // [esp+Ch] [ebp-2Ch]
  float v40; // [esp+Ch] [ebp-2Ch]
  float v41; // [esp+Ch] [ebp-2Ch]
  float v42; // [esp+Ch] [ebp-2Ch]
  float v43; // [esp+10h] [ebp-28h]
  float v44; // [esp+10h] [ebp-28h]
  float v45; // [esp+10h] [ebp-28h]
  float v46; // [esp+10h] [ebp-28h]
  float v47; // [esp+10h] [ebp-28h]
  float v48; // [esp+14h] [ebp-24h]
  float v49; // [esp+14h] [ebp-24h]
  float v50; // [esp+18h] [ebp-20h]
  float v51; // [esp+18h] [ebp-20h]
  float v52; // [esp+1Ch] [ebp-1Ch]
  float v53; // [esp+1Ch] [ebp-1Ch]
  float v54; // [esp+20h] [ebp-18h]
  float v55; // [esp+20h] [ebp-18h]
  float v56; // [esp+20h] [ebp-18h]
  float v57; // [esp+20h] [ebp-18h]
  float v58; // [esp+20h] [ebp-18h]
  float v59; // [esp+20h] [ebp-18h]
  float v60; // [esp+24h] [ebp-14h]
  float v61; // [esp+24h] [ebp-14h]
  float v62; // [esp+24h] [ebp-14h]
  float v63; // [esp+24h] [ebp-14h]
  float v64; // [esp+24h] [ebp-14h]
  float v65; // [esp+24h] [ebp-14h]
  float v66; // [esp+28h] [ebp-10h]
  float v67; // [esp+28h] [ebp-10h]
  float v68; // [esp+28h] [ebp-10h]
  float v69; // [esp+28h] [ebp-10h]
  float v70; // [esp+28h] [ebp-10h]
  float v71; // [esp+28h] [ebp-10h]
  float v72; // [esp+2Ch] [ebp-Ch]
  float v73; // [esp+30h] [ebp-8h]
  float v74; // [esp+34h] [ebp-4h]
  float v75; // [esp+44h] [ebp+Ch]
  float v76; // [esp+44h] [ebp+Ch]

  if ( a3 > 0 ) /*0x550a3a*/
  {
    v54 = **a2; /*0x550a6c*/
    v60 = (*a2)[1]; /*0x550a73*/
    v66 = (*a2)[2]; /*0x550a7a*/
    v48 = v54; /*0x550a80*/
    v52 = v66; /*0x550a8a*/
    v6 = a2[1]; /*0x550a97*/
    v50 = v60; /*0x550aa0*/
    v7 = *a2; /*0x550aa4*/
    v8 = 1; /*0x550aa7*/
    if ( a3 - 1 >= 4 ) /*0x550aac*/
    {
      v9 = ((unsigned int)(a3 - 5) >> 2) + 1; /*0x550ab8*/
      v8 = 4 * v9 + 1; /*0x550aba*/
      do /*0x550d6f*/
      {
        v36 = *v7; /*0x550ac3*/
        v38 = v7[1]; /*0x550ad4*/
        v43 = v7[2]; /*0x550add*/
        if ( v54 > (double)*v7 ) /*0x550ae6*/
          v54 = v36; /*0x550aea*/
        if ( v60 > (double)v38 ) /*0x550b01*/
          v60 = v38; /*0x550b05*/
        if ( v66 > (double)v43 ) /*0x550b1c*/
          v66 = v43; /*0x550b20*/
        if ( v48 < (double)*v7 ) /*0x550b33*/
          v48 = v36; /*0x550b37*/
        if ( v50 < (double)v38 ) /*0x550b4a*/
          v50 = v38; /*0x550b4c*/
        if ( v52 < (double)v43 ) /*0x550b5f*/
          v52 = v43; /*0x550b61*/
        v10 = *(float *)((char *)v6 + (_DWORD)v7); /*0x550b69*/
        v11 = (float *)((int)v7 + (_DWORD)v6); /*0x550b6c*/
        v39 = v11[1]; /*0x550b7f*/
        v44 = v11[2]; /*0x550b88*/
        if ( v54 > (double)v10 ) /*0x550b91*/
          v54 = v10; /*0x550b95*/
        if ( v60 > (double)v39 ) /*0x550bac*/
          v60 = v39; /*0x550bb0*/
        if ( v66 > (double)v44 ) /*0x550bc7*/
          v66 = v44; /*0x550bcb*/
        if ( v48 < (double)v10 ) /*0x550bde*/
          v48 = v10; /*0x550be2*/
        if ( v50 < (double)v39 ) /*0x550bf5*/
          v50 = v39; /*0x550bf7*/
        if ( v52 < (double)v44 ) /*0x550c0a*/
          v52 = v44; /*0x550c0c*/
        v12 = *(float *)((char *)v6 + (_DWORD)v11); /*0x550c14*/
        v13 = (float *)((int)v11 + (_DWORD)v6); /*0x550c17*/
        v40 = v13[1]; /*0x550c2a*/
        v45 = v13[2]; /*0x550c33*/
        if ( v54 > (double)v12 ) /*0x550c3c*/
          v54 = v12; /*0x550c40*/
        if ( v60 > (double)v40 ) /*0x550c57*/
          v60 = v40; /*0x550c5b*/
        if ( v66 > (double)v45 ) /*0x550c72*/
          v66 = v45; /*0x550c76*/
        if ( v48 < (double)v12 ) /*0x550c89*/
          v48 = v12; /*0x550c8d*/
        if ( v50 < (double)v40 ) /*0x550ca0*/
          v50 = v40; /*0x550ca2*/
        if ( v52 < (double)v45 ) /*0x550cb5*/
          v52 = v45; /*0x550cb7*/
        v14 = *(float *)((char *)v6 + (_DWORD)v13); /*0x550cbf*/
        v15 = (float *)((int)v13 + (_DWORD)v6); /*0x550cc2*/
        v41 = v15[1]; /*0x550cd5*/
        v46 = v15[2]; /*0x550cde*/
        if ( v54 > (double)v14 ) /*0x550ce7*/
          v54 = v14; /*0x550ceb*/
        if ( v60 > (double)v41 ) /*0x550d02*/
          v60 = v41; /*0x550d06*/
        if ( v66 > (double)v46 ) /*0x550d1d*/
          v66 = v46; /*0x550d21*/
        if ( v48 < (double)v14 ) /*0x550d34*/
          v48 = v14; /*0x550d38*/
        if ( v50 < (double)v41 ) /*0x550d4b*/
          v50 = v41; /*0x550d4d*/
        if ( v52 < (double)v46 ) /*0x550d60*/
          v52 = v46; /*0x550d62*/
        v7 = (float *)((int)v15 + (_DWORD)v6); /*0x550d6a*/
        --v9; /*0x550d6c*/
      }
      while ( v9 ); /*0x550d6f*/
    }
    if ( v8 < a3 ) /*0x550d77*/
    {
      v16 = a3 - v8; /*0x550d7f*/
      do /*0x550e2e*/
      {
        v37 = *v7; /*0x550d83*/
        v42 = v7[1]; /*0x550d94*/
        v47 = v7[2]; /*0x550d9d*/
        if ( v54 > (double)*v7 ) /*0x550da6*/
          v54 = v37; /*0x550daa*/
        if ( v60 > (double)v42 ) /*0x550dc1*/
          v60 = v42; /*0x550dc5*/
        if ( v66 > (double)v47 ) /*0x550ddc*/
          v66 = v47; /*0x550de0*/
        if ( v48 < (double)*v7 ) /*0x550df3*/
          v48 = v37; /*0x550df7*/
        if ( v50 < (double)v42 ) /*0x550e0a*/
          v50 = v42; /*0x550e0c*/
        if ( v52 < (double)v47 ) /*0x550e1f*/
          v52 = v47; /*0x550e21*/
        v7 = (float *)((int)v7 + (_DWORD)v6); /*0x550e29*/
        --v16; /*0x550e2b*/
      }
      while ( v16 ); /*0x550e2e*/
    }
    v17 = *a2; /*0x550e38*/
    v18 = 0; /*0x550e41*/
    v72 = v48 + v54; /*0x550e46*/
    v73 = v50 + v60; /*0x550e52*/
    v74 = v52 + v66; /*0x550e5e*/
    v19 = dbl_A2FAA0; /*0x550e6e*/
    v49 = v72 * v19; /*0x550e70*/
    v51 = v73 * v19; /*0x550e7a*/
    v53 = v19 * v74; /*0x550e86*/
    v75 = 0.0; /*0x550e8c*/
    v20 = v53; /*0x550e90*/
    if ( a3 >= 4 ) /*0x550e94*/
    {
      v21 = v49; /*0x550e9a*/
      v22 = v51; /*0x550ea1*/
      v23 = ((unsigned int)(a3 - 4) >> 2) + 1; /*0x550ea8*/
      v18 = 4 * v23; /*0x550ead*/
      do /*0x55106e*/
      {
        v55 = *v17 - v21; /*0x550eca*/
        v61 = v17[1] - v22; /*0x550ed8*/
        v67 = v17[2] - v20; /*0x550ee2*/
        v31 = v61 * v61 + v55 * v55 + v67 * v67; /*0x550f02*/
        if ( v75 < (double)v31 ) /*0x550f15*/
          v75 = v61 * v61 + v55 * v55 + v67 * v67; /*0x550f17*/
        v24 = *(float *)((char *)v6 + (_DWORD)v17); /*0x550f1f*/
        v25 = (float *)((int)v17 + (_DWORD)v6); /*0x550f22*/
        v56 = v24 - v21; /*0x550f38*/
        v62 = v25[1] - v22; /*0x550f46*/
        v68 = v25[2] - v20; /*0x550f50*/
        v32 = v62 * v62 + v56 * v56 + v68 * v68; /*0x550f70*/
        if ( v75 < (double)v32 ) /*0x550f83*/
          v75 = v62 * v62 + v56 * v56 + v68 * v68; /*0x550f85*/
        v26 = *(float *)((char *)v6 + (_DWORD)v25); /*0x550f8d*/
        v27 = (float *)((int)v25 + (_DWORD)v6); /*0x550f90*/
        v57 = v26 - v21; /*0x550fa6*/
        v63 = v27[1] - v22; /*0x550fb4*/
        v69 = v27[2] - v20; /*0x550fbe*/
        v33 = v63 * v63 + v57 * v57 + v69 * v69; /*0x550fde*/
        if ( v75 < (double)v33 ) /*0x550ff1*/
          v75 = v63 * v63 + v57 * v57 + v69 * v69; /*0x550ff3*/
        v28 = *(float *)((char *)v6 + (_DWORD)v27); /*0x550ffb*/
        v29 = (float *)((int)v27 + (_DWORD)v6); /*0x550ffe*/
        v58 = v28 - v21; /*0x551014*/
        v64 = v29[1] - v22; /*0x551022*/
        v70 = v29[2] - v20; /*0x55102c*/
        v34 = v64 * v64 + v58 * v58 + v70 * v70; /*0x55104c*/
        if ( v75 < (double)v34 ) /*0x55105f*/
          v75 = v64 * v64 + v58 * v58 + v70 * v70; /*0x551061*/
        v17 = (float *)((int)v29 + (_DWORD)v6); /*0x551069*/
        --v23; /*0x55106b*/
      }
      while ( v23 ); /*0x55106e*/
    }
    if ( v18 < a3 ) /*0x55107c*/
    {
      v30 = a3 - v18; /*0x551086*/
      do /*0x5510fc*/
      {
        v59 = *v17 - v49; /*0x5510a6*/
        v65 = v17[1] - v51; /*0x5510b0*/
        v71 = v17[2] - v20; /*0x5510ba*/
        v35 = v65 * v65 + v59 * v59 + v71 * v71; /*0x5510da*/
        if ( v75 < (double)v35 ) /*0x5510ed*/
          v75 = v65 * v65 + v59 * v59 + v71 * v71; /*0x5510ef*/
        v17 = (float *)((int)v17 + (_DWORD)v6); /*0x5510f7*/
        --v30; /*0x5510f9*/
      }
      while ( v30 ); /*0x5510fc*/
    }
    *a1 = v49; /*0x551118*/
    a1[1] = v51; /*0x55111a*/
    a1[2] = v53; /*0x55111d*/
    v76 = sqrt(v75); /*0x551125*/
    a1[3] = v76; /*0x55112e*/
    return (float *)LODWORD(v49); /*0x551108*/
  }
  else
  {
    *a1 = g_zeroNiPoint3.x; /*0x550a48*/
    a1[1] = g_zeroNiPoint3.y; /*0x550a50*/
    z = g_zeroNiPoint3.z; /*0x550a53*/
    a1[3] = 0.0; /*0x550a59*/
    a1[2] = z; /*0x550a5c*/
    return a1; /*0x550a44*/
  }
}
