float *__thiscall sub_977530(float *this, int a2, int a3, int a4, int a5, __int16 a6)
{
  int v7; // ebx
  int v8; // eax
  float *v9; // ebx
  int v10; // esi
  float *v11; // edi
  double v12; // rt0
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st3
  double v22; // st2
  double v23; // st7
  double v24; // rtt
  double v25; // st4
  double v26; // st5
  double v27; // st4
  double v28; // st6
  double v29; // st4
  double v30; // st2
  double v31; // rt0
  float v33; // [esp+10h] [ebp-90h]
  float v34; // [esp+10h] [ebp-90h]
  float v35; // [esp+10h] [ebp-90h]
  float v36; // [esp+10h] [ebp-90h]
  float v37; // [esp+10h] [ebp-90h]
  float v38; // [esp+10h] [ebp-90h]
  float v39; // [esp+10h] [ebp-90h]
  float v40; // [esp+10h] [ebp-90h]
  float v41; // [esp+10h] [ebp-90h]
  float v42; // [esp+14h] [ebp-8Ch]
  float v43; // [esp+14h] [ebp-8Ch]
  float v44; // [esp+14h] [ebp-8Ch]
  float v45; // [esp+14h] [ebp-8Ch]
  float v46; // [esp+14h] [ebp-8Ch]
  float v47; // [esp+14h] [ebp-8Ch]
  float v48; // [esp+14h] [ebp-8Ch]
  float v49; // [esp+14h] [ebp-8Ch]
  float v50; // [esp+14h] [ebp-8Ch]
  float v51; // [esp+18h] [ebp-88h]
  float v52; // [esp+18h] [ebp-88h]
  float v53; // [esp+18h] [ebp-88h]
  float v54; // [esp+18h] [ebp-88h]
  float v55; // [esp+18h] [ebp-88h]
  float v56; // [esp+18h] [ebp-88h]
  float v57; // [esp+18h] [ebp-88h]
  float v58; // [esp+18h] [ebp-88h]
  float v59; // [esp+18h] [ebp-88h]
  float v60; // [esp+1Ch] [ebp-84h]
  float v61; // [esp+1Ch] [ebp-84h]
  float v62; // [esp+1Ch] [ebp-84h]
  float v63; // [esp+1Ch] [ebp-84h]
  float v64; // [esp+1Ch] [ebp-84h]
  float v65; // [esp+1Ch] [ebp-84h]
  float v66; // [esp+1Ch] [ebp-84h]
  float v67; // [esp+20h] [ebp-80h]
  float v68; // [esp+20h] [ebp-80h]
  float v69; // [esp+20h] [ebp-80h]
  float v70; // [esp+20h] [ebp-80h]
  float v71; // [esp+20h] [ebp-80h]
  float v72; // [esp+20h] [ebp-80h]
  float v73; // [esp+20h] [ebp-80h]
  float v74; // [esp+24h] [ebp-7Ch]
  float v75; // [esp+24h] [ebp-7Ch]
  float v76; // [esp+24h] [ebp-7Ch]
  float v77; // [esp+24h] [ebp-7Ch]
  float v78; // [esp+24h] [ebp-7Ch]
  float v79; // [esp+24h] [ebp-7Ch]
  float v80; // [esp+24h] [ebp-7Ch]
  float v81; // [esp+28h] [ebp-78h]
  float v82; // [esp+28h] [ebp-78h]
  float v83; // [esp+28h] [ebp-78h]
  float v84; // [esp+28h] [ebp-78h]
  float v85; // [esp+2Ch] [ebp-74h]
  float v86; // [esp+2Ch] [ebp-74h]
  float v87; // [esp+2Ch] [ebp-74h]
  float v88; // [esp+2Ch] [ebp-74h]
  float v89; // [esp+30h] [ebp-70h]
  float v90; // [esp+30h] [ebp-70h]
  float v91; // [esp+30h] [ebp-70h]
  float v92; // [esp+34h] [ebp-6Ch]
  float v93; // [esp+34h] [ebp-6Ch]
  float v94; // [esp+34h] [ebp-6Ch]
  float v95; // [esp+34h] [ebp-6Ch]
  float v96; // [esp+38h] [ebp-68h]
  float v97; // [esp+38h] [ebp-68h]
  float v98; // [esp+38h] [ebp-68h]
  float v99; // [esp+3Ch] [ebp-64h]
  float v100; // [esp+3Ch] [ebp-64h]
  float v101; // [esp+3Ch] [ebp-64h]
  float v102; // [esp+40h] [ebp-60h]
  float *v103; // [esp+44h] [ebp-5Ch]
  double v104; // [esp+48h] [ebp-58h]
  float v105; // [esp+48h] [ebp-58h]
  float v106; // [esp+4Ch] [ebp-54h]
  float v107; // [esp+50h] [ebp-50h]
  float *v108; // [esp+54h] [ebp-4Ch]
  float *v109; // [esp+58h] [ebp-48h]
  double v110; // [esp+5Ch] [ebp-44h]
  double v111; // [esp+64h] [ebp-3Ch]
  float v112[13]; // [esp+6Ch] [ebp-34h] BYREF

  *(this + 0x1F) = 0.0;
  *(this + 0x22) = 0.0;
  *(this + 0x20) = 0.0;
  *(this + 0x21) = 0.0;
  *(_DWORD *)this = &NiOBBLeaf::`vftable';
  v7 = 0xC * *(unsigned __int16 *)(a3 + 2 * (unsigned __int16)(3 * a6));
  *((_DWORD *)this + 0x23) = v7 + a5;
  v8 = 0xC * *(unsigned __int16 *)(a3 + 2 * (unsigned __int16)(3 * a6 + 1));
  *((_DWORD *)this + 0x24) = v8 + a5;
  v9 = (float *)(a4 + v7);
  v10 = 0xC * *(unsigned __int16 *)(a3 + 2 * (unsigned __int16)(3 * a6 + 2));
  *((_DWORD *)this + 0x25) = v10 + a5;
  v109 = (float *)(a4 + v8);
  v11 = this + 4;
  v108 = (float *)(v10 + a4 + 4);
  v33 = *(float *)(a4 + v8) + *v9;
  v42 = *(float *)(a4 + v8 + 4) + v9[1];
  v51 = *(float *)(a4 + v8 + 8) + v9[2];
  v103 = (float *)(v10 + a4 + 8);
  v81 = *(float *)(v10 + a4) + v33;
  v85 = *v108 + v42;
  v89 = v51 + *v103;
  v12 = dbl_A7C030;
  v34 = v81 * v12;
  v43 = v85 * v12;
  v52 = v12 * v89;
  *(this + 1) = v34;
  *(this + 2) = v43;
  *(this + 3) = v52;
  v35 = *(float *)(a4 + v8) - *v9;
  v44 = *(float *)(a4 + v8 + 4) - v9[1];
  v13 = *(float *)(a4 + v8 + 8) - v9[2];
  *(this + 4) = v35;
  *(this + 5) = v44;
  v53 = v13;
  *(this + 6) = v53;
  sub_43F350(this + 4);
  v36 = *(float *)(v10 + a4) - *v9;
  v45 = *v108 - v9[1];
  v14 = *v103 - v9[2];
  *(this + 7) = v36;
  *(this + 8) = v45;
  v54 = v14;
  v15 = *(this + 5);
  *(this + 9) = v54;
  v16 = *v11;
  v92 = *(this + 8) * v15 + *(this + 7) * v16 + *(this + 9) * *(this + 6);
  v37 = v16 * v92;
  v46 = v15 * v92;
  v55 = *(this + 6) * v92;
  *(this + 7) = *(this + 7) - v37;
  *(this + 8) = *(this + 8) - v46;
  *(this + 9) = *(this + 9) - v55;
  sub_43F350(this + 7);
  v17 = v11[5];
  v18 = *(this + 5);
  v19 = v11[4];
  v20 = *(this + 6);
  v38 = v17 * v18 - v19 * v20;
  v21 = *(this + 7);
  *(this + 0xA) = v38;
  v22 = v21 * v20 - v17 * *v11;
  v23 = *v11;
  v47 = v22;
  *(this + 0xB) = v47;
  v24 = v20;
  v25 = v19 * v23 - v21 * v18;
  v26 = v24;
  v56 = v25;
  *(this + 0xC) = v56;
  v39 = 0.0;
  v48 = 0.0;
  v57 = 0.0;
  v82 = 0.0;
  v86 = 0.0;
  v90 = 0.0;
  v110 = *(this + 1);
  v60 = *v9 - v110;
  v111 = *(this + 2);
  v67 = v9[1] - v111;
  v104 = *(this + 3);
  v74 = v9[2] - v104;
  v99 = v23 * v60 + v18 * v67 + v24 * v74;
  v96 = v11[4] * v67 + v11[3] * v60 + v11[5] * v74;
  v93 = v74 * *(this + 0xC) + v60 * *(this + 0xA) + v67 * *(this + 0xB);
  if ( v99 >= 0.0 )
  {
    v27 = 0.0;
    if ( v99 > 0.0 )
      v82 = v99;
  }
  else
  {
    v27 = 0.0;
    v39 = v99;
  }
  if ( v96 >= v27 )
  {
    if ( v96 > v27 )
      v86 = v11[4] * v67 + v11[3] * v60 + v11[5] * v74;
  }
  else
  {
    v48 = v11[4] * v67 + v11[3] * v60 + v11[5] * v74;
  }
  if ( v93 >= v27 )
  {
    if ( v93 != v27 )
      v90 = v74 * *(this + 0xC) + v60 * *(this + 0xA) + v67 * *(this + 0xB);
  }
  else
  {
    v57 = v74 * *(this + 0xC) + v60 * *(this + 0xA) + v67 * *(this + 0xB);
  }
  v61 = *v109 - v110;
  v68 = v109[1] - v111;
  v75 = v109[2] - v104;
  v100 = v23 * v61 + v18 * v68 + v26 * v75;
  v97 = *(this + 8) * v68 + *(this + 7) * v61 + *(this + 9) * v75;
  v94 = v75 * *(this + 0xC) + v61 * *(this + 0xA) + v68 * *(this + 0xB);
  if ( v39 <= (double)v100 )
  {
    if ( v82 < (double)v100 )
      v82 = v23 * v61 + v18 * v68 + v26 * v75;
  }
  else
  {
    v39 = v23 * v61 + v18 * v68 + v26 * v75;
  }
  if ( v48 <= (double)v97 )
  {
    if ( v86 < (double)v97 )
      v86 = *(this + 8) * v68 + *(this + 7) * v61 + *(this + 9) * v75;
  }
  else
  {
    v48 = *(this + 8) * v68 + *(this + 7) * v61 + *(this + 9) * v75;
  }
  if ( v57 <= (double)v94 )
  {
    if ( v90 < (double)v94 )
      v90 = v75 * *(this + 0xC) + v61 * *(this + 0xA) + v68 * *(this + 0xB);
  }
  else
  {
    v57 = v75 * *(this + 0xC) + v61 * *(this + 0xA) + v68 * *(this + 0xB);
  }
  v62 = *(float *)(v10 + a4) - v110;
  v69 = *v108 - v111;
  v76 = *v103 - v104;
  v101 = v23 * v62 + v18 * v69 + v26 * v76;
  v98 = *(this + 8) * v69 + *(this + 7) * v62 + *(this + 9) * v76;
  v95 = v76 * *(this + 0xC) + v69 * *(this + 0xB) + v62 * *(this + 0xA);
  if ( v39 <= (double)v101 )
  {
    if ( v82 < (double)v101 )
      v82 = v23 * v62 + v18 * v69 + v26 * v76;
  }
  else
  {
    v39 = v23 * v62 + v18 * v69 + v26 * v76;
  }
  if ( v48 <= (double)v98 )
  {
    if ( v86 < (double)v98 )
      v86 = *(this + 8) * v69 + *(this + 7) * v62 + *(this + 9) * v76;
  }
  else
  {
    v48 = *(this + 8) * v69 + *(this + 7) * v62 + *(this + 9) * v76;
  }
  if ( v57 <= (double)v95 )
  {
    if ( v90 < (double)v95 )
      v90 = v76 * *(this + 0xC) + v69 * *(this + 0xB) + v62 * *(this + 0xA);
  }
  else
  {
    v57 = v76 * *(this + 0xC) + v69 * *(this + 0xB) + v62 * *(this + 0xA);
  }
  v28 = v39;
  v63 = v82 - v39;
  v29 = v48;
  v70 = v86 - v48;
  v30 = v57;
  v77 = v90 - v57;
  v31 = dbl_A2FAA0;
  v40 = v63 * v31;
  v49 = v70 * v31;
  v58 = v77 * v31;
  *(this + 0xD) = v40;
  *(this + 0xE) = v49;
  *(this + 0xF) = v58;
  v64 = v28 + v82;
  v71 = v29 + v86;
  v78 = v30 + v90;
  v83 = v64 * v31;
  v87 = v71 * v31;
  v102 = v31 * v78;
  v105 = *(this + 0xA) * v102;
  v106 = *(this + 0xB) * v102;
  v107 = v102 * *(this + 0xC);
  v41 = *(this + 7) * v87;
  v50 = *(this + 8) * v87;
  v59 = v87 * *(this + 9);
  v65 = *v11 * v83;
  v72 = *(this + 5) * v83;
  v79 = v83 * *(this + 6);
  v84 = v65 + v41;
  v88 = v72 + v50;
  v91 = v79 + v59;
  v66 = v84 + v105;
  v73 = v88 + v106;
  v80 = v91 + v107;
  *(this + 1) = *(this + 1) + v66;
  *(this + 2) = *(this + 2) + v73;
  *(this + 3) = v80 + *(this + 3);
  sub_718A50(v112);
  sub_97AEC0(this + 1, v112);
  *((_DWORD *)this + 0x1F) = a2;
  return this;
}
