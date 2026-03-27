signed int __cdecl sub_743A40(_DWORD *a1, unsigned int a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // eax
  int v7; // ecx
  int v8; // eax
  char v9; // al
  int v10; // eax
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

  if ( !a1 )
    return 0xFFFFFFFE;
  v3 = (_DWORD *)a1[7];
  if ( !v3 )
    return 0xFFFFFFFE;
  v4 = a2;
  if ( a2 > 4 )
    return 0xFFFFFFFE;
  if ( !a1[3] || !*a1 && a1[1] || (v5 = v3[1], v5 == 0x29A) && a2 != 4 )
  {
    a1[6] = off_A82840[0];
    return 0xFFFFFFFE;
  }
  if ( !a1[4] )
  {
    a1[6] = off_A8284C[0];
    return 0xFFFFFFFB;
  }
  v7 = v3[8];
  *v3 = a1;
  v22 = v7;
  v3[8] = a2;
  if ( v5 == 0x2A )
  {
    if ( v3[6] == 2 )
    {
      *(_BYTE *)(v3[2] + v3[5]++) = 0x1F;
      *(_BYTE *)(v3[5] + v3[2]) = 0x8B;
      *(_BYTE *)(++v3[5] + v3[2]) = 8;
      *(_BYTE *)(++v3[5] + v3[2]) = 0;
      *(_BYTE *)(++v3[5] + v3[2]) = 0;
      *(_BYTE *)(++v3[5] + v3[2]) = 0;
      *(_BYTE *)(++v3[5] + v3[2]) = 0;
      *(_BYTE *)(++v3[5] + v3[2]) = 0;
      ++v3[5];
      v8 = v3[0x1F];
      if ( v8 == 9 )
      {
        v9 = 2;
      }
      else if ( (int)v3[0x20] >= 2 || v8 < 2 )
      {
        v9 = 4;
      }
      else
      {
        v9 = 0;
      }
      *(_BYTE *)(v3[5] + v3[2]) = v9;
      *(_BYTE *)(++v3[5] + v3[2]) = 0xFF;
      ++v3[5];
      v3[1] = 0x71;
      v10 = sub_745D90(0, 0, 0);
LABEL_32:
      a1[0xC] = v10;
      goto LABEL_33;
    }
    if ( (int)v3[0x20] < 2 )
    {
      v11 = v3[0x1F];
      if ( v11 >= 2 )
      {
        if ( v11 >= 6 )
        {
          v13 = v11 == 6;
          v4 = a2;
          v12 = !v13 + 2;
        }
        else
        {
          v4 = a2;
          v12 = 1;
        }
        goto LABEL_27;
      }
      v4 = a2;
    }
    v12 = 0;
LABEL_27:
    v14 = (v12 << 6) | (((v3[0xA] - 8) << 0xC) + 0x800);
    if ( v3[0x19] )
      v14 |= 0x20u;
    v3[1] = 0x71;
    v15 = sub_7439C0((int)v3, 0x1F * (v14 / 0x1F + 1));
    if ( v3[0x19] )
    {
      v16 = sub_7439C0(v15, *((_WORD *)a1 + 0x19));
      sub_7439C0(v16, *((_WORD *)a1 + 0x18));
    }
    v10 = sub_7459B0(0, 0, 0);
    goto LABEL_32;
  }
LABEL_33:
  if ( v3[5] )
  {
    sub_7439F0((int)a1);
    if ( !a1[4] )
    {
LABEL_35:
      v3[8] = 0xFFFFFFFF;
      return 0;
    }
  }
  else if ( !a1[1] && v4 <= v22 && v4 != 4 )
  {
    a1[6] = off_A8284C[0];
    return 0xFFFFFFFB;
  }
  v17 = v3[1];
  if ( v17 == 0x29A )
  {
    if ( a1[1] )
    {
      a1[6] = off_A8284C[0];
      return 0xFFFFFFFB;
    }
LABEL_45:
    if ( !v3[0x1B] && (!v4 || v17 == 0x29A) )
      goto LABEL_59;
    goto LABEL_48;
  }
  if ( !a1[1] )
    goto LABEL_45;
LABEL_48:
  v18 = funcs_743CC0[3 * v3[0x1F]]((int)v3, v4);
  if ( v18 == 2 || v18 == 3 )
    v3[1] = 0x29A;
  if ( !v18 || v18 == 2 )
  {
    if ( a1[4] )
      return 0;
    v3[8] = 0xFFFFFFFF;
    return 0;
  }
  if ( v18 == 1 )
  {
    if ( v4 == 1 )
    {
      sub_747420((int)v3);
    }
    else
    {
      sub_747380((int)v3, 0, 0, 0);
      if ( v4 == 3 )
      {
        *(_WORD *)(v3[0xF] + 2 * v3[0x11] - 2) = 0;
        _memset(v3[0xF], 0, 2 * v3[0x11] - 2);
      }
    }
    sub_7439F0((int)a1);
    if ( !a1[4] )
      goto LABEL_35;
  }
LABEL_59:
  if ( v4 != 4 )
    return 0;
  v19 = v3[6];
  if ( v19 <= 0 )
    return 1;
  if ( v19 == 2 )
  {
    *(_BYTE *)(v3[2] + v3[5]++) = *((_BYTE *)a1 + 0x30);
    *(_BYTE *)(v3[5] + v3[2]) = *((_BYTE *)a1 + 0x31);
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 0x32);
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 0x33);
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 8);
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 9);
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 0xA);
    *(_BYTE *)(++v3[5] + v3[2]) = *((_BYTE *)a1 + 0xB);
    ++v3[5];
  }
  else
  {
    v20 = sub_7439C0((int)v3, *((_WORD *)a1 + 0x19));
    sub_7439C0(v20, *((_WORD *)a1 + 0x18));
  }
  sub_7439F0((int)a1);
  v21 = v3[6];
  if ( v21 > 0 )
    v3[6] = -v21;
  return v3[5] == 0;
}
