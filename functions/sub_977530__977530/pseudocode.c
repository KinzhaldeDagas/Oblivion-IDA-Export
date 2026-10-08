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
  NiTransform v112; // [esp+6Ch] [ebp-34h] BYREF

  *(this + 0x1F) = 0.0; /*0x97753c*/
  *(this + 0x22) = 0.0; /*0x97753f*/
  *(this + 0x20) = 0.0; /*0x977545*/
  *(this + 0x21) = 0.0; /*0x97754b*/
  *(_DWORD *)this = &NiOBBLeaf::`vftable'; /*0x97755e*/
  v7 = 0xC * *(unsigned __int16 *)(a3 + 2 * (unsigned __int16)(3 * a6)); /*0x977587*/
  *((_DWORD *)this + 0x23) = v7 + a5; /*0x97758c*/
  v8 = 0xC * *(unsigned __int16 *)(a3 + 2 * (unsigned __int16)(3 * a6 + 1)); /*0x9775ab*/
  *((_DWORD *)this + 0x24) = v8 + a5; /*0x9775b2*/
  v9 = (float *)(a4 + v7); /*0x9775cb*/
  v10 = 0xC * *(unsigned __int16 *)(a3 + 2 * (unsigned __int16)(3 * a6 + 2)); /*0x9775cf*/
  *((_DWORD *)this + 0x25) = v10 + a5; /*0x9775d3*/
  v109 = (float *)(a4 + v8); /*0x9775df*/
  v11 = this + 4; /*0x9775e9*/
  v108 = (float *)(v10 + a4 + 4); /*0x9775ec*/
  v33 = *(float *)(a4 + v8) + *v9; /*0x9775f0*/
  v42 = *(float *)(a4 + v8 + 4) + v9[1]; /*0x9775fa*/
  v51 = *(float *)(a4 + v8 + 8) + v9[2]; /*0x977604*/
  v103 = (float *)(v10 + a4 + 8); /*0x977613*/
  v81 = *(float *)(v10 + a4) + v33; /*0x977617*/
  v85 = *v108 + v42; /*0x977621*/
  v89 = v51 + *v103; /*0x97762b*/
  v12 = dbl_A7C030; /*0x97763b*/
  v34 = v81 * v12; /*0x97763d*/
  v43 = v85 * v12; /*0x977647*/
  v52 = v12 * v89; /*0x97764f*/
  *(this + 1) = v34; /*0x97765b*/
  *(this + 2) = v43; /*0x977662*/
  *(this + 3) = v52; /*0x977665*/
  v35 = *(float *)(a4 + v8) - *v9; /*0x97766c*/
  v44 = *(float *)(a4 + v8 + 4) - v9[1]; /*0x97767a*/
  v13 = *(float *)(a4 + v8 + 8) - v9[2]; /*0x977685*/
  *(this + 4) = v35; /*0x977688*/
  *(this + 5) = v44; /*0x97768a*/
  v53 = v13; /*0x97768d*/
  *(this + 6) = v53; /*0x977695*/
  Vector3_NormalizeInPlace(this + 4); /*0x97769a*/
  v36 = *(float *)(v10 + a4) - *v9; /*0x9776b8*/
  v45 = *v108 - v9[1]; /*0x9776c5*/
  v14 = *v103 - v9[2]; /*0x9776cf*/
  *(this + 7) = v36; /*0x9776d2*/
  *(this + 8) = v45; /*0x9776d4*/
  v54 = v14; /*0x9776d7*/
  v15 = *(this + 5); /*0x9776df*/
  *(this + 9) = v54; /*0x9776e2*/
  v16 = *v11; /*0x9776e5*/
  v92 = *(this + 8) * v15 + *(this + 7) * v16 + *(this + 9) * *(this + 6); /*0x9776fe*/
  v37 = v16 * v92; /*0x97770c*/
  v46 = v15 * v92; /*0x977716*/
  v55 = *(this + 6) * v92; /*0x97771c*/
  *(this + 7) = *(this + 7) - v37; /*0x977726*/
  *(this + 8) = *(this + 8) - v46; /*0x97772f*/
  *(this + 9) = *(this + 9) - v55; /*0x977739*/
  Vector3_NormalizeInPlace(this + 7); /*0x97773c*/
  v17 = v11[5]; /*0x977743*/
  v18 = *(this + 5); /*0x977746*/
  v19 = v11[4]; /*0x977749*/
  v20 = *(this + 6); /*0x97774c*/
  v38 = v17 * v18 - v19 * v20; /*0x977759*/
  v21 = *(this + 7); /*0x977761*/
  *(this + 0xA) = v38; /*0x977763*/
  v22 = v21 * v20 - v17 * *v11; /*0x977772*/
  v23 = *v11; /*0x977772*/
  v47 = v22; /*0x977774*/
  *(this + 0xB) = v47; /*0x97777e*/
  v24 = v20; /*0x977789*/
  v25 = v19 * v23 - v21 * v18; /*0x977789*/
  v26 = v24; /*0x977789*/
  v56 = v25; /*0x97778b*/
  *(this + 0xC) = v56; /*0x977795*/
  v39 = 0.0; /*0x977798*/
  v48 = 0.0; /*0x97779c*/
  v57 = 0.0; /*0x9777a0*/
  v82 = 0.0; /*0x9777a4*/
  v86 = 0.0; /*0x9777a8*/
  v90 = 0.0; /*0x9777ac*/
  v110 = *(this + 1); /*0x9777b3*/
  v60 = *v9 - v110; /*0x9777b9*/
  v111 = *(this + 2); /*0x9777c0*/
  v67 = v9[1] - v111; /*0x9777c7*/
  v104 = *(this + 3); /*0x9777ce*/
  v74 = v9[2] - v104; /*0x9777d5*/
  v99 = v23 * v60 + v18 * v67 + v24 * v74; /*0x9777f5*/
  v96 = v11[4] * v67 + v11[3] * v60 + v11[5] * v74; /*0x97780b*/
  v93 = v74 * *(this + 0xC) + v60 * *(this + 0xA) + v67 * *(this + 0xB); /*0x977824*/
  if ( v99 >= 0.0 ) /*0x977837*/
  {
    v27 = 0.0; /*0x97784e*/
    if ( v99 > 0.0 ) /*0x97784c*/
      v82 = v99; /*0x977850*/
  }
  else
  {
    v27 = 0.0; /*0x97783b*/
    v39 = v99; /*0x97783d*/
  }
  if ( v96 >= v27 ) /*0x977865*/
  {
    if ( v96 > v27 ) /*0x977876*/
      v86 = v11[4] * v67 + v11[3] * v60 + v11[5] * v74; /*0x977878*/
  }
  else
  {
    v48 = v11[4] * v67 + v11[3] * v60 + v11[5] * v74; /*0x977869*/
  }
  if ( v93 >= v27 ) /*0x97788d*/
  {
    if ( v93 != v27 ) /*0x9778a2*/
      v90 = v74 * *(this + 0xC) + v60 * *(this + 0xA) + v67 * *(this + 0xB); /*0x9778a4*/
  }
  else
  {
    v57 = v74 * *(this + 0xC) + v60 * *(this + 0xA) + v67 * *(this + 0xB); /*0x977893*/
  }
  v61 = *v109 - v110; /*0x9778b6*/
  v68 = v109[1] - v111; /*0x9778c1*/
  v75 = v109[2] - v104; /*0x9778cc*/
  v100 = v23 * v61 + v18 * v68 + v26 * v75; /*0x9778ec*/
  v97 = *(this + 8) * v68 + *(this + 7) * v61 + *(this + 9) * v75; /*0x977902*/
  v94 = v75 * *(this + 0xC) + v61 * *(this + 0xA) + v68 * *(this + 0xB); /*0x97791b*/
  if ( v39 <= (double)v100 ) /*0x977930*/
  {
    if ( v82 < (double)v100 ) /*0x977945*/
      v82 = v23 * v61 + v18 * v68 + v26 * v75; /*0x977947*/
  }
  else
  {
    v39 = v23 * v61 + v18 * v68 + v26 * v75; /*0x977934*/
  }
  if ( v48 <= (double)v97 ) /*0x977960*/
  {
    if ( v86 < (double)v97 ) /*0x977975*/
      v86 = *(this + 8) * v68 + *(this + 7) * v61 + *(this + 9) * v75; /*0x977977*/
  }
  else
  {
    v48 = *(this + 8) * v68 + *(this + 7) * v61 + *(this + 9) * v75; /*0x977964*/
  }
  if ( v57 <= (double)v94 ) /*0x977990*/
  {
    if ( v90 < (double)v94 ) /*0x9779a5*/
      v90 = v75 * *(this + 0xC) + v61 * *(this + 0xA) + v68 * *(this + 0xB); /*0x9779a7*/
  }
  else
  {
    v57 = v75 * *(this + 0xC) + v61 * *(this + 0xA) + v68 * *(this + 0xB); /*0x977994*/
  }
  v62 = *(float *)(v10 + a4) - v110; /*0x9779c9*/
  v69 = *v108 - v111; /*0x9779d3*/
  v76 = *v103 - v104; /*0x9779dd*/
  v101 = v23 * v62 + v18 * v69 + v26 * v76; /*0x9779ff*/
  v98 = *(this + 8) * v69 + *(this + 7) * v62 + *(this + 9) * v76; /*0x977a15*/
  v95 = v76 * *(this + 0xC) + v69 * *(this + 0xB) + v62 * *(this + 0xA); /*0x977a2a*/
  if ( v39 <= (double)v101 ) /*0x977a3f*/
  {
    if ( v82 < (double)v101 ) /*0x977a54*/
      v82 = v23 * v62 + v18 * v69 + v26 * v76; /*0x977a56*/
  }
  else
  {
    v39 = v23 * v62 + v18 * v69 + v26 * v76; /*0x977a43*/
  }
  if ( v48 <= (double)v98 ) /*0x977a6f*/
  {
    if ( v86 < (double)v98 ) /*0x977a84*/
      v86 = *(this + 8) * v69 + *(this + 7) * v62 + *(this + 9) * v76; /*0x977a86*/
  }
  else
  {
    v48 = *(this + 8) * v69 + *(this + 7) * v62 + *(this + 9) * v76; /*0x977a73*/
  }
  if ( v57 <= (double)v95 ) /*0x977a9f*/
  {
    if ( v90 < (double)v95 ) /*0x977ab4*/
      v90 = v76 * *(this + 0xC) + v69 * *(this + 0xB) + v62 * *(this + 0xA); /*0x977ab6*/
  }
  else
  {
    v57 = v76 * *(this + 0xC) + v69 * *(this + 0xB) + v62 * *(this + 0xA); /*0x977aa3*/
  }
  v28 = v39; /*0x977ac2*/
  v63 = v82 - v39; /*0x977aca*/
  v29 = v48; /*0x977ad2*/
  v70 = v86 - v48; /*0x977ada*/
  v30 = v57; /*0x977ae2*/
  v77 = v90 - v57; /*0x977aea*/
  v31 = dbl_A2FAA0; /*0x977afa*/
  v40 = v63 * v31; /*0x977afc*/
  v49 = v70 * v31; /*0x977b06*/
  v58 = v77 * v31; /*0x977b10*/
  *(this + 0xD) = v40; /*0x977b18*/
  *(this + 0xE) = v49; /*0x977b1f*/
  *(this + 0xF) = v58; /*0x977b26*/
  v64 = v28 + v82; /*0x977b2f*/
  v71 = v29 + v86; /*0x977b37*/
  v78 = v30 + v90; /*0x977b3d*/
  v83 = v64 * v31; /*0x977b47*/
  v87 = v71 * v31; /*0x977b51*/
  v102 = v31 * v78; /*0x977b59*/
  v105 = *(this + 0xA) * v102; /*0x977b66*/
  v106 = *(this + 0xB) * v102; /*0x977b6f*/
  v107 = v102 * *(this + 0xC); /*0x977b76*/
  v41 = *(this + 7) * v87; /*0x977b82*/
  v50 = *(this + 8) * v87; /*0x977b8b*/
  v59 = v87 * *(this + 9); /*0x977b92*/
  v65 = *v11 * v83; /*0x977b9e*/
  v72 = *(this + 5) * v83; /*0x977ba7*/
  v79 = v83 * *(this + 6); /*0x977bae*/
  v84 = v65 + v41; /*0x977bba*/
  v88 = v72 + v50; /*0x977bc6*/
  v91 = v79 + v59; /*0x977bd6*/
  v66 = v84 + v105; /*0x977be2*/
  v73 = v88 + v106; /*0x977bee*/
  v80 = v91 + v107; /*0x977bfa*/
  *(this + 1) = *(this + 1) + v66; /*0x977c05*/
  *(this + 2) = *(this + 2) + v73; /*0x977c0f*/
  *(this + 3) = v80 + *(this + 3); /*0x977c19*/
  sub_718A50((float *)&v112); /*0x977c1c*/
  sub_97AEC0((NiPoint3 *)(this + 1), &v112); /*0x977c29*/
  *((_DWORD *)this + 0x1F) = a2; /*0x977c37*/
  return this; /*0x977c35*/
}
