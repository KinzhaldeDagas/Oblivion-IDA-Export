char __cdecl sub_736EB0(
        int a1,
        _DWORD *a2,
        char a3,
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

  v112 = a1;
  v38 = (_BYTE *)(a2[0x14] + *(_DWORD *)(a2[0x17] + 4 * a37) + a38 * *(_DWORD *)(a2[0x17] + 4 * a2[0x18]));
  v111 = 2 * *(_DWORD *)(a2[0x15] + 4 * a37) * *(_DWORD *)(a2[0x16] + 4 * a37);
  v39 = v111;
  result = (unsigned __int8)sub_71B4D0(&v91, &a3);
  v107 = 0;
  if ( v39 )
  {
    v41 = v99;
    while ( 1 )
    {
      v42 = v39 - v107;
      v43 = 0x200;
      v106 = 0x200;
      if ( v42 < 0x200 )
      {
        v106 = v42;
        v43 = v42;
      }
      v44 = *(void (__cdecl **)(int, _BYTE *, unsigned int, int *, int))(v112 + 4);
      v88 = 1;
      v44(v112, v114, v43, &v88, 1);
      if ( sub_71AD40(&a20, (int)&unk_B25E00) )
      {
        v45 = v43 >> 1;
        v46 = v114;
        if ( v45 )
        {
          v104 = v41;
          v108 = 8 - v41;
          v83 = 8 - v100;
          v109 = v100;
          v110 = 8 - v100;
          v85 = 8 - v101;
          v103 = v101;
          v105 = 8 - v101;
          v81 = 8 - v102;
          v47 = 8 - v41;
          v87 = 8 - v41;
          v90 = v102;
          v113 = 8 - v102;
          v88 = v45;
          while ( 1 )
          {
            v48 = (unsigned __int16)(v91 & *v46) >> v95;
            for ( i = 0; v41 >= v47; i = (v48 | i) << v47 )
              v41 -= v47;
            v89 = i;
            v50 = v96;
            *v38 = ((_BYTE)v48 << v104) | (i >> v47) | (v48 >> (v108 - v41));
            v51 = v38 + 1;
            v52 = (unsigned __int16)(v92 & *v46) >> v50;
            v53 = 0;
            for ( j = v100; j >= v83; v53 = (v52 | v53) << v83 )
              j -= v83;
            v89 = v53;
            v55 = v97;
            *v51 = ((_BYTE)v52 << v109) | (v53 >> v83) | (v52 >> (v110 - j));
            v56 = v101;
            v57 = v51 + 1;
            v58 = (unsigned __int16)(v93 & *v46) >> v55;
            for ( k = 0; v56 >= v85; k = (v58 | k) << v85 )
              v56 -= v85;
            v89 = k;
            v60 = v98;
            *v57 = ((_BYTE)v58 << v103) | (k >> v85) | (v58 >> (v105 - v56));
            v61 = v57 + 1;
            v62 = (unsigned __int16)(v94 & *v46) >> v60;
            v63 = 0;
            for ( m = v102; m >= v81; v63 = (v62 | v63) << v81 )
              m -= v81;
            v89 = v63;
            v38 = v61 + 1;
            ++v46;
            v65 = v88-- == 1;
            v38[0xFFFFFFFF] = ((_BYTE)v62 << v90) | (v63 >> v81) | (v62 >> (v113 - m));
            v41 = v99;
            if ( v65 )
              break;
            v47 = v87;
          }
        }
      }
      else
      {
        result = sub_71AD40(&a20, (int)&unk_B25E48);
        if ( !result )
          return result;
        v66 = v43 >> 1;
        v67 = v114;
        if ( v66 )
        {
          v104 = v41;
          v108 = 8 - v41;
          v86 = 8 - v100;
          v109 = v100;
          v110 = 8 - v100;
          v84 = 8 - v101;
          v68 = 8 - v41;
          v82 = 8 - v41;
          v103 = v101;
          v105 = 8 - v101;
          v88 = v66;
          while ( 1 )
          {
            v69 = (unsigned __int16)(v91 & *v67) >> v95;
            for ( n = 0; v41 >= v68; n = (v69 | n) << v68 )
              v41 -= v68;
            v90 = n;
            v71 = v96;
            *v38 = ((_BYTE)v69 << v104) | (n >> v68) | (v69 >> (v108 - v41));
            v72 = v38 + 1;
            v73 = (unsigned __int16)(v92 & *v67) >> v71;
            v74 = 0;
            for ( ii = v100; ii >= v86; v74 = (v73 | v74) << v86 )
              ii -= v86;
            v90 = v74;
            v76 = v97;
            *v72 = ((_BYTE)v73 << v109) | (v74 >> v86) | (v73 >> (v110 - ii));
            v77 = v101;
            v78 = v72 + 1;
            v79 = (unsigned __int16)(v93 & *v67) >> v76;
            for ( jj = 0; v77 >= v84; jj = (v79 | jj) << v84 )
              v77 -= v84;
            v90 = jj;
            v38 = v78 + 1;
            ++v67;
            v65 = v88-- == 1;
            v38[0xFFFFFFFF] = ((_BYTE)v79 << v103) | (jj >> v84) | (v79 >> (v105 - v77));
            v41 = v99;
            if ( v65 )
              break;
            v68 = v82;
          }
        }
      }
      result = v106 + v107;
      v107 += v106;
      if ( v107 >= v111 )
        break;
      v39 = v111;
    }
  }
  return result;
}
