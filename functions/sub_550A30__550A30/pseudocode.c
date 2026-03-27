float *__cdecl sub_550A30(float *a1, float **a2, int a3)
{
  float v5; // ecx
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

  if ( a3 > 0 )
  {
    v54 = **a2;
    v60 = (*a2)[1];
    v66 = (*a2)[2];
    v48 = v54;
    v52 = v66;
    v6 = a2[1];
    v50 = v60;
    v7 = *a2;
    v8 = 1;
    if ( a3 - 1 >= 4 )
    {
      v9 = ((unsigned int)(a3 - 5) >> 2) + 1;
      v8 = 4 * v9 + 1;
      do
      {
        v36 = *v7;
        v38 = v7[1];
        v43 = v7[2];
        if ( v54 > (double)*v7 )
          v54 = v36;
        if ( v60 > (double)v38 )
          v60 = v38;
        if ( v66 > (double)v43 )
          v66 = v43;
        if ( v48 < (double)*v7 )
          v48 = v36;
        if ( v50 < (double)v38 )
          v50 = v38;
        if ( v52 < (double)v43 )
          v52 = v43;
        v10 = *(float *)((char *)v6 + (_DWORD)v7);
        v11 = (float *)((int)v7 + (_DWORD)v6);
        v39 = v11[1];
        v44 = v11[2];
        if ( v54 > (double)v10 )
          v54 = v10;
        if ( v60 > (double)v39 )
          v60 = v39;
        if ( v66 > (double)v44 )
          v66 = v44;
        if ( v48 < (double)v10 )
          v48 = v10;
        if ( v50 < (double)v39 )
          v50 = v39;
        if ( v52 < (double)v44 )
          v52 = v44;
        v12 = *(float *)((char *)v6 + (_DWORD)v11);
        v13 = (float *)((int)v11 + (_DWORD)v6);
        v40 = v13[1];
        v45 = v13[2];
        if ( v54 > (double)v12 )
          v54 = v12;
        if ( v60 > (double)v40 )
          v60 = v40;
        if ( v66 > (double)v45 )
          v66 = v45;
        if ( v48 < (double)v12 )
          v48 = v12;
        if ( v50 < (double)v40 )
          v50 = v40;
        if ( v52 < (double)v45 )
          v52 = v45;
        v14 = *(float *)((char *)v6 + (_DWORD)v13);
        v15 = (float *)((int)v13 + (_DWORD)v6);
        v41 = v15[1];
        v46 = v15[2];
        if ( v54 > (double)v14 )
          v54 = v14;
        if ( v60 > (double)v41 )
          v60 = v41;
        if ( v66 > (double)v46 )
          v66 = v46;
        if ( v48 < (double)v14 )
          v48 = v14;
        if ( v50 < (double)v41 )
          v50 = v41;
        if ( v52 < (double)v46 )
          v52 = v46;
        v7 = (float *)((int)v15 + (_DWORD)v6);
        --v9;
      }
      while ( v9 );
    }
    if ( v8 < a3 )
    {
      v16 = a3 - v8;
      do
      {
        v37 = *v7;
        v42 = v7[1];
        v47 = v7[2];
        if ( v54 > (double)*v7 )
          v54 = v37;
        if ( v60 > (double)v42 )
          v60 = v42;
        if ( v66 > (double)v47 )
          v66 = v47;
        if ( v48 < (double)*v7 )
          v48 = v37;
        if ( v50 < (double)v42 )
          v50 = v42;
        if ( v52 < (double)v47 )
          v52 = v47;
        v7 = (float *)((int)v7 + (_DWORD)v6);
        --v16;
      }
      while ( v16 );
    }
    v17 = *a2;
    v18 = 0;
    v72 = v48 + v54;
    v73 = v50 + v60;
    v74 = v52 + v66;
    v19 = dbl_A2FAA0;
    v49 = v72 * v19;
    v51 = v73 * v19;
    v53 = v19 * v74;
    v75 = 0.0;
    v20 = v53;
    if ( a3 >= 4 )
    {
      v21 = v49;
      v22 = v51;
      v23 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v18 = 4 * v23;
      do
      {
        v55 = *v17 - v21;
        v61 = v17[1] - v22;
        v67 = v17[2] - v20;
        v31 = v61 * v61 + v55 * v55 + v67 * v67;
        if ( v75 < (double)v31 )
          v75 = v61 * v61 + v55 * v55 + v67 * v67;
        v24 = *(float *)((char *)v6 + (_DWORD)v17);
        v25 = (float *)((int)v17 + (_DWORD)v6);
        v56 = v24 - v21;
        v62 = v25[1] - v22;
        v68 = v25[2] - v20;
        v32 = v62 * v62 + v56 * v56 + v68 * v68;
        if ( v75 < (double)v32 )
          v75 = v62 * v62 + v56 * v56 + v68 * v68;
        v26 = *(float *)((char *)v6 + (_DWORD)v25);
        v27 = (float *)((int)v25 + (_DWORD)v6);
        v57 = v26 - v21;
        v63 = v27[1] - v22;
        v69 = v27[2] - v20;
        v33 = v63 * v63 + v57 * v57 + v69 * v69;
        if ( v75 < (double)v33 )
          v75 = v63 * v63 + v57 * v57 + v69 * v69;
        v28 = *(float *)((char *)v6 + (_DWORD)v27);
        v29 = (float *)((int)v27 + (_DWORD)v6);
        v58 = v28 - v21;
        v64 = v29[1] - v22;
        v70 = v29[2] - v20;
        v34 = v64 * v64 + v58 * v58 + v70 * v70;
        if ( v75 < (double)v34 )
          v75 = v64 * v64 + v58 * v58 + v70 * v70;
        v17 = (float *)((int)v29 + (_DWORD)v6);
        --v23;
      }
      while ( v23 );
    }
    if ( v18 < a3 )
    {
      v30 = a3 - v18;
      do
      {
        v59 = *v17 - v49;
        v65 = v17[1] - v51;
        v71 = v17[2] - v20;
        v35 = v65 * v65 + v59 * v59 + v71 * v71;
        if ( v75 < (double)v35 )
          v75 = v65 * v65 + v59 * v59 + v71 * v71;
        v17 = (float *)((int)v17 + (_DWORD)v6);
        --v30;
      }
      while ( v30 );
    }
    *a1 = v49;
    a1[1] = v51;
    a1[2] = v53;
    v76 = sqrt(v75);
    a1[3] = v76;
    return (float *)LODWORD(v49);
  }
  else
  {
    *a1 = Vector3_InitValue_;
    a1[1] = *(&Vector3_InitValue_ + 1);
    v5 = dword_B3F9B0;
    a1[3] = 0.0;
    a1[2] = v5;
    return a1;
  }
}
