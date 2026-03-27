void __thiscall sub_96E980(float *this, unsigned __int16 a2, float *a3)
{
  int v4; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st5
  float *v10; // ecx
  int v11; // edx
  double v12; // st4
  double v13; // st7
  int v14; // eax
  double v15; // st6
  double v16; // st5
  double v17; // st4
  double v18; // st3
  double v19; // st7
  double v20; // st2
  double v21; // st5
  double v22; // st3
  float *v23; // ebp
  int v24; // ecx
  double v25; // st7
  double v26; // st6
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // st4
  double v31; // rt1
  double v32; // rt2
  double v33; // st4
  double v34; // st3
  float v35; // [esp+8h] [ebp-60h]
  float v36; // [esp+Ch] [ebp-5Ch]
  float v37; // [esp+Ch] [ebp-5Ch]
  float v38; // [esp+Ch] [ebp-5Ch]
  float v39; // [esp+Ch] [ebp-5Ch]
  float v40; // [esp+10h] [ebp-58h]
  float v41; // [esp+10h] [ebp-58h]
  float v42; // [esp+14h] [ebp-54h]
  float v43; // [esp+18h] [ebp-50h]
  float v44; // [esp+1Ch] [ebp-4Ch]
  float v45; // [esp+20h] [ebp-48h]
  float v46; // [esp+20h] [ebp-48h]
  float v47; // [esp+24h] [ebp-44h]
  float v48; // [esp+24h] [ebp-44h]
  float v49; // [esp+28h] [ebp-40h]
  float v50; // [esp+28h] [ebp-40h]
  float v51; // [esp+2Ch] [ebp-3Ch]
  float v52; // [esp+2Ch] [ebp-3Ch]
  float v53; // [esp+2Ch] [ebp-3Ch]
  float v54; // [esp+2Ch] [ebp-3Ch]
  float v55; // [esp+30h] [ebp-38h]
  float v56; // [esp+30h] [ebp-38h]
  float v57; // [esp+30h] [ebp-38h]
  float v58; // [esp+30h] [ebp-38h]
  float v59; // [esp+34h] [ebp-34h]
  float v60; // [esp+34h] [ebp-34h]
  float v61; // [esp+34h] [ebp-34h]
  float v62; // [esp+34h] [ebp-34h]
  float v63[3]; // [esp+38h] [ebp-30h] BYREF
  float v64[9]; // [esp+44h] [ebp-24h] BYREF
  float v65; // [esp+6Ch] [ebp+4h]
  float v66; // [esp+6Ch] [ebp+4h]
  float v67; // [esp+6Ch] [ebp+4h]
  float v68; // [esp+6Ch] [ebp+4h]
  float v69; // [esp+6Ch] [ebp+4h]
  float v70; // [esp+6Ch] [ebp+4h]
  float v71; // [esp+6Ch] [ebp+4h]
  float v72; // [esp+6Ch] [ebp+4h]
  float v73; // [esp+6Ch] [ebp+4h]
  float v74; // [esp+6Ch] [ebp+4h]
  float v75; // [esp+6Ch] [ebp+4h]
  float v76; // [esp+6Ch] [ebp+4h]
  float v77; // [esp+6Ch] [ebp+4h]
  float v78; // [esp+70h] [ebp+8h]
  float v79; // [esp+70h] [ebp+8h]

  v4 = *(_DWORD *)a3;
  v36 = *a3;
  v6 = v36;
  v40 = v36;
  v37 = a3[1];
  v7 = v37;
  v78 = v37;
  v8 = a3[2];
  *(_DWORD *)this = v4;
  v38 = v8;
  v9 = v38;
  *(this + 1) = a3[1];
  v35 = v38;
  *(this + 2) = a3[2];
  if ( a2 > 1u )
  {
    v10 = a3 + 5;
    v11 = (unsigned __int16)(a2 - 1);
    do
    {
      *this = v10[0xFFFFFFFE] + *this;
      *(this + 1) = *(this + 1) + v10[0xFFFFFFFF];
      *(this + 2) = *v10 + *(this + 2);
      if ( v40 <= (double)v10[0xFFFFFFFE] )
      {
        if ( v10[0xFFFFFFFE] > v6 )
          v6 = v10[0xFFFFFFFE];
      }
      else
      {
        v40 = v10[0xFFFFFFFE];
      }
      if ( v78 <= (double)v10[0xFFFFFFFF] )
      {
        if ( v10[0xFFFFFFFF] > v7 )
          v7 = v10[0xFFFFFFFF];
      }
      else
      {
        v78 = v10[0xFFFFFFFF];
      }
      if ( v35 <= (double)*v10 )
      {
        if ( *v10 > v9 )
          v9 = *v10;
      }
      else
      {
        v35 = *v10;
      }
      v10 += 3;
      --v11;
    }
    while ( v11 );
  }
  v39 = 1.0 / (double)a2;
  v45 = v39 * *this;
  v47 = *(this + 1) * v39;
  v12 = v39 * *(this + 2);
  *this = v45;
  *(this + 1) = v47;
  v49 = v12;
  *(this + 2) = v49;
  if ( v6 == v40 || v7 == v78 || v9 == v35 )
  {
    *(this + 3) = 1.0;
    *(this + 4) = 0.0;
    *(this + 5) = 0.0;
    *(this + 6) = 0.0;
    *(this + 9) = 0.0;
    *(this + 7) = 1.0;
    v34 = dbl_A2FAA0;
    *(this + 8) = 0.0;
    *(this + 0xA) = 0.0;
    *(this + 0xB) = 1.0;
    v77 = (v6 - v40) * v34;
    v79 = (v7 - v78) * v34;
    v41 = v34 * (v9 - v35);
    if ( v77 <= 0.0 )
      v77 = flt_A2FAAC;
    if ( v79 <= 0.0 )
      v79 = flt_A2FAAC;
    if ( v41 <= 0.0 )
      v41 = flt_A2FAAC;
    *(this + 0xC) = v77;
    *(this + 0xD) = v79;
    *(this + 0xE) = v41;
  }
  else
  {
    qmemcpy(v64, &unk_B3FADC, sizeof(v64));
    if ( a2 )
    {
      v13 = *this;
      v14 = a2;
      v15 = v13 * v13;
      v16 = *(this + 1);
      v17 = v16 * v13;
      v18 = *(this + 2);
      v19 = v13 * v18;
      v20 = v16 * v16;
      v21 = v16 * v18;
      v22 = v18 * v18;
      do
      {
        --v14;
        v64[0] = v64[0] + v15;
        v64[1] = v64[1] + v17;
        v64[2] = v64[2] + v19;
        v64[4] = v64[4] + v20;
        v64[5] = v64[5] + v21;
        v64[8] = v64[8] + v22;
      }
      while ( v14 );
    }
    v64[3] = v64[1];
    v64[6] = v64[2];
    v64[7] = v64[5];
    sub_711AE0(v64, v63, this + 3);
    v42 = *a3 - *this;
    v46 = v42;
    v43 = a3[1] - *(this + 1);
    v48 = v43;
    v44 = a3[2] - *(this + 2);
    v50 = v44;
    if ( a2 > 1u )
    {
      v23 = a3 + 5;
      v24 = (unsigned __int16)(a2 - 1);
      do
      {
        v51 = v23[0xFFFFFFFE] - *this;
        v55 = v23[0xFFFFFFFF] - *(this + 1);
        v59 = *v23 - *(this + 2);
        v25 = v51;
        v26 = v55;
        v65 = *(this + 5) * v59 + *(this + 4) * v55 + v51 * *(this + 3);
        if ( v42 <= (double)v65 )
        {
          if ( v46 < (double)v65 )
            v46 = *(this + 5) * v59 + *(this + 4) * v55 + v51 * *(this + 3);
        }
        else
        {
          v42 = *(this + 5) * v59 + *(this + 4) * v55 + v51 * *(this + 3);
        }
        v66 = *(this + 6) * v25 + v26 * *(this + 7) + *(this + 8) * v59;
        if ( v43 <= (double)v66 )
        {
          if ( v48 < (double)v66 )
            v48 = *(this + 6) * v25 + v26 * *(this + 7) + *(this + 8) * v59;
        }
        else
        {
          v43 = *(this + 6) * v25 + v26 * *(this + 7) + *(this + 8) * v59;
        }
        v67 = v59 * *(this + 0xB) + v26 * *(this + 0xA) + v25 * *(this + 9);
        if ( v44 <= (double)v67 )
        {
          if ( v50 < (double)v67 )
            v50 = v59 * *(this + 0xB) + v26 * *(this + 0xA) + v25 * *(this + 9);
        }
        else
        {
          v44 = v59 * *(this + 0xB) + v26 * *(this + 0xA) + v25 * *(this + 9);
        }
        v23 += 3;
        --v24;
      }
      while ( v24 );
    }
    v27 = dbl_A2FAA0;
    v68 = (v46 + v42) * v27;
    v52 = *(this + 3) * v68;
    v56 = *(this + 4) * v68;
    v60 = v68 * *(this + 5);
    v69 = v52 + *this;
    v28 = v69;
    *this = v69;
    v70 = *(this + 1) + v56;
    v29 = v70;
    *(this + 1) = v70;
    v71 = v60 + *(this + 2);
    v30 = v71;
    *(this + 2) = v71;
    v72 = (v48 + v43) * v27;
    v53 = *(this + 6) * v72;
    v57 = *(this + 7) * v72;
    v61 = v72 * *(this + 8);
    v73 = v28 + v53;
    *this = v73;
    v31 = v73;
    v74 = v29 + v57;
    *(this + 1) = v74;
    v32 = v74;
    v75 = v30 + v61;
    v33 = v75;
    *(this + 2) = v75;
    v76 = (v50 + v44) * v27;
    v54 = v76 * *(this + 9);
    v58 = *(this + 0xA) * v76;
    v62 = v76 * *(this + 0xB);
    *this = v31 + v54;
    *(this + 1) = v32 + v58;
    *(this + 2) = v33 + v62;
    *(this + 0xC) = (v46 - v42) * v27;
    *(this + 0xD) = (v48 - v43) * v27;
    *(this + 0xE) = v27 * (v50 - v44);
  }
}
