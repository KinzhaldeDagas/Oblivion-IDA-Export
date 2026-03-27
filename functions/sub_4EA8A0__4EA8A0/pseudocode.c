int __cdecl sub_4EA8A0(
        int a1,
        int arg4,
        int _114,
        TESObjectCELL **a4,
        int a5,
        float *a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        float a13,
        float a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        float a28,
        float a29,
        float a30,
        float a31,
        int a32,
        float a33,
        float a34,
        float a35,
        float a36,
        float a37,
        int a38,
        int a39,
        int a40,
        char a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62)
{
  int v62; // ecx
  double v63; // st7
  unsigned __int16 v64; // si
  int v65; // eax
  int v66; // ecx
  double v67; // st5
  double v68; // st6
  double v69; // st5
  int v70; // ecx
  double v71; // st7
  double v72; // st6
  double v73; // st5
  double v74; // st4
  double v75; // st4
  bool v76; // c0
  bool v77; // c3
  double v78; // st6
  double v79; // st5
  int v80; // esi
  double v81; // st6
  double v82; // st7
  double v83; // st7
  double v85; // st6
  double v86; // st6
  float v87; // [esp+14h] [ebp-F0h]
  float v88; // [esp+14h] [ebp-F0h]
  float v89; // [esp+14h] [ebp-F0h]
  float v90; // [esp+14h] [ebp-F0h]
  float v91; // [esp+14h] [ebp-F0h]
  float v92; // [esp+14h] [ebp-F0h]
  float v93; // [esp+14h] [ebp-F0h]
  float v94; // [esp+18h] [ebp-ECh]
  float v95; // [esp+18h] [ebp-ECh]
  float v96; // [esp+1Ch] [ebp-E8h]
  float v97; // [esp+1Ch] [ebp-E8h]
  float v98; // [esp+1Ch] [ebp-E8h]
  float v99; // [esp+1Ch] [ebp-E8h]
  float v100; // [esp+28h] [ebp-DCh]
  float v101; // [esp+28h] [ebp-DCh]
  float v102; // [esp+28h] [ebp-DCh]
  float v103; // [esp+28h] [ebp-DCh]
  float v104; // [esp+28h] [ebp-DCh]
  float a3; // [esp+2Ch] [ebp-D8h] BYREF
  float a2; // [esp+30h] [ebp-D4h] BYREF
  float v107; // [esp+34h] [ebp-D0h]
  float v108; // [esp+38h] [ebp-CCh]
  int v109; // [esp+48h] [ebp-BCh]
  int v110; // [esp+4Ch] [ebp-B8h]
  int v111; // [esp+50h] [ebp-B4h]
  int v112; // [esp+54h] [ebp-B0h]
  int v113; // [esp+58h] [ebp-ACh]
  int v114; // [esp+5Ch] [ebp-A8h]
  float v115; // [esp+60h] [ebp-A4h]
  float v116; // [esp+80h] [ebp-84h]
  float v117; // [esp+84h] [ebp-80h]
  float v118; // [esp+94h] [ebp-70h]
  int v119; // [esp+98h] [ebp-6Ch]
  double v120; // [esp+9Ch] [ebp-68h]
  _BYTE v121[84]; // [esp+A4h] [ebp-60h] BYREF
  int v122; // [esp+100h] [ebp-4h]

  v119 = 0;
  v122 = 0;
  v87 = (double)(unsigned __int8)a18 * dbl_A31C78;
  v88 = cos(v87);
  v117 = v88;
  v89 = (double)(unsigned __int8)a19 * dbl_A31C78;
  v90 = cos(v89);
  v118 = v90;
  if ( !a4 )
    nullsub_return0_0arg();
  if ( !sub_4BF150(a4) )
    goto LABEL_62;
  v62 = dword_B35BF0 << 8;
  v91 = (float)v62;
  v63 = v91;
  v64 = (int)(v91 / *(float *)(a11 + 8));
  v65 = v62 / SettingMinGrassSize;
  v109 = v64;
  if ( v64 > v65 )
  {
    v66 = 0;
    v92 = (double)v65 / (double)v109;
    do
    {
      v67 = *(float *)(a12 + 4 * v66++);
      *(float *)(a12 + 4 * v66 - 4) = v67 / v92;
    }
    while ( v66 < 9 );
    v64 = v65;
  }
  v109 = v64;
  v68 = (double)v64;
  v69 = dbl_A30E48;
  v113 = 0;
  v110 = 0;
  v93 = v69 / v68;
  v115 = v63 / v68;
  v108 = a6[2];
  if ( !v64 )
LABEL_62:
    JUMPOUT(0x4EB0AE);
  v111 = 0;
  v100 = (float)v110;
  v120 = v100 * v115;
  v116 = v100 * v93;
  a2 = *a6 + v120;
  v101 = (float)0;
  v107 = v101 * v115 + a6[1];
  a3 = v101 * v93;
  v114 = (int)v116;
  v112 = (int)a3;
  v70 = v112 + v114 + 2 * v112;
  v94 = v116 - (double)v114;
  a3 = a3 - (double)v112;
  v96 = *(float *)(a12 + 4 * v70);
  v71 = v94;
  v72 = dbl_A3D8E8;
  v73 = a3;
  if ( v72 >= v94 )
  {
    v75 = 0.0;
    a3 = 0.0;
  }
  else
  {
    if ( v114 >= 2 )
      v74 = *(float *)(a12 + 4 * v70);
    else
      v74 = *(float *)(a12 + 4 * v70 + 4);
    a3 = v74;
    if ( v73 <= v72 )
    {
      v75 = 0.0;
    }
    else if ( v112 >= 2 )
    {
      if ( v114 >= 2 )
        v75 = *(float *)(a12 + 4 * v70);
      else
        v75 = *(float *)(a12 + 4 * v70 + 4);
    }
    else if ( v114 >= 2 )
    {
      v75 = *(float *)(a12 + 4 * v70 + 0xC);
    }
    else
    {
      v75 = *(float *)(a12 + 4 * v70 + 0x10);
    }
  }
  v76 = v73 < v72;
  v77 = v73 == v72;
  v78 = v73;
  if ( v76 || v77 )
  {
    v79 = 0.0;
  }
  else if ( v112 >= 2 )
  {
    v79 = *(float *)(a12 + 4 * v70);
  }
  else
  {
    v79 = *(float *)(a12 + 4 * v70 + 0xC);
  }
  v102 = v79;
  v95 = v75;
  v97 = (1.0 - v78) * (a3 * v71 + v96 * (1.0 - v71)) + v78 * ((1.0 - v71) * v102 + v71 * v95);
  v80 = (__int64)(v97 * dbl_A47A50);
  if ( !v80 || Rand3(0x7FFF) >= v80 )
    JUMPOUT(0x4EB051);
  a3 = 0.0;
  v103 = Rand7();
  a2 = v103 * *(float *)(a11 + 8) + a2;
  v104 = Rand7();
  v107 = v104 * *(float *)(a11 + 8) + v107;
  v98 = (float)Double_To_SInt32(a2);
  v81 = v98;
  if ( a2 - v98 < 0.0 )
    v81 = v81 - dbl_A2F928;
  a2 = v81;
  v99 = (float)Double_To_SInt32(0.0);
  v82 = v99;
  if ( v107 - v99 < 0.0 )
    v82 = v82 - dbl_A2F928;
  v107 = v82;
  v108 = 0.0;
  sub_4C3030(a4, (int)v121, &a2, 0);
  GetTerrainHeight(TES, &a2, &a3);
  v83 = a3;
  switch ( a16 )
  {
    case 0:
      if ( *(float *)&a17 - (double)(unsigned __int16)a15 <= v83 )
        return def_4EACCA(
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
                 a11,
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
                 a37,
                 a38,
                 a39,
                 a40,
                 a41,
                 a42,
                 a43,
                 a44,
                 a45,
                 a46,
                 a47,
                 a48,
                 a49,
                 a50,
                 a51,
                 a52,
                 a53,
                 a54,
                 a55,
                 a56,
                 a57,
                 a58,
                 a59,
                 a60,
                 a61,
                 a62);
      goto LABEL_59;
    case 1:
      if ( *(float *)&a17 > v83 )
        goto LABEL_64;
      if ( *(float *)&a17 + (double)(unsigned __int16)a15 < v83 )
        goto LABEL_59;
      goto LABEL_52;
    case 2:
      if ( *(float *)&a17 - (double)(unsigned __int16)a15 >= v83 )
        return def_4EACCA(
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
                 a11,
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
                 a37,
                 a38,
                 a39,
                 a40,
                 a41,
                 a42,
                 a43,
                 a44,
                 a45,
                 a46,
                 a47,
                 a48,
                 a49,
                 a50,
                 a51,
                 a52,
                 a53,
                 a54,
                 a55,
                 a56,
                 a57,
                 a58,
                 a59,
                 a60,
                 a61,
                 a62);
      goto LABEL_59;
    case 3:
      if ( *(float *)&a17 < v83 )
LABEL_64:
        JUMPOUT(0x4EB04D);
      if ( *(float *)&a17 - (double)(unsigned __int16)a15 > v83 )
        goto LABEL_59;
      goto LABEL_52;
    case 4:
      v85 = (double)(unsigned __int16)a15;
      if ( *(float *)&a17 + v85 <= v83 || *(float *)&a17 - v85 >= v83 )
        return def_4EACCA(
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
                 a11,
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
                 a37,
                 a38,
                 a39,
                 a40,
                 a41,
                 a42,
                 a43,
                 a44,
                 a45,
                 a46,
                 a47,
                 a48,
                 a49,
                 a50,
                 a51,
                 a52,
                 a53,
                 a54,
                 a55,
                 a56,
                 a57,
                 a58,
                 a59,
                 a60,
                 a61,
                 a62);
      goto LABEL_59;
    case 5:
      v86 = (double)(unsigned __int16)a15;
      if ( *(float *)&a17 + v86 < v83 )
        JUMPOUT(0x4EB04B);
      if ( *(float *)&a17 - v86 > v83 )
LABEL_59:
        JUMPOUT(0x4EB04F);
      return def_4EACCA(
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
               a11,
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
               a37,
               a38,
               a39,
               a40,
               a41,
               a42,
               a43,
               a44,
               a45,
               a46,
               a47,
               a48,
               a49,
               a50,
               a51,
               a52,
               a53,
               a54,
               a55,
               a56,
               a57,
               a58,
               a59,
               a60,
               a61,
               a62);
    default:
LABEL_52:
      JUMPOUT(0x4EADD5);
  }
}
