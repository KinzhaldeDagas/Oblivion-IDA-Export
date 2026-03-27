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
        int a38,
        int a39,
        int a40,
        int a41,
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
        int a59)
{
  signed int v59; // ebx
  int v60; // eax
  unsigned int v61; // ebp
  int v62; // ecx
  _BYTE *v63; // esi
  void (__cdecl *v64)(int, _BYTE *, int, signed int *, int); // edx
  int v65; // edi
  int v66; // ebp
  unsigned int v67; // eax
  int *v68; // ecx
  unsigned __int8 v69; // dl
  unsigned __int8 v70; // bl
  unsigned __int8 v71; // bl
  unsigned __int8 v72; // dl
  unsigned int v73; // edi
  int v74; // ebp
  unsigned int v75; // eax
  unsigned int v76; // ebp
  unsigned __int8 k; // dl
  unsigned int v78; // edi
  unsigned int v79; // ebp
  unsigned int i; // eax
  char v81; // dl
  unsigned int v82; // ebp
  unsigned int v83; // eax
  unsigned __int8 j; // dl
  char v85; // dl
  unsigned int v86; // edi
  unsigned __int8 v87; // bl
  unsigned int v88; // edx
  _BYTE *v89; // esi
  char v91; // [esp+13h] [ebp-45h]
  unsigned int *v92; // [esp+14h] [ebp-44h]
  unsigned __int8 v93; // [esp+18h] [ebp-40h]
  char v94; // [esp+1Ch] [ebp-3Ch]
  unsigned __int8 v95; // [esp+20h] [ebp-38h]
  char v96; // [esp+24h] [ebp-34h]
  unsigned __int8 v97; // [esp+28h] [ebp-30h]
  int v98; // [esp+2Ch] [ebp-2Ch]
  int v99; // [esp+30h] [ebp-28h]
  int v100; // [esp+34h] [ebp-24h]
  unsigned int v101; // [esp+40h] [ebp-18h] BYREF
  int v102; // [esp+44h] [ebp-14h]
  int v103; // [esp+48h] [ebp-10h]
  char v104; // [esp+50h] [ebp-8h]
  char v105; // [esp+51h] [ebp-7h]
  char v106; // [esp+52h] [ebp-6h]
  unsigned __int8 v107; // [esp+54h] [ebp-4h]
  unsigned __int8 v108; // [esp+55h] [ebp-3h]
  unsigned __int8 v109; // [esp+56h] [ebp-2h]
  char v110; // [esp+57h] [ebp-1h]
  unsigned __int8 v111; // [esp+5Ch] [ebp+4h]

  v59 = a2;
  v60 = *(_DWORD *)(a2 + 0x5C);
  v61 = a37;
  v62 = *(_DWORD *)(v60 + 4 * a37 + 4) - *(_DWORD *)(v60 + 4 * a37);
  v63 = (_BYTE *)(*(_DWORD *)(v60 + 4 * a37)
                + *(_DWORD *)(a2 + 0x50)
                + a38 * *(_DWORD *)(v60 + 4 * *(_DWORD *)(a2 + 0x60)));
  v64 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(a1 + 4);
  a2 = 1;
  v64(a1, v63, v62, &a2, 1);
  sub_71B4D0(&v101, (char *)&a3);
  v65 = *(_DWORD *)(*(_DWORD *)(v59 + 0x54) + 4 * v61);
  v66 = *(_DWORD *)(*(_DWORD *)(v59 + 0x58) + 4 * v61);
  v100 = v65;
  LOBYTE(v67) = sub_70E260(&a3, (int)&a20);
  if ( (_BYTE)v67 )
  {
    v92 = (unsigned int *)v63;
    v67 = 0;
    v68 = &a8;
    while ( *v68 != 3 )
    {
      ++v67;
      v68 += 3;
      if ( v67 >= 4 )
        goto LABEL_5;
    }
    if ( !*((_BYTE *)&a10 + 0xC * v67) )
    {
LABEL_5:
      if ( v66 )
      {
        v69 = v107;
        v98 = v66;
        do
        {
          if ( v65 )
          {
            v93 = v69;
            v111 = 8 - v108;
            v95 = v108;
            v94 = 8 - v108;
            LOBYTE(a2) = 8 - v109;
            v70 = 8 - v69;
            LOBYTE(a38) = 8 - v69;
            v97 = v109;
            v96 = 8 - v109;
            v99 = v65;
            while ( 1 )
            {
              v78 = *v92;
              v79 = 0;
              for ( i = (v101 & *v92) >> v104; v69 >= v70; v79 = (i | v79) << v70 )
                v69 -= v70;
              a37 = v79;
              v81 = ((_BYTE)i << v93) | (v79 >> v70) | (i >> (8 - v69 - v93));
              v82 = 0;
              v83 = (v102 & v78) >> v105;
              v91 = v81;
              for ( j = v108; j >= v111; v82 = (v83 | v82) << v111 )
                j -= v111;
              a37 = v82;
              v85 = ((_BYTE)v83 << v95) | (v82 >> v111) | (v83 >> (v94 - j));
              v67 = (v103 & v78) >> v106;
              v86 = 0;
              if ( (unsigned __int8)a2 > v109 )
              {
                v87 = v109;
              }
              else
              {
                v87 = v109;
                do
                {
                  v87 -= a2;
                  v86 = (v67 | v86) << a2;
                }
                while ( v87 >= (unsigned __int8)a2 );
              }
              *v63 = v91;
              ++v92;
              v63[1] = v85;
              v88 = v67 >> (v96 - v87);
              LOBYTE(v67) = (_BYTE)v67 << v97;
              v89 = v63 + 3;
              v89[0xFFFFFFFF] = v67 | (v86 >> a2) | v88;
              v69 = v107;
              *v89 = 0xFF;
              v63 = v89 + 1;
              if ( !--v99 )
                break;
              v70 = a38;
            }
            v65 = v100;
          }
          --v98;
        }
        while ( v98 );
      }
      return v67;
    }
    if ( v66 )
    {
      v71 = v107;
      if ( !v65 )
        JUMPOUT(0x736D59);
      LOBYTE(a1) = 8 - v108;
      LOBYTE(a2) = 8 - v110;
      v72 = 8 - v107;
      LOBYTE(a38) = 8 - v107;
      v73 = *(_DWORD *)v63;
      v74 = 0;
      v75 = (v101 & *(_DWORD *)v63) >> v104;
      if ( (unsigned __int8)(8 - v107) <= v107 )
      {
        do
        {
          v71 -= v72;
          v74 = (v75 | v74) << v72;
        }
        while ( v71 >= v72 );
      }
      a37 = v75 >> (8 - v71 - v107);
      v76 = 0;
      for ( k = v108; k >= (unsigned __int8)a1; v76 = (((v102 & v73) >> v105) | v76) << a1 )
        k -= a1;
      LOBYTE(v67) = sub_736C63(
                      a1,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
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
                      a59);
    }
  }
  return v67;
}
