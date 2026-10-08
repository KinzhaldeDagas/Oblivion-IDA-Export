char __cdecl sub_736A20(
        int a1,
        signed int a2,
        int a3,
        char a4,
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
        __int16 a20,
        char a21,
        int a22,
        int a23,
        char a24,
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
        unsigned int a37,
        int a38)
{
  signed int v38; // ebx
  int v39; // eax
  unsigned int v40; // ebp
  int v41; // ecx
  _BYTE *v42; // esi
  void (__cdecl *v43)(int, _BYTE *, int, signed int *, int); // edx
  int v44; // edi
  int v45; // ebp
  unsigned int v46; // eax
  int *v47; // ecx
  unsigned __int8 v48; // dl
  unsigned __int8 v49; // bl
  unsigned __int8 v50; // bl
  unsigned __int8 v51; // dl
  unsigned int v52; // edi
  int v53; // ebp
  unsigned int v54; // eax
  unsigned int v55; // ebp
  unsigned int v56; // eax
  unsigned __int8 k; // dl
  unsigned int v58; // edi
  unsigned int v59; // ebp
  unsigned int i; // eax
  char v61; // dl
  unsigned int v62; // ebp
  unsigned int v63; // eax
  unsigned __int8 j; // dl
  char v65; // dl
  unsigned int v66; // edi
  unsigned __int8 v67; // bl
  unsigned int v68; // edx
  _BYTE *v69; // esi
  char v71; // [esp+13h] [ebp-45h]
  unsigned int *v72; // [esp+14h] [ebp-44h]
  unsigned __int8 v73; // [esp+18h] [ebp-40h]
  char v74; // [esp+1Ch] [ebp-3Ch]
  unsigned __int8 v75; // [esp+20h] [ebp-38h]
  char v76; // [esp+24h] [ebp-34h]
  unsigned __int8 v77; // [esp+28h] [ebp-30h]
  int v78; // [esp+2Ch] [ebp-2Ch]
  int v79; // [esp+30h] [ebp-28h]
  int v80; // [esp+34h] [ebp-24h]
  unsigned int v81; // [esp+40h] [ebp-18h] BYREF
  int v82; // [esp+44h] [ebp-14h]
  int v83; // [esp+48h] [ebp-10h]
  char v84; // [esp+50h] [ebp-8h]
  char v85; // [esp+51h] [ebp-7h]
  char v86; // [esp+52h] [ebp-6h]
  unsigned __int8 v87; // [esp+54h] [ebp-4h]
  unsigned __int8 v88; // [esp+55h] [ebp-3h]
  unsigned __int8 v89; // [esp+56h] [ebp-2h]
  char v90; // [esp+57h] [ebp-1h]
  unsigned __int8 v91; // [esp+5Ch] [ebp+4h]

  v38 = a2; /*0x736a24*/
  v39 = *(_DWORD *)(a2 + 0x5C); /*0x736a28*/
  v40 = a37; /*0x736a2f*/
  v41 = *(_DWORD *)(v39 + 4 * a37 + 4) - *(_DWORD *)(v39 + 4 * a37); /*0x736a49*/
  v42 = (_BYTE *)(*(_DWORD *)(v39 + 4 * a37) /*0x736a4c*/
                + *(_DWORD *)(a2 + 0x50)
                + a38 * *(_DWORD *)(v39 + 4 * *(_DWORD *)(a2 + 0x60)));
  v43 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(a1 + 4); /*0x736a5b*/
  a2 = 1; /*0x736a61*/
  v43(a1, v42, v41, &a2, 1); /*0x736a69*/
  sub_71B4D0(&v81, (char *)&a3); /*0x736a77*/
  v44 = *(_DWORD *)(*(_DWORD *)(v38 + 0x54) + 4 * v40); /*0x736a7f*/
  v45 = *(_DWORD *)(*(_DWORD *)(v38 + 0x58) + 4 * v40); /*0x736a85*/
  v80 = v44; /*0x736a94*/
  LOBYTE(v46) = sub_70E260(&a3, (int)&a20); /*0x736a98*/
  if ( (_BYTE)v46 ) /*0x736a9f*/
  {
    v72 = (unsigned int *)v42; /*0x736aa5*/
    v46 = 0; /*0x736aa9*/
    v47 = &a8; /*0x736aab*/
    while ( *v47 != 3 ) /*0x736ab3*/
    {
      ++v46; /*0x736ab5*/
      v47 += 3; /*0x736ab8*/
      if ( v46 >= 4 ) /*0x736abe*/
        goto LABEL_5; /*0x736abe*/
    }
    if ( !*((_BYTE *)&a10 + 0xC * v46) ) /*0x736b3a*/
    {
LABEL_5:
      if ( v45 ) /*0x736ac2*/
      {
        v48 = v87; /*0x736ac8*/
        v78 = v45; /*0x736acc*/
        do /*0x736ea1*/
        {
          if ( v44 ) /*0x736ad2*/
          {
            v73 = v48; /*0x736adb*/
            v91 = 8 - v88; /*0x736aea*/
            v75 = v88; /*0x736af5*/
            v74 = 8 - v88; /*0x736aff*/
            LOBYTE(a2) = 8 - v89; /*0x736b03*/
            v49 = 8 - v48; /*0x736b0e*/
            LOBYTE(a38) = 8 - v48; /*0x736b17*/
            v77 = v89; /*0x736b1e*/
            v76 = 8 - v89; /*0x736b22*/
            v79 = v44; /*0x736b26*/
            while ( 1 ) /*0x736d7b*/
            {
              v58 = *v72; /*0x736d7b*/
              v59 = 0; /*0x736d88*/
              for ( i = (v81 & *v72) >> v84; v48 >= v49; v59 = (i | v59) << v49 ) /*0x736d8e*/
                v48 -= v49; /*0x736d95*/
              a37 = v59; /*0x736dae*/
              v61 = ((_BYTE)i << v73) | (v59 >> v49) | (i >> (8 - v48 - v73)); /*0x736dcc*/
              v62 = 0; /*0x736dd4*/
              v63 = (v82 & v58) >> v85; /*0x736dd6*/
              v71 = v61; /*0x736dde*/
              for ( j = v88; j >= v91; v62 = (v63 | v62) << v91 ) /*0x736de4*/
                j -= v91; /*0x736deb*/
              a37 = v62; /*0x736e03*/
              v65 = ((_BYTE)v63 << v75) | (v62 >> v91) | (v63 >> (v74 - j)); /*0x736e27*/
              v46 = (v83 & v58) >> v86; /*0x736e29*/
              v66 = 0; /*0x736e2b*/
              if ( (unsigned __int8)a2 > v89 ) /*0x736e2f*/
              {
                v67 = v89; /*0x736e48*/
              }
              else
              {
                v67 = v89; /*0x736e34*/
                do /*0x736e44*/
                {
                  v67 -= a2; /*0x736e36*/
                  v66 = (v46 | v66) << a2; /*0x736e3e*/
                }
                while ( v67 >= (unsigned __int8)a2 ); /*0x736e44*/
              }
              *v42 = v71; /*0x736e50*/
              ++v72; /*0x736e56*/
              v42[1] = v65; /*0x736e5b*/
              v68 = v46 >> (v76 - v67); /*0x736e65*/
              LOBYTE(v46) = (_BYTE)v46 << v77; /*0x736e74*/
              v69 = v42 + 3; /*0x736e7b*/
              v69[0xFFFFFFFF] = v46 | (v66 >> a2) | v68; /*0x736e80*/
              v48 = v87; /*0x736e83*/
              *v69 = 0xFF; /*0x736e87*/
              v42 = v69 + 1; /*0x736e8a*/
              if ( !--v79 ) /*0x736e92*/
                break; /*0x736e92*/
              v49 = a38; /*0x736d70*/
            }
            v44 = v80; /*0x736e98*/
          }
          --v78; /*0x736e9c*/
        }
        while ( v78 ); /*0x736ea1*/
      }
      return v46; /*0x736ea1*/
    }
    if ( v45 ) /*0x736b3e*/
    {
      v50 = v87; /*0x736b44*/
      if ( !v44 ) /*0x736b52*/
        JUMPOUT(0x736D59); /*0x736d59*/
      LOBYTE(a1) = 8 - v88; /*0x736b6a*/
      LOBYTE(a2) = 8 - v90; /*0x736ba1*/
      v51 = 8 - v87; /*0x736bac*/
      LOBYTE(a38) = 8 - v87; /*0x736bb5*/
      v52 = *(_DWORD *)v42; /*0x736bdb*/
      v53 = 0; /*0x736be8*/
      v54 = (v81 & *(_DWORD *)v42) >> v84; /*0x736bea*/
      if ( (unsigned __int8)(8 - v87) <= v87 ) /*0x736bee*/
      {
        do /*0x736bfb*/
        {
          v50 -= v51; /*0x736bf5*/
          v53 = (v54 | v53) << v51; /*0x736bf7*/
        }
        while ( v50 >= v51 ); /*0x736bfb*/
      }
      a37 = v54 >> (8 - v50 - v87); /*0x736c0f*/
      v55 = 0; /*0x736c3c*/
      v56 = (v82 & v52) >> v85; /*0x736c3e*/
      for ( k = v88; k >= (unsigned __int8)a1; v55 = (v56 | v55) << a1 ) /*0x736c4c*/
        k -= a1; /*0x736c55*/
      LOBYTE(v46) = sub_736C63(v56, 8 - v88 - k, a1, v55, v52, v42, a1, a2); /*0x736c62*/
    }
  }
  return v46; /*0x736b4c*/
}
