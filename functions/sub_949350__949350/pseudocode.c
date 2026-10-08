int __thiscall sub_949350(float *this, int a2)
{
  int v3; // eax
  float *v4; // ecx
  double v5; // st7
  double v6; // st6
  float *v8; // ecx
  double v9; // st7
  double v10; // st6
  float *v11; // ecx
  double v12; // st7
  double v13; // st6
  float *v14; // ecx
  double v15; // st7
  double v16; // st6
  float *v17; // ecx
  double v18; // st7
  double v19; // st6
  float *v20; // ecx
  double v21; // st7
  double v22; // st6
  float *v23; // ecx
  double v24; // st7
  double v25; // st6
  float *v26; // ecx
  double v27; // st7
  double v28; // st6
  double v29; // st7
  double v30; // st6
  int v31; // ecx
  double v32; // st7
  float *v33; // ecx
  double v34; // st6
  float *v35; // ecx
  double v36; // st7
  double v37; // st6
  float *v38; // ecx
  double v39; // st7
  double v40; // st6
  float *v41; // ecx
  double v42; // st7
  double v43; // st6
  float *v44; // ecx
  double v45; // st7
  double v46; // st6
  float *v47; // ecx
  double v48; // st7
  double v49; // st6
  float *v50; // ecx
  double v51; // st7
  double v52; // st6
  float *v53; // ecx
  double v54; // st7
  double v55; // st6
  double v56; // st7
  double v57; // st6
  int v58; // ecx
  double v59; // st7
  float *v60; // ecx
  double v61; // st6
  float *v62; // ecx
  double v63; // st7
  double v64; // st6
  float *v65; // ecx
  double v66; // st7
  double v67; // st6
  float *v68; // ecx
  double v69; // st7
  double v70; // st6
  float *v71; // ecx
  double v72; // st7
  double v73; // st6
  double v74; // st7
  double v75; // st6
  int v76; // edi

  if ( (*(_DWORD *)(a2 + 8) & 0x3FFFFFFFu) < 0x18 ) /*0x949363*/
  {
    v3 = 2 * (*(_DWORD *)(a2 + 8) & 0x3FFFFFFF); /*0x949365*/
    if ( v3 <= 0x18 ) /*0x94936a*/
      v3 = 0x18; /*0x94936c*/
    sub_8A6E40((const void **)a2, v3, 0x10); /*0x949375*/
  }
  v4 = *(float **)a2; /*0x94937d*/
  *(_DWORD *)(a2 + 4) = 0x18; /*0x94937f*/
  v5 = *(this + 0x1A); /*0x949386*/
  v6 = *(this + 0x19); /*0x94938c*/
  *v4 = *(this + 0x18); /*0x94938f*/
  v4[1] = v6; /*0x949391*/
  v4[2] = v5; /*0x949396*/
  v4[3] = 0.0; /*0x949399*/
  v8 = *(float **)a2; /*0x94939c*/
  v9 = *(this + 0x1A); /*0x94939e*/
  v10 = *(this + 0x1D); /*0x9493a4*/
  v8[4] = *(this + 0x18); /*0x9493a7*/
  v8[5] = v10; /*0x9493aa*/
  v8 += 4; /*0x9493ad*/
  v8[2] = v9; /*0x9493b0*/
  v8[3] = 0.0; /*0x9493b3*/
  v11 = *(float **)a2; /*0x9493b6*/
  v12 = *(this + 0x1A); /*0x9493b8*/
  v13 = *(this + 0x19); /*0x9493be*/
  v11[8] = *(this + 0x18); /*0x9493c1*/
  v11[9] = v13; /*0x9493c4*/
  v11 += 8; /*0x9493c7*/
  v11[2] = v12; /*0x9493ca*/
  v11[3] = 0.0; /*0x9493cd*/
  v14 = *(float **)a2; /*0x9493d0*/
  v15 = *(this + 0x1E); /*0x9493d2*/
  v16 = *(this + 0x19); /*0x9493d8*/
  v14[0xC] = *(this + 0x18); /*0x9493db*/
  v14[0xD] = v16; /*0x9493de*/
  v14 += 0xC; /*0x9493e1*/
  v14[2] = v15; /*0x9493e4*/
  v14[3] = 0.0; /*0x9493e7*/
  v17 = *(float **)a2; /*0x9493ea*/
  v18 = *(this + 0x1A); /*0x9493ec*/
  v19 = *(this + 0x19); /*0x9493f2*/
  v17[0x10] = *(this + 0x18); /*0x9493f5*/
  v17[0x11] = v19; /*0x9493f8*/
  v17 += 0x10; /*0x9493fb*/
  v17[2] = v18; /*0x9493fe*/
  v17[3] = 0.0; /*0x949401*/
  v20 = *(float **)a2; /*0x949404*/
  v21 = *(this + 0x1A); /*0x949406*/
  v22 = *(this + 0x19); /*0x94940c*/
  v20[0x14] = *(this + 0x1C); /*0x94940f*/
  v20[0x15] = v22; /*0x949412*/
  v20 += 0x14; /*0x949415*/
  v20[2] = v21; /*0x949418*/
  v20[3] = 0.0; /*0x94941b*/
  v23 = *(float **)a2; /*0x94941e*/
  v24 = *(this + 0x1E); /*0x949420*/
  v25 = *(this + 0x1D); /*0x949426*/
  v23[0x18] = *(this + 0x1C); /*0x949429*/
  v23[0x19] = v25; /*0x94942c*/
  v23 += 0x18; /*0x94942f*/
  v23[2] = v24; /*0x949432*/
  v23[3] = 0.0; /*0x949435*/
  v26 = *(float **)a2; /*0x949438*/
  v27 = *(this + 0x1A); /*0x94943a*/
  v28 = *(this + 0x1D); /*0x949440*/
  v26[0x1C] = *(this + 0x1C); /*0x949443*/
  v26[0x1D] = v28; /*0x949446*/
  v26 += 0x1C; /*0x949449*/
  v26[2] = v27; /*0x94944c*/
  v26[3] = 0.0; /*0x94944f*/
  v29 = *(this + 0x1E); /*0x949454*/
  v30 = *(this + 0x1D); /*0x94945a*/
  v31 = *(_DWORD *)a2 + 0x80; /*0x94945d*/
  *(float *)v31 = *(this + 0x1C); /*0x949463*/
  *(float *)(v31 + 4) = v30; /*0x949465*/
  *(float *)(v31 + 8) = v29; /*0x949468*/
  *(_DWORD *)(v31 + 0xC) = 0; /*0x94946b*/
  v32 = *(this + 0x1E); /*0x94946e*/
  v33 = *(float **)a2; /*0x949471*/
  v34 = *(this + 0x1D); /*0x949473*/
  v33[0x24] = *(this + 0x18); /*0x949479*/
  v33[0x25] = v34; /*0x94947f*/
  v33 += 0x24; /*0x949485*/
  v33[2] = v32; /*0x94948b*/
  v33[3] = 0.0; /*0x94948e*/
  v35 = *(float **)a2; /*0x949491*/
  v36 = *(this + 0x1E); /*0x949493*/
  v37 = *(this + 0x1D); /*0x949499*/
  v35[0x28] = *(this + 0x1C); /*0x94949c*/
  v35[0x29] = v37; /*0x9494a2*/
  v35 += 0x28; /*0x9494a8*/
  v35[2] = v36; /*0x9494ae*/
  v35[3] = 0.0; /*0x9494b1*/
  v38 = *(float **)a2; /*0x9494b4*/
  v39 = *(this + 0x1E); /*0x9494b6*/
  v40 = *(this + 0x19); /*0x9494bc*/
  v38[0x2C] = *(this + 0x1C); /*0x9494bf*/
  v38[0x2D] = v40; /*0x9494c5*/
  v38 += 0x2C; /*0x9494cb*/
  v38[2] = v39; /*0x9494d1*/
  v38[3] = 0.0; /*0x9494d4*/
  v41 = *(float **)a2; /*0x9494d7*/
  v42 = *(this + 0x1A); /*0x9494d9*/
  v43 = *(this + 0x1D); /*0x9494df*/
  v41[0x30] = *(this + 0x18); /*0x9494e2*/
  v41[0x31] = v43; /*0x9494e8*/
  v41 += 0x30; /*0x9494ee*/
  v41[2] = v42; /*0x9494f4*/
  v41[3] = 0.0; /*0x9494f7*/
  v44 = *(float **)a2; /*0x9494fa*/
  v45 = *(this + 0x1A); /*0x9494fc*/
  v46 = *(this + 0x1D); /*0x949502*/
  v44[0x34] = *(this + 0x1C); /*0x949505*/
  v44[0x35] = v46; /*0x94950b*/
  v44 += 0x34; /*0x949511*/
  v44[2] = v45; /*0x949517*/
  v44[3] = 0.0; /*0x94951a*/
  v47 = *(float **)a2; /*0x94951d*/
  v48 = *(this + 0x1A); /*0x94951f*/
  v49 = *(this + 0x1D); /*0x949525*/
  v47[0x38] = *(this + 0x18); /*0x949528*/
  v47[0x39] = v49; /*0x94952e*/
  v47 += 0x38; /*0x949534*/
  v47[2] = v48; /*0x94953a*/
  v47[3] = 0.0; /*0x94953d*/
  v50 = *(float **)a2; /*0x949540*/
  v51 = *(this + 0x1E); /*0x949542*/
  v52 = *(this + 0x1D); /*0x949548*/
  v50[0x3C] = *(this + 0x18); /*0x94954b*/
  v50[0x3D] = v52; /*0x949551*/
  v50 += 0x3C; /*0x949557*/
  v50[2] = v51; /*0x94955d*/
  v50[3] = 0.0; /*0x949560*/
  v53 = *(float **)a2; /*0x949563*/
  v54 = *(this + 0x1A); /*0x949565*/
  v55 = *(this + 0x1D); /*0x94956b*/
  v53[0x40] = *(this + 0x1C); /*0x94956e*/
  v53[0x41] = v55; /*0x949574*/
  v53 += 0x40; /*0x94957a*/
  v53[2] = v54; /*0x949580*/
  v53[3] = 0.0; /*0x949583*/
  v56 = *(this + 0x1A); /*0x949588*/
  v57 = *(this + 0x19); /*0x94958e*/
  v58 = *(_DWORD *)a2 + 0x110; /*0x949591*/
  *(float *)v58 = *(this + 0x1C); /*0x949597*/
  *(float *)(v58 + 4) = v57; /*0x949599*/
  *(float *)(v58 + 8) = v56; /*0x94959c*/
  *(_DWORD *)(v58 + 0xC) = 0; /*0x94959f*/
  v59 = *(this + 0x1E); /*0x9495a2*/
  v60 = *(float **)a2; /*0x9495a5*/
  v61 = *(this + 0x1D); /*0x9495a7*/
  v60[0x48] = *(this + 0x18); /*0x9495ad*/
  v60[0x49] = v61; /*0x9495b3*/
  v60 += 0x48; /*0x9495b9*/
  v60[2] = v59; /*0x9495bf*/
  v60[3] = 0.0; /*0x9495c2*/
  v62 = *(float **)a2; /*0x9495c5*/
  v63 = *(this + 0x1E); /*0x9495c7*/
  v64 = *(this + 0x19); /*0x9495cd*/
  v62[0x4C] = *(this + 0x18); /*0x9495d0*/
  v62[0x4D] = v64; /*0x9495d6*/
  v62 += 0x4C; /*0x9495dc*/
  v62[2] = v63; /*0x9495e2*/
  v62[3] = 0.0; /*0x9495e5*/
  v65 = *(float **)a2; /*0x9495e8*/
  v66 = *(this + 0x1E); /*0x9495ea*/
  v67 = *(this + 0x19); /*0x9495f0*/
  v65[0x50] = *(this + 0x18); /*0x9495f3*/
  v65[0x51] = v67; /*0x9495f9*/
  v65 += 0x50; /*0x9495ff*/
  v65[2] = v66; /*0x949605*/
  v65[3] = 0.0; /*0x949608*/
  v68 = *(float **)a2; /*0x94960b*/
  v69 = *(this + 0x1E); /*0x94960d*/
  v70 = *(this + 0x19); /*0x949613*/
  v68[0x54] = *(this + 0x1C); /*0x949616*/
  v68[0x55] = v70; /*0x94961c*/
  v68 += 0x54; /*0x949622*/
  v68[2] = v69; /*0x949628*/
  v68[3] = 0.0; /*0x94962b*/
  v71 = *(float **)a2; /*0x94962e*/
  v72 = *(this + 0x1E); /*0x949630*/
  v73 = *(this + 0x19); /*0x949636*/
  v71[0x58] = *(this + 0x1C); /*0x949639*/
  v71[0x59] = v73; /*0x94963f*/
  v71 += 0x58; /*0x949645*/
  v71[2] = v72; /*0x94964b*/
  v71[3] = 0.0; /*0x94964e*/
  v74 = *(this + 0x1A); /*0x949653*/
  v75 = *(this + 0x19); /*0x949659*/
  v76 = *(_DWORD *)a2 + 0x170; /*0x94965c*/
  *(float *)v76 = *(this + 0x1C); /*0x949662*/
  *(float *)(v76 + 4) = v75; /*0x949664*/
  *(float *)(v76 + 8) = v74; /*0x949667*/
  *(_DWORD *)(v76 + 0xC) = 0; /*0x94966a*/
  return 0; /*0x94966d*/
}
