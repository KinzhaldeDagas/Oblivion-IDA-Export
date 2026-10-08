char __cdecl sub_736950(
        int a1,
        int a2,
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
  int v38; // ebx
  int v39; // edi
  int v40; // eax
  int v41; // ecx
  char *v42; // esi
  void (__cdecl *v43)(int, char *, int, int *, int); // edx
  int v44; // ebp
  int v45; // ebx
  char *v46; // eax
  int v47; // edi
  char v48; // cl
  char v49; // dl
  _BYTE *v50; // esi
  unsigned int v52[6]; // [esp+10h] [ebp-18h] BYREF

  v38 = a37; /*0x736954*/
  v39 = a2; /*0x73695e*/
  v40 = *(_DWORD *)(a2 + 0x5C); /*0x736962*/
  v41 = *(_DWORD *)(v40 + 4 * a37 + 4) - *(_DWORD *)(v40 + 4 * a37); /*0x73697a*/
  v42 = (char *)(*(_DWORD *)(v40 + 4 * a37) /*0x73697d*/
               + *(_DWORD *)(a2 + 0x50)
               + a38 * *(_DWORD *)(v40 + 4 * *(_DWORD *)(a2 + 0x60)));
  v43 = *(void (__cdecl **)(int, char *, int, int *, int))(a1 + 4); /*0x73698b*/
  a2 = 1; /*0x736991*/
  v43(a1, v42, v41, &a2, 1); /*0x736999*/
  sub_71B4D0(v52, (char *)&a3); /*0x7369a7*/
  v44 = *(_DWORD *)(*(_DWORD *)(v39 + 0x54) + 4 * v38); /*0x7369af*/
  v45 = *(_DWORD *)(*(_DWORD *)(v39 + 0x58) + 4 * v38); /*0x7369b5*/
  LOBYTE(v46) = sub_70E260(&a3, (int)&a20); /*0x7369c1*/
  if ( (_BYTE)v46 ) /*0x7369c8*/
  {
    if ( v52[0] == 0xFF0000 ) /*0x7369d2*/
    {
      v46 = v42; /*0x7369d6*/
      if ( v45 ) /*0x7369d8*/
      {
        a2 = v45; /*0x7369da*/
        do /*0x736a0a*/
        {
          if ( v44 ) /*0x7369e2*/
          {
            v47 = v44; /*0x7369e4*/
            do /*0x736a03*/
            {
              v48 = v46[1]; /*0x7369e9*/
              v49 = *v46; /*0x7369ec*/
              *v42 = v46[2]; /*0x7369ee*/
              v50 = v42 + 1; /*0x7369f0*/
              *v50++ = v48; /*0x7369f3*/
              *v50 = v49; /*0x7369f8*/
              v42 = v50 + 1; /*0x7369fa*/
              v46 += 3; /*0x7369fd*/
              --v47; /*0x736a00*/
            }
            while ( v47 ); /*0x736a03*/
          }
          --a2; /*0x736a05*/
        }
        while ( a2 ); /*0x736a0a*/
      }
    }
  }
  return (char)v46; /*0x736a0c*/
}
