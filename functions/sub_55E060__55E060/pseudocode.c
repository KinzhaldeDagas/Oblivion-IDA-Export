void __thiscall sub_55E060(float *this)
{
  double v2; // st7
  int v3; // esi
  long double v4; // st7
  long double v5; // st6
  double v6; // st5
  double v7; // rt2
  float v8; // [esp+4h] [ebp-28h]
  float v9; // [esp+8h] [ebp-24h]
  float v10; // [esp+Ch] [ebp-20h]
  float v11; // [esp+Ch] [ebp-20h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+1Ch] [ebp-10h]
  float v15; // [esp+20h] [ebp-Ch]
  float v16; // [esp+20h] [ebp-Ch]
  float v17; // [esp+20h] [ebp-Ch]
  float v18; // [esp+20h] [ebp-Ch]
  float v19; // [esp+24h] [ebp-8h]
  float v20; // [esp+24h] [ebp-8h]
  float v21; // [esp+24h] [ebp-8h]
  float v22; // [esp+24h] [ebp-8h]
  float v23; // [esp+24h] [ebp-8h]
  float v24; // [esp+24h] [ebp-8h]
  float v25; // [esp+28h] [ebp-4h]
  float v26; // [esp+28h] [ebp-4h]
  float v27; // [esp+28h] [ebp-4h]
  float v28; // [esp+28h] [ebp-4h]
  float v29; // [esp+28h] [ebp-4h]
  float v30; // [esp+28h] [ebp-4h]
  float v31; // [esp+28h] [ebp-4h]
  float v32; // [esp+28h] [ebp-4h]
  float v33; // [esp+28h] [ebp-4h]

  if ( (dword_B39F14 & 1) == 0 )
  {
    v2 = *(this + 7);
    dword_B39F14 |= 1u;
    flt_B39F10 = v2;
  }
  v3 = 0;
  v25 = *(this + 7) * dbl_A65198;
  v12 = 0.0;
  do
  {
    v13 = *(float *)(4 * v3 + 0xB39F00) + flt_B33E9C;
    *(float *)(4 * v3 + 0xB39F00) = v13;
    if ( 0.0 != *(this + 7) )
      *(float *)(4 * v3 + 0xB39F00) = v13 * flt_B39F10 / *(this + 7);
    v14 = *(this + 7) * dbl_A46E48;
    v15 = *(float *)(8 * v3 + 0xB12538) * v14 * *(float *)(4 * v3 + 0xB39F00);
    v16 = sin(v15);
    v19 = v16;
    v17 = *(float *)(8 * v3 + 0xB1253C) * v14 * *(float *)(4 * v3 + 0xB39F00);
    v18 = cos(v17);
    v4 = v19;
    v5 = v18;
    if ( v3 == 2 )
    {
      v20 = fabs(v4);
      v21 = v20 + v12;
      v6 = v21;
      v22 = fabs(v5);
      v12 = v6 + v22;
    }
    v23 = v5 * v25;
    v10 = v23;
    v24 = v4 * v25;
    sub_7F1760(v3++, v24, v10);
  }
  while ( v3 < 4 );
  v7 = dbl_A2FAA0;
  v26 = 1.0 - flt_B39E40 + flt_B39E40 * v12 * v7;
  v27 = flt_B39E30 * flt_B33E9C * v26;
  v11 = v27;
  v28 = 1.0 - flt_B39E38 + flt_B39E38 * v12 * v7;
  v29 = flt_B33E9C * flt_B39E28 * v28;
  v9 = v29;
  v30 = 1.0 - fLeafRustleAmountSwayInfluence + fLeafRustleAmountSwayInfluence * v12 * v7;
  v31 = v30 * *(this + 7);
  v8 = v31;
  v32 = v7 * (v12 * flt_B39E48) + 1.0 - flt_B39E48;
  v33 = v32 * *(this + 7);
  sub_7F0210(v33, v8, v9, v11);
  flt_B39F10 = *(this + 7);
}
