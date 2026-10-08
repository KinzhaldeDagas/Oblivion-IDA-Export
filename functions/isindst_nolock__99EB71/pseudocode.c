BOOL __usercall _isindst_nolock@<eax>(int a1@<ebx>, _DWORD *a2@<edi>)
{
  signed int v2; // eax
  int v3; // edx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int v9; // [esp-4h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-4h] BYREF

  v10 = 0; /*0x99eb7c*/
  v2 = sub_99EDAF(a1, (int)a2, &v10); /*0x99eb7f*/
  if ( v2 ) /*0x99eb87*/
    _invoke_watson(v2, v3, v9, a1, (int)a2, 0); /*0x99eb8e*/
  if ( !v10 ) /*0x99eb99*/
    return 0; /*0x99eb9d*/
  v5 = a2[5]; /*0x99eba2*/
  if ( v5 != dword_B31FD0 || v5 != dword_B31FDC ) /*0x99ebb7*/
  {
    if ( dword_BA9E10[0x297] ) /*0x99ebc3*/
    {
      if ( LOWORD(dword_BA9E10[0x292]) ) /*0x99ebef*/
        cvtdate( /*0x99ec1a*/
          HIWORD(dword_BA9E10[0x292]),
          LOWORD(dword_BA9E10[0x294]),
          1,
          0,
          v5,
          0,
          0,
          HIWORD(dword_BA9E10[0x293]),
          HIWORD(dword_BA9E10[0x294]),
          LOWORD(dword_BA9E10[0x295]),
          HIWORD(dword_BA9E10[0x295]));
      else
        cvtdate( /*0x99ec04*/
          HIWORD(dword_BA9E10[0x292]),
          LOWORD(dword_BA9E10[0x294]),
          1,
          1,
          v5,
          HIWORD(dword_BA9E10[0x293]),
          LOWORD(dword_BA9E10[0x293]),
          0,
          HIWORD(dword_BA9E10[0x294]),
          LOWORD(dword_BA9E10[0x295]),
          HIWORD(dword_BA9E10[0x295]));
      if ( LOWORD(dword_BA9E10[0x27D]) ) /*0x99ec48*/
        cvtdate( /*0x99ec77*/
          HIWORD(dword_BA9E10[0x27D]),
          LOWORD(dword_BA9E10[0x27F]),
          0,
          0,
          a2[5],
          0,
          0,
          HIWORD(dword_BA9E10[0x27E]),
          HIWORD(dword_BA9E10[0x27F]),
          LOWORD(dword_BA9E10[0x280]),
          HIWORD(dword_BA9E10[0x280]));
      else
        cvtdate( /*0x99ec5f*/
          HIWORD(dword_BA9E10[0x27D]),
          LOWORD(dword_BA9E10[0x27F]),
          0,
          1,
          a2[5],
          HIWORD(dword_BA9E10[0x27E]),
          LOWORD(dword_BA9E10[0x27E]),
          0,
          HIWORD(dword_BA9E10[0x27F]),
          LOWORD(dword_BA9E10[0x280]),
          HIWORD(dword_BA9E10[0x280]));
    }
    else
    {
      cvtdate(4, 2, 1, 1, v5, 1, 0, 0, 0, 0, 0); /*0x99ec90*/
      cvtdate(0xA, 2, 0, 1, a2[5], 5, 0, 0, 0, 0, 0); /*0x99eca7*/
    }
  }
  v6 = a2[7]; /*0x99ecbc*/
  if ( dword_B31FD4 >= dword_B31FE0 ) /*0x99ecbf*/
  {
    if ( v6 < dword_B31FE0 || v6 > dword_B31FD4 ) /*0x99ecdd*/
      return 1; /*0x99ecdd*/
    if ( v6 <= dword_B31FE0 || v6 >= dword_B31FD4 ) /*0x99ece5*/
      goto LABEL_26; /*0x99ece5*/
    return 0; /*0x99ece9*/
  }
  if ( v6 < dword_B31FD4 || v6 > dword_B31FE0 ) /*0x99ecc7*/
    return 0; /*0x99ecc7*/
  if ( v6 > dword_B31FD4 && v6 < dword_B31FE0 ) /*0x99eccf*/
    return 1; /*0x99ecd6*/
LABEL_26:
  v7 = 0x3E8 * (*a2 + 0x3C * (a2[1] + 0x3C * a2[2])); /*0x99eceb*/
  if ( v6 == dword_B31FD4 ) /*0x99ed01*/
    return v7 >= dword_B31FD8; /*0x99ed0b*/
  else
    return v7 < dword_B31FE4; /*0x99ed18*/
}
