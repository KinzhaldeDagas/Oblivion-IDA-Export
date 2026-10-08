int ***__cdecl sub_4EA8A0(
        int a1,
        int arg4,
        int _114,
        TESObjectCELL **a4,
        int a5,
        float *a6,
        int a7,
        float a8,
        float a9,
        float a10,
        int a11,
        int a12,
        float a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int ***a18,
        int a19,
        int a20,
        float a21,
        float a22,
        float a23,
        int a24,
        int a25,
        int a26,
        int a27,
        float a28,
        float a29,
        float a30,
        float a31,
        float a32,
        float a33,
        float a34,
        float a35,
        float a36,
        float a37)
{
  int v37; // ecx
  double v38; // st7
  unsigned __int16 v39; // si
  int v40; // eax
  int v41; // ecx
  double v42; // st5
  double v43; // st6
  double v44; // st5
  int v45; // ecx
  double v46; // st7
  double v47; // st6
  double v48; // st5
  double v49; // st4
  double v50; // st4
  bool v51; // c0
  bool v52; // c3
  double v53; // st6
  double v54; // st5
  int v55; // esi
  double v56; // st6
  double v57; // st7
  char v58; // bl
  double v59; // st7
  double v61; // st6
  double v62; // st6
  float v63; // [esp+14h] [ebp-F0h]
  float v64; // [esp+14h] [ebp-F0h]
  float v65; // [esp+14h] [ebp-F0h]
  float v66; // [esp+14h] [ebp-F0h]
  float v67; // [esp+14h] [ebp-F0h]
  float v68; // [esp+14h] [ebp-F0h]
  float v69; // [esp+14h] [ebp-F0h]
  float v70; // [esp+18h] [ebp-ECh]
  float v71; // [esp+18h] [ebp-ECh]
  float v72; // [esp+1Ch] [ebp-E8h]
  float v73; // [esp+1Ch] [ebp-E8h]
  float v74; // [esp+1Ch] [ebp-E8h]
  float v75; // [esp+1Ch] [ebp-E8h]
  float v76; // [esp+28h] [ebp-DCh]
  float v77; // [esp+28h] [ebp-DCh]
  float v78; // [esp+28h] [ebp-DCh]
  float v79; // [esp+28h] [ebp-DCh]
  float v80; // [esp+28h] [ebp-DCh]
  float a3; // [esp+2Ch] [ebp-D8h] BYREF
  float a2; // [esp+30h] [ebp-D4h] BYREF
  float v83; // [esp+34h] [ebp-D0h]
  float v84; // [esp+38h] [ebp-CCh]
  int v85; // [esp+48h] [ebp-BCh]
  int v86; // [esp+4Ch] [ebp-B8h]
  int v87; // [esp+50h] [ebp-B4h]
  int v88; // [esp+54h] [ebp-B0h]
  int v89; // [esp+58h] [ebp-ACh]
  int v90; // [esp+5Ch] [ebp-A8h]
  float v91; // [esp+60h] [ebp-A4h]
  float v92; // [esp+80h] [ebp-84h]
  float v93; // [esp+84h] [ebp-80h]
  float v94; // [esp+94h] [ebp-70h]
  int v95; // [esp+98h] [ebp-6Ch]
  double v96; // [esp+9Ch] [ebp-68h]
  _BYTE v97[84]; // [esp+A4h] [ebp-60h] BYREF
  int v98; // [esp+100h] [ebp-4h]
  int savedregs; // [esp+104h] [ebp+0h] BYREF

  v95 = 0; /*0x4ea8d4*/
  v98 = 0; /*0x4ea8e3*/
  v63 = (double)(unsigned __int8)a18 * dbl_A31C78; /*0x4ea8f4*/
  v64 = cos(v63); /*0x4ea901*/
  v93 = v64; /*0x4ea90d*/
  v65 = (double)(unsigned __int8)a19 * dbl_A31C78; /*0x4ea922*/
  v66 = cos(v65); /*0x4ea92f*/
  v94 = v66; /*0x4ea93c*/
  if ( !a4 ) /*0x4ea943*/
    nullsub_return0_0arg(); /*0x4ea954*/
  if ( !sub_4BF150(a4) ) /*0x4ea95e*/
    goto LABEL_62; /*0x4ea95e*/
  v37 = flt_B35BF0 << 8; /*0x4ea978*/
  v67 = (float)v37; /*0x4ea990*/
  v38 = v67; /*0x4ea994*/
  v39 = (int)(v67 / *(float *)(a11 + 8)); /*0x4ea9b0*/
  v40 = v37 / SettingMinGrassSize; /*0x4ea9b8*/
  v85 = v39; /*0x4ea9c1*/
  if ( v39 > v40 ) /*0x4ea9cb*/
  {
    v41 = 0; /*0x4ea9d1*/
    v68 = (double)v40 / (double)v85; /*0x4ea9d7*/
    do /*0x4ea9ee*/
    {
      v42 = *(float *)(a12 + 4 * v41++); /*0x4ea9df*/
      *(float *)(a12 + 4 * v41 - 4) = v42 / v68; /*0x4ea9ea*/
    }
    while ( v41 < 9 ); /*0x4ea9ee*/
    v39 = v40; /*0x4ea9f2*/
  }
  v85 = v39; /*0x4ea9f8*/
  v43 = (double)v39; /*0x4eaa03*/
  v44 = dbl_A30E48; /*0x4eaa07*/
  v89 = 0; /*0x4eaa0d*/
  v86 = 0; /*0x4eaa11*/
  v69 = v44 / v43; /*0x4eaa17*/
  v91 = v38 / v43; /*0x4eaa1d*/
  v84 = a6[2]; /*0x4eaa24*/
  if ( !v39 ) /*0x4eaa28*/
LABEL_62:
    JUMPOUT(0x4EB0AE); /*0x4eb0ae*/
  v87 = 0; /*0x4eaa3a*/
  v76 = (float)v86; /*0x4eaa42*/
  v96 = v76 * v91; /*0x4eaa50*/
  v92 = v76 * v69; /*0x4eaa5b*/
  a2 = *a6 + v96; /*0x4eaa73*/
  v77 = (float)0; /*0x4eaa7b*/
  v83 = v77 * v91 + a6[1]; /*0x4eaa8c*/
  a3 = v77 * v69; /*0x4eaa94*/
  v90 = (int)v92; /*0x4eaaa7*/
  v88 = (int)a3; /*0x4eaaaf*/
  v45 = v88 + v90 + 2 * v88; /*0x4eaac6*/
  v70 = v92 - (double)v90; /*0x4eaac9*/
  a3 = a3 - (double)v88; /*0x4eaad5*/
  v72 = *(float *)(a12 + 4 * v45); /*0x4eaadc*/
  v46 = v70; /*0x4eaae0*/
  v47 = dbl_A3D8E8; /*0x4eaae4*/
  v48 = a3; /*0x4eaaee*/
  if ( v47 >= v70 ) /*0x4eaaf5*/
  {
    v50 = 0.0; /*0x4eab3c*/
    a3 = 0.0; /*0x4eab3e*/
  }
  else
  {
    if ( v90 >= 2 ) /*0x4eaafa*/
      v49 = *(float *)(a12 + 4 * v45); /*0x4eab02*/
    else
      v49 = *(float *)(a12 + 4 * v45 + 4); /*0x4eaafc*/
    a3 = v49; /*0x4eab05*/
    if ( v48 <= v47 ) /*0x4eab10*/
    {
      v50 = 0.0; /*0x4eab38*/
    }
    else if ( v88 >= 2 ) /*0x4eab15*/
    {
      if ( v90 >= 2 ) /*0x4eab2b*/
        v50 = *(float *)(a12 + 4 * v45); /*0x4eab33*/
      else
        v50 = *(float *)(a12 + 4 * v45 + 4); /*0x4eab2d*/
    }
    else if ( v90 >= 2 ) /*0x4eab1a*/
    {
      v50 = *(float *)(a12 + 4 * v45 + 0xC); /*0x4eab22*/
    }
    else
    {
      v50 = *(float *)(a12 + 4 * v45 + 0x10); /*0x4eab1c*/
    }
  }
  v51 = v48 < v47; /*0x4eab46*/
  v52 = v48 == v47; /*0x4eab46*/
  v53 = v48; /*0x4eab4a*/
  if ( v51 || v52 ) /*0x4eab4c*/
  {
    v54 = 0.0; /*0x4eab61*/
  }
  else if ( v88 >= 2 ) /*0x4eab54*/
  {
    v54 = *(float *)(a12 + 4 * v45); /*0x4eab5c*/
  }
  else
  {
    v54 = *(float *)(a12 + 4 * v45 + 0xC); /*0x4eab56*/
  }
  v78 = v54; /*0x4eab63*/
  v71 = v50; /*0x4eab42*/
  v73 = (1.0 - v53) * (a3 * v46 + v72 * (1.0 - v46)) + v53 * ((1.0 - v46) * v78 + v46 * v71); /*0x4eaba5*/
  v55 = (__int64)(v73 * kFaceGenCRTRandRadix32768); /*0x4eabbf*/
  if ( !v55 || Game_RandomIntBelow(0x7FFF) >= v55 ) /*0x4eabde*/
    JUMPOUT(0x4EB051); /*0x4eb051*/
  a3 = 0.0; /*0x4eabe6*/
  v79 = Rand7(); /*0x4eabef*/
  a2 = v79 * *(float *)(a11 + 8) + a2; /*0x4eabfe*/
  v80 = Rand7(); /*0x4eac07*/
  v83 = v80 * *(float *)(a11 + 8) + v83; /*0x4eac16*/
  v74 = (float)Double_To_SInt32(a2); /*0x4eac2d*/
  v56 = v74; /*0x4eac31*/
  if ( a2 - v74 < 0.0 ) /*0x4eac44*/
    v56 = v56 - dbl_A2F928; /*0x4eac46*/
  a2 = v56; /*0x4eac4c*/
  v75 = (float)Double_To_SInt32(0.0); /*0x4eac63*/
  v57 = v75; /*0x4eac75*/
  if ( v83 - v75 < 0.0 ) /*0x4eac7a*/
    v57 = v57 - dbl_A2F928; /*0x4eac7c*/
  v83 = v57; /*0x4eac84*/
  v84 = 0.0; /*0x4eac8f*/
  v58 = sub_4C3030(a4, (int)v97, &a2, 0); /*0x4eaca3*/
  GetTerrainHeight(MEMORY[0xB333A0], &a2, &a3); /*0x4eacb5*/
  v59 = a3; /*0x4eacba*/
  switch ( a16 ) /*0x4eacca*/
  {
    case 0: /*0x4eacca*/
      if ( *(float *)&a17 - (double)(unsigned __int16)a15 <= v59 ) /*0x4eace9*/
        return def_4EACCA( /*0x4eace9*/
                 v58,
                 (int)&savedregs,
                 v59,
                 a1,
                 arg4,
                 _114,
                 (int)a4,
                 a5,
                 *(float *)&a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 *(float *)&a11,
                 *(float *)&a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20,
                 a21,
                 a22,
                 a23,
                 a24,
                 a25,
                 a26,
                 a27,
                 a28,
                 a29,
                 a30,
                 a31,
                 a32,
                 a33,
                 a34,
                 a35,
                 a36,
                 a37);
      goto LABEL_59; /*0x4eace9*/
    case 1: /*0x4eacca*/
      if ( *(float *)&a17 > v59 ) /*0x4eacfe*/
        goto LABEL_64; /*0x4eacfe*/
      if ( *(float *)&a17 + (double)(unsigned __int16)a15 < v59 ) /*0x4ead19*/
        goto LABEL_59; /*0x4ead19*/
      goto LABEL_52; /*0x4ead19*/
    case 2: /*0x4eacca*/
      if ( *(float *)&a17 - (double)(unsigned __int16)a15 >= v59 ) /*0x4ead3c*/
        return def_4EACCA( /*0x4ead3c*/
                 v58,
                 (int)&savedregs,
                 v59,
                 a1,
                 arg4,
                 _114,
                 (int)a4,
                 a5,
                 *(float *)&a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 *(float *)&a11,
                 *(float *)&a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20,
                 a21,
                 a22,
                 a23,
                 a24,
                 a25,
                 a26,
                 a27,
                 a28,
                 a29,
                 a30,
                 a31,
                 a32,
                 a33,
                 a34,
                 a35,
                 a36,
                 a37);
      goto LABEL_59; /*0x4ead3c*/
    case 3: /*0x4eacca*/
      if ( *(float *)&a17 < v59 ) /*0x4ead51*/
LABEL_64:
        JUMPOUT(0x4EB04D); /*0x4eb04d*/
      if ( *(float *)&a17 - (double)(unsigned __int16)a15 > v59 ) /*0x4ead6c*/
        goto LABEL_59; /*0x4ead6c*/
      goto LABEL_52; /*0x4ead6c*/
    case 4: /*0x4eacca*/
      v61 = (double)(unsigned __int16)a15; /*0x4ead7b*/
      if ( *(float *)&a17 + v61 <= v59 || *(float *)&a17 - v61 >= v59 ) /*0x4ead98*/
        return def_4EACCA( /*0x4ead98*/
                 v58,
                 (int)&savedregs,
                 v59,
                 a1,
                 arg4,
                 _114,
                 (int)a4,
                 a5,
                 *(float *)&a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 *(float *)&a11,
                 *(float *)&a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20,
                 a21,
                 a22,
                 a23,
                 a24,
                 a25,
                 a26,
                 a27,
                 a28,
                 a29,
                 a30,
                 a31,
                 a32,
                 a33,
                 a34,
                 a35,
                 a36,
                 a37);
      goto LABEL_59; /*0x4ead98*/
    case 5: /*0x4eacca*/
      v62 = (double)(unsigned __int16)a15; /*0x4eada8*/
      if ( *(float *)&a17 + v62 < v59 ) /*0x4eadba*/
        JUMPOUT(0x4EB04B); /*0x4eb04b*/
      if ( *(float *)&a17 - v62 > v59 ) /*0x4eadc9*/
LABEL_59:
        JUMPOUT(0x4EB04F); /*0x4eb04f*/
      return def_4EACCA(
               v58,
               (int)&savedregs,
               v59,
               a1,
               arg4,
               _114,
               (int)a4,
               a5,
               *(float *)&a6,
               a7,
               a8,
               a9,
               a10,
               *(float *)&a11,
               *(float *)&a12,
               a13,
               a14,
               a15,
               a16,
               a17,
               a18,
               a19,
               a20,
               a21,
               a22,
               a23,
               a24,
               a25,
               a26,
               a27,
               a28,
               a29,
               a30,
               a31,
               a32,
               a33,
               a34,
               a35,
               a36,
               a37);
    default:
LABEL_52:
      JUMPOUT(0x4EADD5); /*0x4eadd5*/
  }
}
