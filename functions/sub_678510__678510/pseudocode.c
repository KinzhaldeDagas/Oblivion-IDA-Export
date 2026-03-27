double __usercall sub_678510@<st0>(int a1@<ecx>, float a2@<edi>)
{
  _DWORD *v3; // ecx
  bool v4; // zf
  double result; // st7
  double v6; // st6
  int v7; // eax
  char v8; // cl
  double v9; // st4
  double v10; // st5
  double v11; // st6
  double v12; // st5
  float v13; // [esp+0h] [ebp-14h]
  float v14; // [esp+0h] [ebp-14h]
  float v15; // [esp+0h] [ebp-14h]
  float v16; // [esp+0h] [ebp-14h]
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]
  float v19; // [esp+10h] [ebp-4h]

  v3 = (_DWORD *)dword_B3BF80;
  v4 = dword_B3BF80 == 0;
  dword_B3BCF4 = 0x6E;
  if ( !v4 )
    sub_683420(v3);
  sub_60DEA0();
  v17 = flt_B33E9C;
  v18 = flt_B3BCF0 + v17;
  result = v18;
  sub_673B10(v18);
  v6 = v17;
  v7 = Double_To_SInt32(v18);
  v8 = 1;
  v19 = *(float *)(a1 + 0x24) + v17;
  v9 = v19;
  *(float *)(a1 + 0x24) = v19;
  if ( v7 >= 0x32 )
  {
    v11 = 0.0;
  }
  else if ( v7 >= 0xA )
  {
    if ( v9 >= 1.0 )
    {
      v11 = 0.0;
      *(float *)(a1 + 0x24) = 0.0;
    }
    else
    {
      v8 = 0;
      v12 = v9 + (1.0 - v6) * dbl_A2FAA0;
      v11 = 0.0;
      *(float *)(a1 + 0x24) = v12;
    }
  }
  else
  {
    v10 = 0.0;
    if ( v9 >= 1.0 )
    {
      v11 = 0.0;
    }
    else
    {
      v8 = 0;
      v10 = v6 + v9;
      v11 = 0.0;
    }
    *(float *)(a1 + 0x24) = v10;
  }
  dword_B3BCF4 = 0x78;
  if ( v8 )
  {
    if ( *(_BYTE *)(a1 + 0xA1) )
    {
      if ( !byte_B333B8 )
      {
        v13 = v11;
        sub_673C10((ActorList *)a1, v13, 0);
        v11 = 0.0;
      }
    }
    dword_B3BCF4 = 0x82;
    if ( *(_BYTE *)(a1 + 0xA3) )
    {
      if ( !byte_B333B8 )
      {
        v14 = v11;
        sub_673E90(*(float *)&a1, a2, v14, 0.0);
        v11 = 0.0;
      }
    }
    dword_B3BCF4 = 0x8C;
    if ( *(_BYTE *)(a1 + 0xA2) )
    {
      v15 = v11;
      sub_674200((ActorList *)a1, a2, v15, 0.0);
      v11 = 0.0;
    }
  }
  dword_B3BCF4 = 0xB4;
  if ( *(_BYTE *)(a1 + 0xA0) )
  {
    v16 = v11;
    sub_677EC0(a1, a2, result, v11, v16, 0.0);
  }
  dword_B3BCF4 = 0xBE;
  return result;
}
