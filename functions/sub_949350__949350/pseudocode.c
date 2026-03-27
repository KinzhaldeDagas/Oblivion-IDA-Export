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

  if ( (*(_DWORD *)(a2 + 8) & 0x3FFFFFFFu) < 0x18 )
  {
    v3 = 2 * (*(_DWORD *)(a2 + 8) & 0x3FFFFFFF);
    if ( v3 <= 0x18 )
      v3 = 0x18;
    sub_8A6E40((const void **)a2, v3, 0x10);
  }
  v4 = *(float **)a2;
  *(_DWORD *)(a2 + 4) = 0x18;
  v5 = *(this + 0x1A);
  v6 = *(this + 0x19);
  *v4 = *(this + 0x18);
  v4[1] = v6;
  v4[2] = v5;
  v4[3] = 0.0;
  v8 = *(float **)a2;
  v9 = *(this + 0x1A);
  v10 = *(this + 0x1D);
  v8[4] = *(this + 0x18);
  v8[5] = v10;
  v8 += 4;
  v8[2] = v9;
  v8[3] = 0.0;
  v11 = *(float **)a2;
  v12 = *(this + 0x1A);
  v13 = *(this + 0x19);
  v11[8] = *(this + 0x18);
  v11[9] = v13;
  v11 += 8;
  v11[2] = v12;
  v11[3] = 0.0;
  v14 = *(float **)a2;
  v15 = *(this + 0x1E);
  v16 = *(this + 0x19);
  v14[0xC] = *(this + 0x18);
  v14[0xD] = v16;
  v14 += 0xC;
  v14[2] = v15;
  v14[3] = 0.0;
  v17 = *(float **)a2;
  v18 = *(this + 0x1A);
  v19 = *(this + 0x19);
  v17[0x10] = *(this + 0x18);
  v17[0x11] = v19;
  v17 += 0x10;
  v17[2] = v18;
  v17[3] = 0.0;
  v20 = *(float **)a2;
  v21 = *(this + 0x1A);
  v22 = *(this + 0x19);
  v20[0x14] = *(this + 0x1C);
  v20[0x15] = v22;
  v20 += 0x14;
  v20[2] = v21;
  v20[3] = 0.0;
  v23 = *(float **)a2;
  v24 = *(this + 0x1E);
  v25 = *(this + 0x1D);
  v23[0x18] = *(this + 0x1C);
  v23[0x19] = v25;
  v23 += 0x18;
  v23[2] = v24;
  v23[3] = 0.0;
  v26 = *(float **)a2;
  v27 = *(this + 0x1A);
  v28 = *(this + 0x1D);
  v26[0x1C] = *(this + 0x1C);
  v26[0x1D] = v28;
  v26 += 0x1C;
  v26[2] = v27;
  v26[3] = 0.0;
  v29 = *(this + 0x1E);
  v30 = *(this + 0x1D);
  v31 = *(_DWORD *)a2 + 0x80;
  *(float *)v31 = *(this + 0x1C);
  *(float *)(v31 + 4) = v30;
  *(float *)(v31 + 8) = v29;
  *(_DWORD *)(v31 + 0xC) = 0;
  v32 = *(this + 0x1E);
  v33 = *(float **)a2;
  v34 = *(this + 0x1D);
  v33[0x24] = *(this + 0x18);
  v33[0x25] = v34;
  v33 += 0x24;
  v33[2] = v32;
  v33[3] = 0.0;
  v35 = *(float **)a2;
  v36 = *(this + 0x1E);
  v37 = *(this + 0x1D);
  v35[0x28] = *(this + 0x1C);
  v35[0x29] = v37;
  v35 += 0x28;
  v35[2] = v36;
  v35[3] = 0.0;
  v38 = *(float **)a2;
  v39 = *(this + 0x1E);
  v40 = *(this + 0x19);
  v38[0x2C] = *(this + 0x1C);
  v38[0x2D] = v40;
  v38 += 0x2C;
  v38[2] = v39;
  v38[3] = 0.0;
  v41 = *(float **)a2;
  v42 = *(this + 0x1A);
  v43 = *(this + 0x1D);
  v41[0x30] = *(this + 0x18);
  v41[0x31] = v43;
  v41 += 0x30;
  v41[2] = v42;
  v41[3] = 0.0;
  v44 = *(float **)a2;
  v45 = *(this + 0x1A);
  v46 = *(this + 0x1D);
  v44[0x34] = *(this + 0x1C);
  v44[0x35] = v46;
  v44 += 0x34;
  v44[2] = v45;
  v44[3] = 0.0;
  v47 = *(float **)a2;
  v48 = *(this + 0x1A);
  v49 = *(this + 0x1D);
  v47[0x38] = *(this + 0x18);
  v47[0x39] = v49;
  v47 += 0x38;
  v47[2] = v48;
  v47[3] = 0.0;
  v50 = *(float **)a2;
  v51 = *(this + 0x1E);
  v52 = *(this + 0x1D);
  v50[0x3C] = *(this + 0x18);
  v50[0x3D] = v52;
  v50 += 0x3C;
  v50[2] = v51;
  v50[3] = 0.0;
  v53 = *(float **)a2;
  v54 = *(this + 0x1A);
  v55 = *(this + 0x1D);
  v53[0x40] = *(this + 0x1C);
  v53[0x41] = v55;
  v53 += 0x40;
  v53[2] = v54;
  v53[3] = 0.0;
  v56 = *(this + 0x1A);
  v57 = *(this + 0x19);
  v58 = *(_DWORD *)a2 + 0x110;
  *(float *)v58 = *(this + 0x1C);
  *(float *)(v58 + 4) = v57;
  *(float *)(v58 + 8) = v56;
  *(_DWORD *)(v58 + 0xC) = 0;
  v59 = *(this + 0x1E);
  v60 = *(float **)a2;
  v61 = *(this + 0x1D);
  v60[0x48] = *(this + 0x18);
  v60[0x49] = v61;
  v60 += 0x48;
  v60[2] = v59;
  v60[3] = 0.0;
  v62 = *(float **)a2;
  v63 = *(this + 0x1E);
  v64 = *(this + 0x19);
  v62[0x4C] = *(this + 0x18);
  v62[0x4D] = v64;
  v62 += 0x4C;
  v62[2] = v63;
  v62[3] = 0.0;
  v65 = *(float **)a2;
  v66 = *(this + 0x1E);
  v67 = *(this + 0x19);
  v65[0x50] = *(this + 0x18);
  v65[0x51] = v67;
  v65 += 0x50;
  v65[2] = v66;
  v65[3] = 0.0;
  v68 = *(float **)a2;
  v69 = *(this + 0x1E);
  v70 = *(this + 0x19);
  v68[0x54] = *(this + 0x1C);
  v68[0x55] = v70;
  v68 += 0x54;
  v68[2] = v69;
  v68[3] = 0.0;
  v71 = *(float **)a2;
  v72 = *(this + 0x1E);
  v73 = *(this + 0x19);
  v71[0x58] = *(this + 0x1C);
  v71[0x59] = v73;
  v71 += 0x58;
  v71[2] = v72;
  v71[3] = 0.0;
  v74 = *(this + 0x1A);
  v75 = *(this + 0x19);
  v76 = *(_DWORD *)a2 + 0x170;
  *(float *)v76 = *(this + 0x1C);
  *(float *)(v76 + 4) = v75;
  *(float *)(v76 + 8) = v74;
  *(_DWORD *)(v76 + 0xC) = 0;
  return 0;
}
