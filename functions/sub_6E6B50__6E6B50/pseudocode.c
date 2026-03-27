int __thiscall sub_6E6B50(float *this, float a2, _DWORD *a3, int *a4)
{
  int result; // eax
  int v6; // ecx
  double v7; // st6
  int v8; // edi
  int v9; // ecx
  double v10; // st5
  double v11; // st6
  bool v12; // cc
  double v13; // st5
  int v14; // ecx
  int v15; // edx
  double v16; // st6
  double v17; // st7
  double v18; // st5
  double v19; // st6
  double v20; // rt2
  double v21; // st5
  double v22; // st7
  double v23; // st5
  double v24; // st7
  double v25; // rt1
  double v26; // st5
  double v27; // st7
  double v28; // rt2
  double v29; // st5
  double v30; // rtt
  double v31; // rt0
  double v32; // st5
  double v33; // rt1
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st3
  double v38; // st6
  double v39; // st7
  double v40; // rt2
  double v41; // st5
  double v42; // st4
  double v43; // st6
  double v44; // st4
  double v45; // st6
  double v46; // st4
  double v47; // st5
  double v48; // st7
  double v49; // st6
  double v50; // rt0
  double v51; // st4
  double v52; // st3
  double v53; // st7
  double v54; // st6
  double v55; // rt2
  double v56; // st5
  double v57; // st4
  double v58; // st6
  double v59; // st4
  double v60; // st6
  double v61; // st5
  double v62; // st5
  double v63; // st4
  double v64; // st7
  double v65; // st6
  double v66; // st5
  int v67; // [esp+4h] [ebp-24h]
  float v68; // [esp+4h] [ebp-24h]
  float v69; // [esp+8h] [ebp-20h]
  float v70; // [esp+Ch] [ebp-1Ch]
  float v71; // [esp+Ch] [ebp-1Ch]
  float v72; // [esp+10h] [ebp-18h]
  float v73; // [esp+14h] [ebp-14h]
  float v74; // [esp+18h] [ebp-10h]
  float v75; // [esp+1Ch] [ebp-Ch]
  float v76; // [esp+20h] [ebp-8h]
  float v77; // [esp+20h] [ebp-8h]
  float v78; // [esp+20h] [ebp-8h]
  float v79; // [esp+24h] [ebp-4h]
  float v80; // [esp+24h] [ebp-4h]
  float v81; // [esp+24h] [ebp-4h]
  float v82; // [esp+24h] [ebp-4h]
  float v83; // [esp+24h] [ebp-4h]
  float v84; // [esp+24h] [ebp-4h]
  float v85; // [esp+24h] [ebp-4h]
  float v86; // [esp+2Ch] [ebp+4h]
  float v87; // [esp+2Ch] [ebp+4h]
  float v88; // [esp+2Ch] [ebp+4h]
  float v89; // [esp+2Ch] [ebp+4h]
  float v90; // [esp+2Ch] [ebp+4h]
  float v91; // [esp+2Ch] [ebp+4h]
  float v92; // [esp+2Ch] [ebp+4h]
  float v93; // [esp+2Ch] [ebp+4h]
  float v94; // [esp+2Ch] [ebp+4h]
  float v95; // [esp+2Ch] [ebp+4h]
  float v96; // [esp+2Ch] [ebp+4h]
  float v97; // [esp+2Ch] [ebp+4h]
  float v98; // [esp+2Ch] [ebp+4h]
  float v99; // [esp+2Ch] [ebp+4h]
  float v100; // [esp+2Ch] [ebp+4h]
  float v101; // [esp+2Ch] [ebp+4h]
  float v102; // [esp+2Ch] [ebp+4h]
  float v103; // [esp+2Ch] [ebp+4h]
  float v104; // [esp+2Ch] [ebp+4h]
  float v105; // [esp+30h] [ebp+8h]
  float v106; // [esp+30h] [ebp+8h]
  float v107; // [esp+30h] [ebp+8h]
  float v108; // [esp+30h] [ebp+8h]
  float v109; // [esp+30h] [ebp+8h]
  float v110; // [esp+30h] [ebp+8h]
  float v111; // [esp+30h] [ebp+8h]
  float v112; // [esp+30h] [ebp+8h]
  float v113; // [esp+30h] [ebp+8h]
  float v114; // [esp+30h] [ebp+8h]
  float v115; // [esp+30h] [ebp+8h]
  float v116; // [esp+30h] [ebp+8h]
  float v117; // [esp+30h] [ebp+8h]
  float v118; // [esp+30h] [ebp+8h]
  float v119; // [esp+30h] [ebp+8h]
  float v120; // [esp+30h] [ebp+8h]
  float v121; // [esp+34h] [ebp+Ch]
  float v122; // [esp+34h] [ebp+Ch]
  float v123; // [esp+34h] [ebp+Ch]
  float v124; // [esp+34h] [ebp+Ch]
  float v125; // [esp+34h] [ebp+Ch]
  float v126; // [esp+34h] [ebp+Ch]
  float v127; // [esp+34h] [ebp+Ch]
  float v128; // [esp+34h] [ebp+Ch]
  float v129; // [esp+34h] [ebp+Ch]
  float v130; // [esp+34h] [ebp+Ch]

  if ( LODWORD(a2) == *((_DWORD *)this + 5) )
  {
    *a3 = *((_DWORD *)this + 6);
    *a4 = *((_DWORD *)this + 7);
    return (int)a4;
  }
  else
  {
    v6 = *(_DWORD *)this;
    v7 = a2;
    *(this + 5) = a2;
    v8 = v6 - 3;
    v67 = v6 - 3;
    if ( a2 >= 1.0 )
      result = v6 - 1;
    else
      result = Double_To_SInt32(1.0) + 3;
    *a3 = result - 3;
    v86 = (float)v67;
    *((_DWORD *)this + 6) = result - 3;
    *a4 = result;
    v9 = *(_DWORD *)this;
    v10 = v7 * v86;
    v11 = v86;
    v12 = *(_DWORD *)this < 7;
    v87 = v10;
    *((_DWORD *)this + 7) = result;
    if ( v12 )
    {
      switch ( v9 )
      {
        case 6:
          v39 = v87;
          if ( result == 3 )
          {
            v89 = 1.0 - v39;
            v123 = dbl_A3D0C0 - v39;
            v40 = dbl_A2FAA0;
            v109 = v39 * v40;
            v41 = v89;
            v90 = v89 * v89;
            v42 = v109;
            v43 = v123;
            v110 = v40 * (v109 * v123 + v41 * v39);
            v124 = v42 * (v39 * dbl_A7C030);
            *(this + 1) = v41 * v90;
            *(this + 2) = v90 * v39 + v43 * v110;
            v91 = dbl_A30E48 - v39;
            *(this + 3) = v110 * v39 + v91 * v124;
            *(this + 4) = v39 * v124;
          }
          else
          {
            if ( result == 4 )
            {
              v111 = v39 - 1.0;
              v125 = dbl_A30E48 - v39;
              v44 = dbl_A2FAA0;
              v92 = v39 * v44;
              v93 = 1.0 - v92;
              v45 = v111;
              v112 = v44 * v111;
              v83 = v93 * v93;
              v46 = v112;
              v47 = v125;
              v113 = (v93 * v39 + v112 * v125) * dbl_A7C030;
              v126 = v46 * v46;
              v94 = dbl_A3D0C0 - v39;
              *(this + 1) = v94 * v83;
              *(this + 2) = v83 * v39 + v113 * v47;
              *(this + 3) = v39 * v113 + v47 * v126;
              v48 = v126 * v45;
            }
            else
            {
              v127 = v39 - dbl_A2F928;
              v114 = v39 - dbl_A3D0C0;
              v95 = dbl_A30E48 - v39;
              v49 = v95;
              v50 = dbl_A2FAA0;
              v96 = v95 * v50;
              v51 = v114;
              v84 = v114 * v114;
              v52 = v96;
              v97 = v49 * dbl_A7C030 * v96;
              v115 = v50 * (v52 * v127 + v49 * v114);
              *(this + 1) = v97 * v49;
              *(this + 2) = v39 * v97 + v115 * v49;
              *(this + 3) = v127 * v115 + v49 * v84;
              v48 = v84 * v51;
            }
            *(this + 4) = v48;
          }
          break;
        case 5:
          v53 = v87;
          v54 = v87;
          if ( result == 3 )
          {
            v98 = 1.0 - v54;
            v128 = dbl_A3D0C0 - v53;
            v55 = dbl_A2FAA0;
            v116 = v53 * v55;
            v56 = v98;
            v99 = v98 * v98;
            v57 = v116;
            v58 = v128;
            v117 = v55 * (v116 * v128 + v56 * v53);
            v129 = v57 * v57;
            *(this + 1) = v56 * v99;
            *(this + 2) = v99 * v53 + v117 * v58;
            v59 = v58 * v129;
            v60 = v129;
            v61 = v117 * v53 + v59;
          }
          else
          {
            v100 = v54 - 1.0;
            v130 = dbl_A3D0C0 - v53;
            v118 = v53 * dbl_A2FAA0;
            v62 = v100;
            v85 = v100 * v100;
            v101 = 1.0 - v118;
            v63 = v101;
            v102 = v101 * v101;
            v60 = v62;
            v119 = (v118 + v62) * v63;
            *(this + 1) = v102 * v130;
            *(this + 2) = v102 * v53 + v119 * v130;
            v61 = v53 * v119 + v130 * v85;
            v53 = v85;
          }
          *(this + 3) = v61;
          *(this + 4) = v53 * v60;
          break;
        case 4:
          v64 = v87;
          v103 = 1.0 - v87;
          v120 = v64 * v64;
          v65 = v103;
          v104 = v103 * v103;
          *(this + 1) = v104 * v65;
          v66 = dbl_A30E48;
          *(this + 2) = v104 * (v64 * v66);
          *(this + 3) = v65 * (v66 * v120);
          *(this + 4) = v64 * v120;
          break;
      }
    }
    else
    {
      v13 = 0.0;
      v14 = v8 + 1;
      v15 = v8 + 2;
      if ( result <= 5 )
        v74 = 0.0;
      else
        v74 = (float)(result - 5);
      if ( result > 4 )
        v13 = (double)(result - 4);
      v68 = v13;
      if ( result >= v14 )
        v70 = v11;
      else
        v70 = (float)(result - 1);
      if ( result < v8 )
        v11 = (double)result;
      v75 = v11;
      if ( result == 3 )
      {
        v16 = 1.0;
        v17 = flt_A3D65C;
        v69 = 1.0;
      }
      else
      {
        v69 = flt_A3D65C;
        v16 = 1.0;
        v17 = v69;
      }
      if ( result == v15 )
        v72 = v16;
      else
        v72 = v17;
      if ( result == 3 )
      {
        v18 = v16;
        v19 = flt_A7C038;
        v105 = v18;
        v20 = v18;
        v21 = v17;
        v22 = v20;
        v73 = v21;
      }
      else
      {
        if ( result == 4 )
        {
          v23 = v17;
          v24 = flt_A7C038;
          v105 = v23;
        }
        else
        {
          v105 = flt_A7C038;
          v23 = v17;
          v24 = v105;
        }
        v25 = v23;
        v26 = v24;
        v27 = v25;
        if ( result == v15 )
        {
          v31 = v26;
          v32 = v16;
          v19 = v31;
          v33 = v32;
          v21 = v27;
          v22 = v33;
          v73 = v21;
        }
        else
        {
          v73 = v26;
          v28 = v26;
          v29 = v16;
          v19 = v28;
          v30 = v29;
          v21 = v27;
          v22 = v30;
        }
      }
      if ( result != v15 )
      {
        v22 = v21;
        if ( result != v14 )
          v22 = v19;
      }
      v121 = v22;
      v34 = v87;
      v88 = v87 - v68;
      v76 = (float)(result - 3);
      v77 = v34 - v76;
      v79 = (float)(result - 2);
      v80 = v79 - v34;
      v71 = v70 - v34;
      v35 = v80;
      v81 = v80 * v69;
      v36 = v77;
      v78 = v77 * v72;
      v106 = v35 * v105 * v81;
      v82 = (v81 * v88 + v78 * v71) * v73;
      v122 = v78 * (v36 * v121);
      v37 = v35 * v106;
      v38 = v106;
      *(this + 1) = v37;
      v107 = v34 - v74;
      *(this + 2) = v71 * v82 + v38 * v107;
      v108 = v75 - v34;
      *(this + 3) = v82 * v88 + v108 * v122;
      *(this + 4) = v36 * v122;
    }
  }
  return result;
}
