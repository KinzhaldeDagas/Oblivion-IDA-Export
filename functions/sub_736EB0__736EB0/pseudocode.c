char __cdecl sub_736EB0(
        int a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
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
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38)
{
  _BYTE *v38; // esi
  unsigned int v39; // ebp
  char result; // al
  unsigned __int8 v41; // bl
  unsigned int v42; // ebp
  unsigned int v43; // edi
  void (__cdecl *v44)(int, _BYTE *, unsigned int, int *, int); // ecx
  unsigned int v45; // edi
  _WORD *v46; // ebp
  unsigned __int8 v47; // dl
  unsigned int v48; // eax
  unsigned int i; // edi
  char v50; // cl
  _BYTE *v51; // esi
  unsigned int v52; // eax
  unsigned int v53; // edi
  unsigned __int8 j; // bl
  char v55; // cl
  unsigned __int8 v56; // bl
  _BYTE *v57; // esi
  unsigned int v58; // eax
  unsigned int k; // edi
  char v60; // cl
  _BYTE *v61; // esi
  unsigned int v62; // eax
  unsigned int v63; // edi
  unsigned __int8 m; // bl
  bool v65; // zf
  unsigned int v66; // edi
  _WORD *v67; // ebp
  unsigned __int8 v68; // dl
  unsigned int v69; // eax
  unsigned int n; // edi
  char v71; // cl
  _BYTE *v72; // esi
  unsigned int v73; // eax
  unsigned int v74; // edi
  unsigned __int8 ii; // bl
  char v76; // cl
  unsigned __int8 v77; // bl
  _BYTE *v78; // esi
  unsigned int v79; // eax
  unsigned int jj; // edi
  unsigned __int8 v81; // [esp+8h] [ebp-258h]
  unsigned __int8 v82; // [esp+8h] [ebp-258h]
  unsigned __int8 v83; // [esp+9h] [ebp-257h]
  unsigned __int8 v84; // [esp+9h] [ebp-257h]
  unsigned __int8 v85; // [esp+Ah] [ebp-256h]
  unsigned __int8 v86; // [esp+Ah] [ebp-256h]
  unsigned __int8 v87; // [esp+Bh] [ebp-255h]
  int v88; // [esp+Ch] [ebp-254h] BYREF
  unsigned int v89; // [esp+10h] [ebp-250h]
  unsigned int v90; // [esp+14h] [ebp-24Ch]
  unsigned int v91; // [esp+18h] [ebp-248h] BYREF
  int v92; // [esp+1Ch] [ebp-244h]
  int v93; // [esp+20h] [ebp-240h]
  int v94; // [esp+24h] [ebp-23Ch]
  char v95; // [esp+28h] [ebp-238h]
  char v96; // [esp+29h] [ebp-237h]
  char v97; // [esp+2Ah] [ebp-236h]
  char v98; // [esp+2Bh] [ebp-235h]
  unsigned __int8 v99; // [esp+2Ch] [ebp-234h]
  unsigned __int8 v100; // [esp+2Dh] [ebp-233h]
  unsigned __int8 v101; // [esp+2Eh] [ebp-232h]
  unsigned __int8 v102; // [esp+2Fh] [ebp-231h]
  int v103; // [esp+30h] [ebp-230h]
  int v104; // [esp+34h] [ebp-22Ch]
  int v105; // [esp+38h] [ebp-228h]
  int v106; // [esp+3Ch] [ebp-224h]
  unsigned int v107; // [esp+40h] [ebp-220h]
  int v108; // [esp+44h] [ebp-21Ch]
  int v109; // [esp+48h] [ebp-218h]
  int v110; // [esp+4Ch] [ebp-214h]
  unsigned int v111; // [esp+50h] [ebp-210h]
  int v112; // [esp+54h] [ebp-20Ch]
  int v113; // [esp+58h] [ebp-208h]
  _BYTE v114[512]; // [esp+5Ch] [ebp-204h] BYREF

  v112 = a1; /*0x736ed4*/
  v38 = (_BYTE *)(a2[0x14] + *(_DWORD *)(a2[0x17] + 4 * a37) + a38 * *(_DWORD *)(a2[0x17] + 4 * a2[0x18])); /*0x736ef9*/
  v111 = 2 * *(_DWORD *)(a2[0x15] + 4 * a37) * *(_DWORD *)(a2[0x16] + 4 * a37); /*0x736f11*/
  v39 = v111; /*0x736f0b*/
  result = (unsigned __int8)sub_71B4D0(&v91, (char *)&a3); /*0x736f15*/
  v107 = 0; /*0x736f1c*/
  if ( v39 ) /*0x736f24*/
  {
    v41 = v99; /*0x736f2b*/
    while ( 1 ) /*0x736f36*/
    {
      v42 = v39 - v107; /*0x736f36*/
      v43 = 0x200; /*0x736f3a*/
      v106 = 0x200; /*0x736f41*/
      if ( v42 < 0x200 ) /*0x736f45*/
      {
        v106 = v42; /*0x736f47*/
        v43 = v42; /*0x736f4b*/
      }
      v44 = *(void (__cdecl **)(int, _BYTE *, unsigned int, int *, int))(v112 + 4); /*0x736f5e*/
      v88 = 1; /*0x736f62*/
      v44(v112, v114, v43, &v88, 1); /*0x736f6a*/
      if ( sub_71AD40(&a20, (int)&unk_B25E00) ) /*0x736f7b*/
      {
        v45 = v43 >> 1; /*0x736f88*/
        v46 = v114; /*0x736f8a*/
        if ( v45 ) /*0x736f8e*/
        {
          v104 = v41; /*0x736f97*/
          v108 = 8 - v41; /*0x736fa8*/
          v83 = 8 - v100; /*0x736fac*/
          v109 = v100; /*0x736fb5*/
          v110 = 8 - v100; /*0x736fc6*/
          v85 = 8 - v101; /*0x736fca*/
          v103 = v101; /*0x736fd3*/
          v105 = 8 - v101; /*0x736fe4*/
          v81 = 8 - v102; /*0x736fe8*/
          v47 = 8 - v41; /*0x736ff3*/
          v87 = 8 - v41; /*0x736ffc*/
          v90 = v102; /*0x737000*/
          v113 = 8 - v102; /*0x737004*/
          v88 = v45; /*0x737008*/
          while ( 1 ) /*0x737021*/
          {
            v48 = (unsigned __int16)(v91 & *v46) >> v95; /*0x737021*/
            for ( i = 0; v41 >= v47; i = (v48 | i) << v47 ) /*0x737027*/
              v41 -= v47; /*0x737035*/
            v89 = i; /*0x737049*/
            v50 = v96; /*0x737059*/
            *v38 = ((_BYTE)v48 << v104) | (i >> v47) | (v48 >> (v108 - v41)); /*0x737066*/
            v51 = v38 + 1; /*0x737070*/
            v52 = (unsigned __int16)(v92 & *v46) >> v50; /*0x737073*/
            v53 = 0; /*0x737079*/
            for ( j = v100; j >= v83; v53 = (v52 | v53) << v83 ) /*0x73707f*/
              j -= v83; /*0x737086*/
            v89 = v53; /*0x73709a*/
            v55 = v97; /*0x7370aa*/
            *v51 = ((_BYTE)v52 << v109) | (v53 >> v83) | (v52 >> (v110 - j)); /*0x7370b7*/
            v56 = v101; /*0x7370c1*/
            v57 = v51 + 1; /*0x7370c5*/
            v58 = (unsigned __int16)(v93 & *v46) >> v55; /*0x7370c8*/
            for ( k = 0; v56 >= v85; k = (v58 | k) << v85 ) /*0x7370ce*/
              v56 -= v85; /*0x7370d5*/
            v89 = k; /*0x7370e9*/
            v60 = v98; /*0x7370f9*/
            *v57 = ((_BYTE)v58 << v103) | (k >> v85) | (v58 >> (v105 - v56)); /*0x737106*/
            v61 = v57 + 1; /*0x737110*/
            v62 = (unsigned __int16)(v94 & *v46) >> v60; /*0x737113*/
            v63 = 0; /*0x737119*/
            for ( m = v102; m >= v81; v63 = (v62 | v63) << v81 ) /*0x73711f*/
              m -= v81; /*0x737126*/
            v89 = v63; /*0x73713a*/
            v38 = v61 + 1; /*0x73714a*/
            ++v46; /*0x73714f*/
            v65 = v88-- == 1; /*0x737154*/
            v38[0xFFFFFFFF] = ((_BYTE)v62 << v90) | (v63 >> v81) | (v62 >> (v113 - m)); /*0x737159*/
            v41 = v99; /*0x73715c*/
            if ( v65 ) /*0x737160*/
              break; /*0x737160*/
            v47 = v87; /*0x737010*/
          }
        }
      }
      else
      {
        result = sub_71AD40(&a20, (int)&unk_B25E48); /*0x737177*/
        if ( !result ) /*0x73717e*/
          return result; /*0x73717e*/
        v66 = v43 >> 1; /*0x737184*/
        v67 = v114; /*0x737186*/
        if ( v66 ) /*0x73718a*/
        {
          v104 = v41; /*0x737193*/
          v108 = 8 - v41; /*0x7371a4*/
          v86 = 8 - v100; /*0x7371a8*/
          v109 = v100; /*0x7371b1*/
          v110 = 8 - v100; /*0x7371c2*/
          v84 = 8 - v101; /*0x7371c6*/
          v68 = 8 - v41; /*0x7371d1*/
          v82 = 8 - v41; /*0x7371da*/
          v103 = v101; /*0x7371de*/
          v105 = 8 - v101; /*0x7371e2*/
          v88 = v66; /*0x7371e6*/
          while ( 1 ) /*0x737201*/
          {
            v69 = (unsigned __int16)(v91 & *v67) >> v95; /*0x737201*/
            for ( n = 0; v41 >= v68; n = (v69 | n) << v68 ) /*0x737207*/
              v41 -= v68; /*0x737215*/
            v90 = n; /*0x737229*/
            v71 = v96; /*0x737239*/
            *v38 = ((_BYTE)v69 << v104) | (n >> v68) | (v69 >> (v108 - v41)); /*0x737246*/
            v72 = v38 + 1; /*0x737250*/
            v73 = (unsigned __int16)(v92 & *v67) >> v71; /*0x737253*/
            v74 = 0; /*0x737259*/
            for ( ii = v100; ii >= v86; v74 = (v73 | v74) << v86 ) /*0x73725f*/
              ii -= v86; /*0x737266*/
            v90 = v74; /*0x73727a*/
            v76 = v97; /*0x73728a*/
            *v72 = ((_BYTE)v73 << v109) | (v74 >> v86) | (v73 >> (v110 - ii)); /*0x737297*/
            v77 = v101; /*0x7372a1*/
            v78 = v72 + 1; /*0x7372a5*/
            v79 = (unsigned __int16)(v93 & *v67) >> v76; /*0x7372a8*/
            for ( jj = 0; v77 >= v84; jj = (v79 | jj) << v84 ) /*0x7372ae*/
              v77 -= v84; /*0x7372b5*/
            v90 = jj; /*0x7372c9*/
            v38 = v78 + 1; /*0x7372d9*/
            ++v67; /*0x7372de*/
            v65 = v88-- == 1; /*0x7372e3*/
            v38[0xFFFFFFFF] = ((_BYTE)v79 << v103) | (jj >> v84) | (v79 >> (v105 - v77)); /*0x7372e8*/
            v41 = v99; /*0x7372eb*/
            if ( v65 ) /*0x7372ef*/
              break; /*0x7372ef*/
            v68 = v82; /*0x7371f0*/
          }
        }
      }
      result = v106 + v107; /*0x7372f9*/
      v107 += v106; /*0x737301*/
      if ( v107 >= v111 ) /*0x737305*/
        break; /*0x737305*/
      v39 = v111; /*0x736f32*/
    }
  }
  return result; /*0x73730d*/
}
