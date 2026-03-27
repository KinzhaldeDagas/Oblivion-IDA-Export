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

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v2 = *(int **)(this + 0x3C)) == 0 )
    v3 = 0;
  else
    v3 = *v2;
  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v4 = *(_DWORD *)(this + 0x3C)) == 0 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(v4 + 4);
  v13 = (float)(v3 << 0xC);
  v6 = v13;
  v7 = dbl_A37650;
  v16 = v13 + v7;
  v14 = (float)(v5 << 0xC);
  v8 = v14;
  v15 = v7 + v14;
  if ( *a2 >= v6 )
  {
    if ( v16 >= (double)*a2 )
    {
      if ( v15 >= (double)a2[1] )
      {
        if ( a2[1] >= v8 )
          return 0.0;
        else
          return (float)(v8 - a2[1]);
      }
      else
      {
        return (float)(a2[1] - v15);
      }
    }
    else if ( v15 >= (double)a2[1] )
    {
      if ( a2[1] >= v8 )
      {
        return (float)(v6 - *a2);
      }
      else
      {
        v12 = v8;
        return sub_4C9D50(*a2, a2[1], v16, v12);
      }
    }
    else
    {
      return sub_4C9D50(*a2, a2[1], v16, v15);
    }
  }
  else
  {
    if ( v15 < (double)a2[1] )
    {
      v8 = v15;
LABEL_12:
      v11 = v8;
      v10 = v6;
      return sub_4C9D50(*a2, a2[1], v10, v11);
    }
    if ( a2[1] < v8 )
      goto LABEL_12;
    return (float)(v6 - *a2);
  }
}
