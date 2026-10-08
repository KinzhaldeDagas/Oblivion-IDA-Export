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
  NiPoint3 *v9; // edi
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
  NiTransform v74; // [esp+94h] [ebp-34h] BYREF

  v9 = (NiPoint3 *)(this + 1); /*0x979f3e*/
  v10 = this + 4; /*0x979f41*/
  sub_9794D0(this, v73, a3, a4, a5, a6, a7, a8, a9); /*0x979f44*/
  sub_711AE0(v73, v72, v10); /*0x979f53*/
  v33 = 0.0; /*0x979f61*/
  v35 = 0.0; /*0x979f68*/
  v11 = a7; /*0x979f6c*/
  v37 = 0.0; /*0x979f6f*/
  v39 = 0.0; /*0x979f73*/
  v40 = 0.0; /*0x979f77*/
  v41 = 0.0; /*0x979f82*/
  v70 = a7; /*0x979f86*/
  if ( a7 <= a8 ) /*0x979f8a*/
  {
    do /*0x97a2b4*/
    {
      v12 = 3 * *(_DWORD *)(a9 + 4 * v11); /*0x979f9a*/
      v13 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 2 * v12)); /*0x979fa5*/
      v60 = *v13 - v9->x; /*0x979fb9*/
      v71 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 2 * (v12 + 1) + 2)); /*0x979fc9*/
      v63 = v13[1] - v9->y; /*0x979fd0*/
      v14 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 2 * v12 + 2)); /*0x979fd4*/
      v66 = v13[2] - v9->z; /*0x979fdd*/
      v42 = *v10 * v60 + v63 * v10[1] + v66 * v10[2]; /*0x97a003*/
      v45 = v10[4] * v63 + v10[3] * v60 + v10[5] * v66; /*0x97a01a*/
      v48 = v66 * v10[8] + v60 * v10[6] + v63 * v10[7]; /*0x97a02f*/
      if ( v33 <= (double)v42 ) /*0x97a042*/
      {
        if ( v39 < (double)v42 ) /*0x97a055*/
          v39 = *v10 * v60 + v63 * v10[1] + v66 * v10[2]; /*0x97a057*/
      }
      else
      {
        v33 = *v10 * v60 + v63 * v10[1] + v66 * v10[2]; /*0x97a044*/
      }
      if ( v35 <= (double)v45 ) /*0x97a06e*/
      {
        if ( v40 < (double)v45 ) /*0x97a081*/
          v40 = v10[4] * v63 + v10[3] * v60 + v10[5] * v66; /*0x97a083*/
      }
      else
      {
        v35 = v10[4] * v63 + v10[3] * v60 + v10[5] * v66; /*0x97a070*/
      }
      if ( v37 <= (double)v48 ) /*0x97a09a*/
      {
        if ( v41 < (double)v48 ) /*0x97a0ad*/
          v41 = v66 * v10[8] + v60 * v10[6] + v63 * v10[7]; /*0x97a0af*/
      }
      else
      {
        v37 = v66 * v10[8] + v60 * v10[6] + v63 * v10[7]; /*0x97a09c*/
      }
      v51 = *v14 - v9->x; /*0x97a0bb*/
      v54 = v14[1] - v9->y; /*0x97a0c5*/
      v57 = v14[2] - v9->z; /*0x97a0cf*/
      v43 = *v10 * v51 + v54 * v10[1] + v57 * v10[2]; /*0x97a0f5*/
      v46 = v10[4] * v54 + v10[3] * v51 + v10[5] * v57; /*0x97a10c*/
      v49 = v57 * v10[8] + v51 * v10[6] + v54 * v10[7]; /*0x97a121*/
      if ( v33 <= (double)v43 ) /*0x97a134*/
      {
        if ( v39 < (double)v43 ) /*0x97a147*/
          v39 = *v10 * v51 + v54 * v10[1] + v57 * v10[2]; /*0x97a149*/
      }
      else
      {
        v33 = *v10 * v51 + v54 * v10[1] + v57 * v10[2]; /*0x97a136*/
      }
      if ( v35 <= (double)v46 ) /*0x97a160*/
      {
        if ( v40 < (double)v46 ) /*0x97a173*/
          v40 = v10[4] * v54 + v10[3] * v51 + v10[5] * v57; /*0x97a175*/
      }
      else
      {
        v35 = v10[4] * v54 + v10[3] * v51 + v10[5] * v57; /*0x97a162*/
      }
      if ( v37 <= (double)v49 ) /*0x97a18c*/
      {
        if ( v41 < (double)v49 ) /*0x97a19f*/
          v41 = v57 * v10[8] + v51 * v10[6] + v54 * v10[7]; /*0x97a1a1*/
      }
      else
      {
        v37 = v57 * v10[8] + v51 * v10[6] + v54 * v10[7]; /*0x97a18e*/
      }
      v18 = *v71 - v9->x; /*0x97a1b1*/
      v23 = v71[1] - v9->y; /*0x97a1bb*/
      v28 = v71[2] - v9->z; /*0x97a1c5*/
      v44 = *v10 * v18 + v23 * v10[1] + v28 * v10[2]; /*0x97a1eb*/
      v47 = v10[4] * v23 + v10[3] * v18 + v10[5] * v28; /*0x97a202*/
      v50 = v28 * v10[8] + v18 * v10[6] + v23 * v10[7]; /*0x97a217*/
      if ( v33 <= (double)v44 ) /*0x97a22a*/
      {
        if ( v39 < (double)v44 ) /*0x97a23d*/
          v39 = *v10 * v18 + v23 * v10[1] + v28 * v10[2]; /*0x97a23f*/
      }
      else
      {
        v33 = *v10 * v18 + v23 * v10[1] + v28 * v10[2]; /*0x97a22c*/
      }
      if ( v35 <= (double)v47 ) /*0x97a256*/
      {
        if ( v40 < (double)v47 ) /*0x97a269*/
          v40 = v10[4] * v23 + v10[3] * v18 + v10[5] * v28; /*0x97a26b*/
      }
      else
      {
        v35 = v10[4] * v23 + v10[3] * v18 + v10[5] * v28; /*0x97a258*/
      }
      if ( v37 <= (double)v50 ) /*0x97a282*/
      {
        if ( v41 < (double)v50 ) /*0x97a295*/
          v41 = v28 * v10[8] + v18 * v10[6] + v23 * v10[7]; /*0x97a297*/
      }
      else
      {
        v37 = v28 * v10[8] + v18 * v10[6] + v23 * v10[7]; /*0x97a284*/
      }
      v11 = (unsigned __int16)++v70; /*0x97a2aa*/
    }
    while ( (unsigned __int16)v70 <= a8 ); /*0x97a2b4*/
  }
  v15 = this; /*0x97a2be*/
  v19 = v39 - v33; /*0x97a2ce*/
  v24 = v40 - v35; /*0x97a2e2*/
  v29 = v41 - v37; /*0x97a2f6*/
  v16 = dbl_A2FAA0; /*0x97a306*/
  v52 = v19 * v16; /*0x97a308*/
  v55 = v24 * v16; /*0x97a312*/
  v58 = v29 * v16; /*0x97a31c*/
  *(this + 0xD) = v52; /*0x97a324*/
  *(this + 0xE) = v55; /*0x97a32b*/
  *(this + 0xF) = v58; /*0x97a332*/
  v20 = v33 + v39; /*0x97a33b*/
  v25 = v35 + v40; /*0x97a343*/
  v30 = v37 + v41; /*0x97a349*/
  v61 = v20 * v16; /*0x97a353*/
  v64 = v25 * v16; /*0x97a35d*/
  v69 = v16 * v30; /*0x97a365*/
  v34 = v10[6] * v69; /*0x97a376*/
  v36 = v10[7] * v69; /*0x97a37f*/
  v38 = v69 * v10[8]; /*0x97a386*/
  v53 = v10[3] * v64; /*0x97a397*/
  v56 = v10[4] * v64; /*0x97a3a0*/
  v59 = v64 * v10[5]; /*0x97a3a7*/
  v21 = *v10 * v61; /*0x97a3be*/
  v26 = v10[1] * v61; /*0x97a3c7*/
  v31 = v61 * v10[2]; /*0x97a3ce*/
  v62 = v21 + v53; /*0x97a3da*/
  v65 = v26 + v56; /*0x97a3e6*/
  v67 = v31 + v59; /*0x97a3f2*/
  v22 = v62 + v34; /*0x97a3fe*/
  v27 = v65 + v36; /*0x97a40a*/
  v32 = v67 + v38; /*0x97a416*/
  v9->x = v22 + v9->x; /*0x97a420*/
  v9->y = v27 + v9->y; /*0x97a429*/
  v9->z = v9->z + v32; /*0x97a433*/
  sub_718A50((float *)&v74); /*0x97a436*/
  result = sub_97AEC0(v9, &v74); /*0x97a445*/
  *((_DWORD *)v15 + 0x1F) = a2; /*0x97a454*/
  return result; /*0x97a451*/
}
