double __thiscall sub_4C9DA0(int this, float *a2)
{
  int *v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  double v6; // st7
  double v7; // st5
  double v8; // st6
  float v10; // [esp+8h] [ebp-10h]
  float v11; // [esp+Ch] [ebp-Ch]
  float v12; // [esp+Ch] [ebp-Ch]
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+10h] [ebp-8h]
  float v16; // [esp+14h] [ebp-4h]

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v2 = *(int **)(this + 0x3C)) == 0 ) /*0x4c9db1*/
    v3 = 0; /*0x4c9db7*/
  else
    v3 = *v2; /*0x4c9db3*/
  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v4 = *(_DWORD *)(this + 0x3C)) == 0 ) /*0x4c9dc3*/
    v5 = 0; /*0x4c9dca*/
  else
    v5 = *(_DWORD *)(v4 + 4); /*0x4c9dc5*/
  v13 = (float)(v3 << 0xC); /*0x4c9ddc*/
  v6 = v13; /*0x4c9ddf*/
  v7 = dbl_A37650; /*0x4c9de7*/
  v16 = v13 + v7; /*0x4c9df1*/
  v14 = (float)(v5 << 0xC); /*0x4c9df8*/
  v8 = v14; /*0x4c9e02*/
  v15 = v7 + v14; /*0x4c9e04*/
  if ( *a2 >= v6 ) /*0x4c9e10*/
  {
    if ( v16 >= (double)*a2 ) /*0x4c9e79*/
    {
      if ( v15 >= (double)a2[1] ) /*0x4c9f17*/
      {
        if ( a2[1] >= v8 ) /*0x4c9f38*/
          return 0.0; /*0x4c9f4d*/
        else
          return (float)(v8 - a2[1]); /*0x4c9f41*/
      }
      else
      {
        return (float)(a2[1] - v15); /*0x4c9f22*/
      }
    }
    else if ( v15 >= (double)a2[1] ) /*0x4c9e8e*/
    {
      if ( a2[1] >= v8 ) /*0x4c9ec7*/
      {
        return (float)(v6 - *a2); /*0x4c9efa*/
      }
      else
      {
        v12 = v8; /*0x4c9ece*/
        return sub_4C9D50(*a2, a2[1], v16, v12); /*0x4c9ee2*/
      }
    }
    else
    {
      return sub_4C9D50(*a2, a2[1], v16, v15); /*0x4c9ead*/
    }
  }
  else
  {
    if ( v15 < (double)a2[1] ) /*0x4c9e21*/
    {
      v8 = v15; /*0x4c9e23*/
LABEL_12:
      v11 = v8; /*0x4c9e25*/
      v10 = v6; /*0x4c9e2c*/
      return sub_4C9D50(*a2, a2[1], v10, v11); /*0x4c9e47*/
    }
    if ( a2[1] < v8 ) /*0x4c9e56*/
      goto LABEL_12; /*0x4c9e56*/
    return (float)(v6 - *a2); /*0x4c9e60*/
  }
}
