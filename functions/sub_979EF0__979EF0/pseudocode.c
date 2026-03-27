int __thiscall sub_979EF0(
        float *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        signed int a8,
        int a9)
{
  float *v9; // edi
  float *v10; // esi
  int v11; // eax
  int v12; // eax
  float *v13; // ecx
  float *v14; // edx
  float *v15; // ebx
  double v16; // rt2
  int result; // eax
  float v18; // [esp+10h] [ebp-B8h]
  float v19; // [esp+10h] [ebp-B8h]
  float v20; // [esp+10h] [ebp-B8h]
  float v21; // [esp+10h] [ebp-B8h]
  float v22; // [esp+10h] [ebp-B8h]
  float v23; // [esp+14h] [ebp-B4h]
  float v24; // [esp+14h] [ebp-B4h]
  float v25; // [esp+14h] [ebp-B4h]
  float v26; // [esp+14h] [ebp-B4h]
  float v27; // [esp+14h] [ebp-B4h]
  float v28; // [esp+18h] [ebp-B0h]
  float v29; // [esp+18h] [ebp-B0h]
  float v30; // [esp+18h] [ebp-B0h]
  float v31; // [esp+18h] [ebp-B0h]
  float v32; // [esp+18h] [ebp-B0h]
  float v33; // [esp+1Ch] [ebp-ACh]
  float v34; // [esp+1Ch] [ebp-ACh]
  float v35; // [esp+20h] [ebp-A8h]
  float v36; // [esp+20h] [ebp-A8h]
  float v37; // [esp+24h] [ebp-A4h]
  float v38; // [esp+24h] [ebp-A4h]
  float v39; // [esp+28h] [ebp-A0h]
  float v40; // [esp+2Ch] [ebp-9Ch]
  float v41; // [esp+30h] [ebp-98h]
  float v42; // [esp+34h] [ebp-94h]
  float v43; // [esp+34h] [ebp-94h]
  float v44; // [esp+34h] [ebp-94h]
  float v45; // [esp+38h] [ebp-90h]
  float v46; // [esp+38h] [ebp-90h]
  float v47; // [esp+38h] [ebp-90h]
  float v48; // [esp+3Ch] [ebp-8Ch]
  float v49; // [esp+3Ch] [ebp-8Ch]
  float v50; // [esp+3Ch] [ebp-8Ch]
  float v51; // [esp+40h] [ebp-88h]
  float v52; // [esp+40h] [ebp-88h]
  float v53; // [esp+40h] [ebp-88h]
  float v54; // [esp+44h] [ebp-84h]
  float v55; // [esp+44h] [ebp-84h]
  float v56; // [esp+44h] [ebp-84h]
  float v57; // [esp+48h] [ebp-80h]
  float v58; // [esp+48h] [ebp-80h]
  float v59; // [esp+48h] [ebp-80h]
  float v60; // [esp+4Ch] [ebp-7Ch]
  float v61; // [esp+4Ch] [ebp-7Ch]
  float v62; // [esp+4Ch] [ebp-7Ch]
  float v63; // [esp+50h] [ebp-78h]
  float v64; // [esp+50h] [ebp-78h]
  float v65; // [esp+50h] [ebp-78h]
  float v66; // [esp+54h] [ebp-74h]
  float v67; // [esp+54h] [ebp-74h]
  float v69; // [esp+58h] [ebp-70h]
  int v70; // [esp+5Ch] [ebp-6Ch]
  float *v71; // [esp+60h] [ebp-68h]
  float v72[3]; // [esp+64h] [ebp-64h] BYREF
  float v73[9]; // [esp+70h] [ebp-58h] BYREF
  float v74[13]; // [esp+94h] [ebp-34h] BYREF

  v9 = this + 1;
  v10 = this + 4;
  sub_9794D0(this, v73, a3, a4, a5, a6, a7, a8, a9);
  sub_711AE0(v73, v72, v10);
  v33 = 0.0;
  v35 = 0.0;
  v11 = a7;
  v37 = 0.0;
  v39 = 0.0;
  v40 = 0.0;
  v41 = 0.0;
  v70 = a7;
  if ( a7 <= a8 )
  {
    do
    {
      v12 = 3 * *(_DWORD *)(a9 + 4 * v11);
      v13 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 2 * v12));
      v60 = *v13 - *v9;
      v71 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 2 * (v12 + 1) + 2));
      v63 = v13[1] - v9[1];
      v14 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 2 * v12 + 2));
      v66 = v13[2] - v9[2];
      v42 = *v10 * v60 + v63 * v10[1] + v66 * v10[2];
      v45 = v10[4] * v63 + v10[3] * v60 + v10[5] * v66;
      v48 = v66 * v10[8] + v60 * v10[6] + v63 * v10[7];
      if ( v33 <= (double)v42 )
      {
        if ( v39 < (double)v42 )
          v39 = *v10 * v60 + v63 * v10[1] + v66 * v10[2];
      }
      else
      {
        v33 = *v10 * v60 + v63 * v10[1] + v66 * v10[2];
      }
      if ( v35 <= (double)v45 )
      {
        if ( v40 < (double)v45 )
          v40 = v10[4] * v63 + v10[3] * v60 + v10[5] * v66;
      }
      else
      {
        v35 = v10[4] * v63 + v10[3] * v60 + v10[5] * v66;
      }
      if ( v37 <= (double)v48 )
      {
        if ( v41 < (double)v48 )
          v41 = v66 * v10[8] + v60 * v10[6] + v63 * v10[7];
      }
      else
      {
        v37 = v66 * v10[8] + v60 * v10[6] + v63 * v10[7];
      }
      v51 = *v14 - *v9;
      v54 = v14[1] - v9[1];
      v57 = v14[2] - v9[2];
      v43 = *v10 * v51 + v54 * v10[1] + v57 * v10[2];
      v46 = v10[4] * v54 + v10[3] * v51 + v10[5] * v57;
      v49 = v57 * v10[8] + v51 * v10[6] + v54 * v10[7];
      if ( v33 <= (double)v43 )
      {
        if ( v39 < (double)v43 )
          v39 = *v10 * v51 + v54 * v10[1] + v57 * v10[2];
      }
      else
      {
        v33 = *v10 * v51 + v54 * v10[1] + v57 * v10[2];
      }
      if ( v35 <= (double)v46 )
      {
        if ( v40 < (double)v46 )
          v40 = v10[4] * v54 + v10[3] * v51 + v10[5] * v57;
      }
      else
      {
        v35 = v10[4] * v54 + v10[3] * v51 + v10[5] * v57;
      }
      if ( v37 <= (double)v49 )
      {
        if ( v41 < (double)v49 )
          v41 = v57 * v10[8] + v51 * v10[6] + v54 * v10[7];
      }
      else
      {
        v37 = v57 * v10[8] + v51 * v10[6] + v54 * v10[7];
      }
      v18 = *v71 - *v9;
      v23 = v71[1] - v9[1];
      v28 = v71[2] - v9[2];
      v44 = *v10 * v18 + v23 * v10[1] + v28 * v10[2];
      v47 = v10[4] * v23 + v10[3] * v18 + v10[5] * v28;
      v50 = v28 * v10[8] + v18 * v10[6] + v23 * v10[7];
      if ( v33 <= (double)v44 )
      {
        if ( v39 < (double)v44 )
          v39 = *v10 * v18 + v23 * v10[1] + v28 * v10[2];
      }
      else
      {
        v33 = *v10 * v18 + v23 * v10[1] + v28 * v10[2];
      }
      if ( v35 <= (double)v47 )
      {
        if ( v40 < (double)v47 )
          v40 = v10[4] * v23 + v10[3] * v18 + v10[5] * v28;
      }
      else
      {
        v35 = v10[4] * v23 + v10[3] * v18 + v10[5] * v28;
      }
      if ( v37 <= (double)v50 )
      {
        if ( v41 < (double)v50 )
          v41 = v28 * v10[8] + v18 * v10[6] + v23 * v10[7];
      }
      else
      {
        v37 = v28 * v10[8] + v18 * v10[6] + v23 * v10[7];
      }
      v11 = (unsigned __int16)++v70;
    }
    while ( (unsigned __int16)v70 <= a8 );
  }
  v15 = this;
  v19 = v39 - v33;
  v24 = v40 - v35;
  v29 = v41 - v37;
  v16 = dbl_A2FAA0;
  v52 = v19 * v16;
  v55 = v24 * v16;
  v58 = v29 * v16;
  *(this + 0xD) = v52;
  *(this + 0xE) = v55;
  *(this + 0xF) = v58;
  v20 = v33 + v39;
  v25 = v35 + v40;
  v30 = v37 + v41;
  v61 = v20 * v16;
  v64 = v25 * v16;
  v69 = v16 * v30;
  v34 = v10[6] * v69;
  v36 = v10[7] * v69;
  v38 = v69 * v10[8];
  v53 = v10[3] * v64;
  v56 = v10[4] * v64;
  v59 = v64 * v10[5];
  v21 = *v10 * v61;
  v26 = v10[1] * v61;
  v31 = v61 * v10[2];
  v62 = v21 + v53;
  v65 = v26 + v56;
  v67 = v31 + v59;
  v22 = v62 + v34;
  v27 = v65 + v36;
  v32 = v67 + v38;
  *v9 = v22 + *v9;
  v9[1] = v27 + v9[1];
  v9[2] = v9[2] + v32;
  sub_718A50(v74);
  result = sub_97AEC0(v9, v74);
  *((_DWORD *)v15 + 0x1F) = a2;
  return result;
}
