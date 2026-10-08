signed int __cdecl sub_743A40(_DWORD *a1, unsigned int a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // eax
  int v7; // ecx
  int v8; // eax
  char v9; // al
  unsigned int v10; // eax
  int v11; // ebp
  int v12; // eax
  bool v13; // zf
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [esp+10h] [ebp+4h]

  if ( !a1 ) /*0x743a49*/
    return 0xFFFFFFFE; /*0x743a49*/
  v3 = (_DWORD *)a1[7]; /*0x743a4f*/
  if ( !v3 ) /*0x743a54*/
    return 0xFFFFFFFE; /*0x743a54*/
  v4 = a2; /*0x743a5a*/
  if ( a2 > 4 ) /*0x743a61*/
    return 0xFFFFFFFE; /*0x743a61*/
  if ( !a1[3] || !*a1 && a1[1] || (v5 = v3[1], v5 == 0x29A) && a2 != 4 ) /*0x743a8d*/
  {
    a1[6] = off_A82840[0]; /*0x743e36*/
    return 0xFFFFFFFE; /*0x743e3b*/
  }
  if ( !a1[4] ) /*0x743a93*/
  {
    a1[6] = off_A8284C[0]; /*0x743a9e*/
    return 0xFFFFFFFB; /*0x743aa9*/
  }
  v7 = v3[8]; /*0x743aad*/
  *v3 = a1; /*0x743ab1*/
  v22 = v7; /*0x743ab3*/
  v3[8] = a2; /*0x743ab7*/
  if ( v5 == 0x2A ) /*0x743abf*/
  {
    if ( v3[6] == 2 ) /*0x743acd*/
    {
      *(_BYTE *)(v3[2] + v3[5]++) = 0x1F; /*0x743ad9*/
      *(_BYTE *)(v3[5] + v3[2]) = 0x8B; /*0x743ae6*/
      *(_BYTE *)(++v3[5] + v3[2]) = 8; /*0x743af3*/
      *(_BYTE *)(++v3[5] + v3[2]) = 0; /*0x743b00*/
      *(_BYTE *)(++v3[5] + v3[2]) = 0; /*0x743b0d*/
      *(_BYTE *)(++v3[5] + v3[2]) = 0; /*0x743b1a*/
      *(_BYTE *)(++v3[5] + v3[2]) = 0; /*0x743b27*/
      *(_BYTE *)(++v3[5] + v3[2]) = 0; /*0x743b34*/
      ++v3[5]; /*0x743b38*/
      v8 = v3[0x1F]; /*0x743b3b*/
      if ( v8 == 9 ) /*0x743b44*/
      {
        v9 = 2; /*0x743b46*/
      }
      else if ( (int)v3[0x20] >= 2 || v8 < 2 ) /*0x743b54*/
      {
        v9 = 4; /*0x743b5a*/
      }
      else
      {
        v9 = 0; /*0x743b56*/
      }
      *(_BYTE *)(v3[5] + v3[2]) = v9; /*0x743b62*/
      *(_BYTE *)(++v3[5] + v3[2]) = 0xFF; /*0x743b70*/
      ++v3[5]; /*0x743b74*/
      v3[1] = 0x71; /*0x743b7b*/
      v10 = sub_745D90(0, 0, 0); /*0x743b82*/
LABEL_32:
      a1[0xC] = v10; /*0x743c25*/
      goto LABEL_33; /*0x743c25*/
    }
    if ( (int)v3[0x20] < 2 ) /*0x743ba1*/
    {
      v11 = v3[0x1F]; /*0x743ba3*/
      if ( v11 >= 2 ) /*0x743ba8*/
      {
        if ( v11 >= 6 ) /*0x743bad*/
        {
          v13 = v11 == 6; /*0x743bb9*/
          v4 = a2; /*0x743bbc*/
          v12 = !v13 + 2; /*0x743bc3*/
        }
        else
        {
          v4 = a2; /*0x743baf*/
          v12 = 1; /*0x743bb3*/
        }
        goto LABEL_27; /*0x743bb5*/
      }
      v4 = a2; /*0x743bc7*/
    }
    v12 = 0; /*0x743bcb*/
LABEL_27:
    v14 = (v12 << 6) | (((v3[0xA] - 8) << 0xC) + 0x800); /*0x743bcd*/
    if ( v3[0x19] ) /*0x743bd2*/
      v14 |= 0x20u; /*0x743bd8*/
    v3[1] = 0x71; /*0x743bf6*/
    v15 = sub_7439C0((int)v3, 0x1F * (v14 / 0x1F + 1)); /*0x743bfd*/
    if ( v3[0x19] ) /*0x743c02*/
    {
      v16 = sub_7439C0(v15, *((_WORD *)a1 + 0x19)); /*0x743c0c*/
      sub_7439C0(v16, *((_WORD *)a1 + 0x18)); /*0x743c15*/
    }
    v10 = sub_7459B0(0, 0, 0); /*0x743c20*/
    goto LABEL_32; /*0x743c20*/
  }
LABEL_33:
  if ( v3[5] ) /*0x743c2b*/
  {
    sub_7439F0((int)a1); /*0x743c33*/
    if ( !a1[4] ) /*0x743c38*/
    {
LABEL_35:
      v3[8] = 0xFFFFFFFF; /*0x743c3e*/
      return 0; /*0x743c4b*/
    }
  }
  else if ( !a1[1] && v4 <= v22 && v4 != 4 ) /*0x743c5b*/
  {
    a1[6] = off_A8284C[0]; /*0x743c64*/
    return 0xFFFFFFFB; /*0x743c6f*/
  }
  v17 = v3[1]; /*0x743c70*/
  if ( v17 == 0x29A ) /*0x743c78*/
  {
    if ( a1[1] ) /*0x743c7a*/
    {
      a1[6] = off_A8284C[0]; /*0x743c86*/
      return 0xFFFFFFFB; /*0x743c91*/
    }
LABEL_45:
    if ( !v3[0x1B] && (!v4 || v17 == 0x29A) ) /*0x743cab*/
      goto LABEL_59; /*0x743cab*/
    goto LABEL_48; /*0x743cab*/
  }
  if ( !a1[1] ) /*0x743c92*/
    goto LABEL_45; /*0x743c96*/
LABEL_48:
  v18 = funcs_743CC0[3 * v3[0x1F]]((int)v3, v4); /*0x743cb1*/
  if ( v18 == 2 || v18 == 3 ) /*0x743ccd*/
    v3[1] = 0x29A; /*0x743ccf*/
  if ( !v18 || v18 == 2 ) /*0x743ce1*/
  {
    if ( a1[4] ) /*0x743e18*/
      return 0; /*0x743e1c*/
    v3[8] = 0xFFFFFFFF; /*0x743e24*/
    return 0; /*0x743e2f*/
  }
  if ( v18 == 1 ) /*0x743ce9*/
  {
    if ( v4 == 1 ) /*0x743ced*/
    {
      sub_747420((int)v3); /*0x743cf0*/
    }
    else
    {
      sub_747380((int)v3, 0, 0, 0); /*0x743d01*/
      if ( v4 == 3 ) /*0x743d0c*/
      {
        *(_WORD *)(v3[0xF] + 2 * v3[0x11] - 2) = 0; /*0x743d14*/
        _memset(v3[0xF], 0, 2 * v3[0x11] - 2); /*0x743d29*/
      }
    }
    sub_7439F0((int)a1); /*0x743d33*/
    if ( !a1[4] ) /*0x743d3c*/
      goto LABEL_35; /*0x743d3c*/
  }
LABEL_59:
  if ( v4 != 4 ) /*0x743d45*/
    return 0; /*0x743d45*/
  v19 = v3[6]; /*0x743d4b*/
  if ( v19 <= 0 ) /*0x743d50*/
    return 1; /*0x743d52*/
  if ( v19 == 2 ) /*0x743d5c*/
  {
    *(_BYTE *)(v3[2] + v3[5]++) = *((_BYTE *)a1 + 0x30); /*0x743d6c*/
    *(_BYTE *)(v3[5] + v3[2]) = *((_BYTE *)a1 + 0x31); /*0x743d7c*/
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 0x32); /*0x743d8c*/
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 0x33); /*0x743d9c*/
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 8); /*0x743dac*/
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 9); /*0x743dbc*/
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 0xA); /*0x743dcc*/
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 0xB); /*0x743ddc*/
    ++v3[5]; /*0x743ddf*/
  }
  else
  {
    v20 = sub_7439C0((int)v3, *((_WORD *)a1 + 0x19)); /*0x743dea*/
    sub_7439C0(v20, *((_WORD *)a1 + 0x18)); /*0x743df3*/
  }
  sub_7439F0((int)a1); /*0x743dfa*/
  v21 = v3[6]; /*0x743dff*/
  if ( v21 > 0 ) /*0x743e04*/
    v3[6] = -v21; /*0x743e08*/
  return v3[5] == 0; /*0x743aa1*/
}
