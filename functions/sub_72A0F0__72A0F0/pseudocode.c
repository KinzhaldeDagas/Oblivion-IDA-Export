int __thiscall sub_72A0F0(float *this, int a2, float *a3)
{
  int result; // eax
  float v6; // edx
  int v8; // esi
  unsigned int v9; // edx
  float *v10; // ecx
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st7
  double v21; // st6
  double v22; // st5
  float *v23; // ecx
  int v24; // edx
  double v25; // st7
  double v26; // st6
  double v27; // st5
  int v28; // esi
  double v29; // rt0
  double v30; // st7
  double v31; // st6
  double v32; // st5
  unsigned int v33; // edx
  float *v34; // ecx
  __int16 v35; // fps
  bool v36; // c0
  char v37; // c2
  bool v38; // c3
  float *v39; // ecx
  int v40; // edx
  __int16 v41; // fps
  bool v42; // c0
  char v43; // c2
  bool v44; // c3
  float v45; // [esp+8h] [ebp-24h]
  float v46; // [esp+Ch] [ebp-20h]
  float v47; // [esp+10h] [ebp-1Ch]
  float v48; // [esp+14h] [ebp-18h]
  float v49; // [esp+14h] [ebp-18h]
  float v50; // [esp+14h] [ebp-18h]
  float v51; // [esp+14h] [ebp-18h]
  float v52; // [esp+14h] [ebp-18h]
  float v53; // [esp+14h] [ebp-18h]
  float v54; // [esp+14h] [ebp-18h]
  float v55; // [esp+18h] [ebp-14h]
  float v56; // [esp+18h] [ebp-14h]
  float v57; // [esp+18h] [ebp-14h]
  float v58; // [esp+18h] [ebp-14h]
  float v59; // [esp+18h] [ebp-14h]
  float v60; // [esp+18h] [ebp-14h]
  float v61; // [esp+18h] [ebp-14h]
  float v62; // [esp+1Ch] [ebp-10h]
  float v63; // [esp+1Ch] [ebp-10h]
  float v64; // [esp+1Ch] [ebp-10h]
  float v65; // [esp+1Ch] [ebp-10h]
  float v66; // [esp+1Ch] [ebp-10h]
  float v67; // [esp+1Ch] [ebp-10h]
  float v68; // [esp+1Ch] [ebp-10h]
  float v69; // [esp+20h] [ebp-Ch]
  float v70; // [esp+24h] [ebp-8h]
  float v71; // [esp+28h] [ebp-4h]
  float v72; // [esp+30h] [ebp+4h]
  float v73; // [esp+30h] [ebp+4h]
  float v74; // [esp+34h] [ebp+8h]
  float v75; // [esp+34h] [ebp+8h]
  float v76; // [esp+34h] [ebp+8h]
  float v77; // [esp+34h] [ebp+8h]
  float v78; // [esp+34h] [ebp+8h]

  if ( a2 > 0 )
  {
    v48 = *a3;
    v45 = *a3;
    v55 = a3[1];
    v62 = a3[2];
    v46 = v55;
    v47 = v62;
    v8 = 1;
    if ( a2 - 1 >= 4 )
    {
      v9 = ((unsigned int)(a2 - 5) >> 2) + 1;
      v10 = a3 + 5;
      v8 = 4 * v9 + 1;
      do
      {
        v11 = v10[0xFFFFFFFE];
        if ( v48 > v11 )
          v48 = v10[0xFFFFFFFE];
        v12 = v10[0xFFFFFFFF];
        if ( v55 > v12 )
          v55 = v10[0xFFFFFFFF];
        v13 = *v10;
        if ( v62 > v13 )
          v62 = *v10;
        if ( v45 < v11 )
          v45 = v10[0xFFFFFFFE];
        if ( v46 < v12 )
          v46 = v10[0xFFFFFFFF];
        if ( v47 < v13 )
          v47 = *v10;
        v14 = v10[1];
        if ( v48 > v14 )
          v48 = v10[1];
        v15 = v10[2];
        if ( v55 > v15 )
          v55 = v10[2];
        v16 = v10[3];
        if ( v62 > v16 )
          v62 = v10[3];
        if ( v45 < v14 )
          v45 = v10[1];
        if ( v46 < v15 )
          v46 = v10[2];
        if ( v47 < v16 )
          v47 = v10[3];
        v17 = v10[4];
        if ( v48 > v17 )
          v48 = v10[4];
        v18 = v10[5];
        if ( v55 > v18 )
          v55 = v10[5];
        v19 = v10[6];
        if ( v62 > v19 )
          v62 = v10[6];
        if ( v45 < v17 )
          v45 = v10[4];
        if ( v46 < v18 )
          v46 = v10[5];
        if ( v47 < v19 )
          v47 = v10[6];
        v20 = v10[7];
        if ( v48 > v20 )
          v48 = v10[7];
        v21 = v10[8];
        if ( v55 > v21 )
          v55 = v10[8];
        v22 = v10[9];
        if ( v62 > v22 )
          v62 = v10[9];
        if ( v45 < v20 )
          v45 = v10[7];
        if ( v46 < v21 )
          v46 = v10[8];
        if ( v47 < v22 )
          v47 = v10[9];
        v10 += 0xC;
        --v9;
      }
      while ( v9 );
    }
    if ( v8 < a2 )
    {
      v23 = &a3[3 * v8 + 2];
      v24 = a2 - v8;
      do
      {
        v25 = v23[0xFFFFFFFE];
        if ( v48 > v25 )
          v48 = v23[0xFFFFFFFE];
        v26 = v23[0xFFFFFFFF];
        if ( v55 > v26 )
          v55 = v23[0xFFFFFFFF];
        v27 = *v23;
        if ( v62 > v27 )
          v62 = *v23;
        if ( v45 < v25 )
          v45 = v23[0xFFFFFFFE];
        if ( v46 < v26 )
          v46 = v23[0xFFFFFFFF];
        if ( v47 < v27 )
          v47 = *v23;
        v23 += 3;
        --v24;
      }
      while ( v24 );
    }
    v28 = 0;
    v69 = v45 + v48;
    v70 = v46 + v55;
    v71 = v47 + v62;
    v29 = dbl_A2FAA0;
    v49 = v69 * v29;
    *this = v49;
    v56 = v70 * v29;
    result = LODWORD(v56);
    *(this + 1) = v56;
    v63 = v29 * v71;
    *(this + 2) = v63;
    v72 = 0.0;
    if ( a2 >= 4 )
    {
      v30 = *this;
      v31 = *(this + 1);
      v32 = *(this + 2);
      v33 = ((unsigned int)(a2 - 4) >> 2) + 1;
      v34 = a3 + 5;
      v28 = 4 * v33;
      do
      {
        v50 = v34[0xFFFFFFFB] - v30;
        v57 = v34[0xFFFFFFFC] - v31;
        v64 = v34[0xFFFFFFFD] - v32;
        v74 = v57 * v57 + v50 * v50 + v64 * v64;
        if ( v72 < (double)v74 )
          v72 = v57 * v57 + v50 * v50 + v64 * v64;
        v51 = v34[0xFFFFFFFE] - v30;
        v58 = v34[0xFFFFFFFF] - v31;
        v65 = *v34 - v32;
        v75 = v58 * v58 + v51 * v51 + v65 * v65;
        if ( v72 < (double)v75 )
          v72 = v58 * v58 + v51 * v51 + v65 * v65;
        v52 = v34[1] - v30;
        v59 = v34[2] - v31;
        v66 = v34[3] - v32;
        v76 = v59 * v59 + v52 * v52 + v66 * v66;
        if ( v72 < (double)v76 )
          v72 = v59 * v59 + v52 * v52 + v66 * v66;
        v53 = v34[4] - v30;
        v60 = v34[5] - v31;
        v67 = v34[6] - v32;
        v77 = v60 * v60 + v53 * v53 + v67 * v67;
        v36 = v72 < (double)v77;
        v37 = 0;
        v38 = v72 == v77;
        LOWORD(result) = v35;
        if ( v72 < (double)v77 )
          v72 = v60 * v60 + v53 * v53 + v67 * v67;
        v34 += 0xC;
        --v33;
      }
      while ( v33 );
    }
    if ( v28 < a2 )
    {
      v39 = &a3[3 * v28 + 2];
      v40 = a2 - v28;
      do
      {
        v54 = v39[0xFFFFFFFE] - *this;
        v61 = v39[0xFFFFFFFF] - *(this + 1);
        v68 = *v39 - *(this + 2);
        v78 = v61 * v61 + v54 * v54 + v68 * v68;
        v42 = v72 < (double)v78;
        v43 = 0;
        v44 = v72 == v78;
        LOWORD(result) = v41;
        if ( v72 < (double)v78 )
          v72 = v61 * v61 + v54 * v54 + v68 * v68;
        v39 += 3;
        --v40;
      }
      while ( v40 );
    }
    v73 = sqrt(v72);
    *(this + 3) = v73;
  }
  else
  {
    result = LODWORD(Vector3_InitValue_);
    *this = Vector3_InitValue_;
    *(this + 1) = *(&Vector3_InitValue_ + 1);
    v6 = dword_B3F9B0;
    *(this + 3) = 0.0;
    *(this + 2) = v6;
  }
  return result;
}
