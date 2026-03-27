int sub_7A6D30()
{
  double v0; // st6
  float *v1; // esi
  double v2; // st7
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // ecx
  double v7; // st6
  int v8; // [esp+4h] [ebp+4h]
  float v9; // [esp+4h] [ebp+4h]

  v0 = dbl_A89C50;
  v1 = flt_B42A90;
  while ( 1 )
  {
    v2 = v0;
    v3 = Double_To_SInt32(v0);
    v4 = 0x41A7 * v3;
    result = 0x7FFFFFFF * (v3 / 0x1F31D);
    v6 = v4 - result;
    v8 = v6;
    if ( v6 <= 0 )
      v8 = v6 + 0x7FFFFFFF;
    v7 = (double)v8;
    ++v1;
    v9 = v7;
    v1[0xFFFFFFFF] = v9 * v2;
    if ( (int)v1 >= (int)&dbl_B42C90 )
      break;
    v0 = v2;
  }
  dbl_B42C90 = v7;
  return result;
}
