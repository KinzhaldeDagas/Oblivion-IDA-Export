signed int __thiscall sub_9803B0(float *this, float *a2, float *a3)
{
  int v4; // edx
  long double v5; // st7
  float *v6; // ecx
  double v7; // st4
  double v8; // st3
  double v9; // st2
  double v10; // st3
  double v11; // st2
  double v12; // rt2
  double v13; // st2
  double v14; // st3
  float v16; // [esp+0h] [ebp-24h]
  float v17; // [esp+0h] [ebp-24h]
  float v18; // [esp+4h] [ebp-20h]
  float v19; // [esp+8h] [ebp-1Ch]
  float v20; // [esp+8h] [ebp-1Ch]
  float v21; // [esp+8h] [ebp-1Ch]
  float v22; // [esp+Ch] [ebp-18h]
  float v23; // [esp+10h] [ebp-14h]
  float v24; // [esp+14h] [ebp-10h]
  float v25[3]; // [esp+18h] [ebp-Ch]
  float v26; // [esp+28h] [ebp+4h]
  float v27; // [esp+28h] [ebp+4h]
  float v28; // [esp+28h] [ebp+4h]
  float v29; // [esp+28h] [ebp+4h]
  float v30; // [esp+2Ch] [ebp+8h]
  float v31; // [esp+2Ch] [ebp+8h]
  float v32; // [esp+2Ch] [ebp+8h]
  float v33; // [esp+2Ch] [ebp+8h]
  float v34; // [esp+2Ch] [ebp+8h]

  v18 = flt_A3B888; /*0x9803bd*/
  v16 = flt_A32048; /*0x9803cc*/
  v4 = 0; /*0x9803d0*/
  v5 = *(this + 0x1B); /*0x9803d2*/
  v6 = this + 0x14; /*0x9803d5*/
  v19 = fabs(v5); /*0x9803da*/
  v25[0] = v19; /*0x9803e2*/
  v20 = fabs(v6[8]); /*0x9803eb*/
  v25[1] = v20; /*0x9803f3*/
  v21 = fabs(v6[9]); /*0x9803fc*/
  v25[2] = v21; /*0x980404*/
  v22 = v6[0xFFFFFFFB] - *a2; /*0x98040d*/
  v23 = v6[0xFFFFFFFC] - a2[1]; /*0x980417*/
  v24 = v6[0xFFFFFFFD] - a2[2]; /*0x980421*/
  v7 = v16; /*0x98042f*/
  do /*0x980556*/
  {
    v26 = v23 * v6[0xFFFFFFFF] + v22 * v6[0xFFFFFFFE] + v24 * *v6; /*0x980447*/
    v30 = *a3 * v6[0xFFFFFFFE] + v6[0xFFFFFFFF] * a3[1] + a3[2] * *v6; /*0x98045f*/
    v8 = v30; /*0x980463*/
    v31 = fabs(v30); /*0x98046b*/
    if ( v31 <= dbl_A7C398 ) /*0x98047e*/
    {
      v29 = fabs(v26); /*0x980538*/
      if ( v25[v4] < (double)v29 ) /*0x98054b*/
        return 0; /*0x98054b*/
    }
    else
    {
      v32 = 1.0 / v8; /*0x980486*/
      v9 = v26; /*0x98048e*/
      v27 = (v25[v4] + v26) * v32; /*0x9804a0*/
      v33 = v32 * (v9 - v25[v4]); /*0x9804aa*/
      v10 = v27; /*0x9804ae*/
      v11 = v33; /*0x9804b2*/
      if ( v33 < (double)v27 ) /*0x9804bd*/
      {
        v34 = v27; /*0x9804c1*/
        v28 = v11; /*0x9804c5*/
        v10 = v28; /*0x9804d1*/
        v11 = v34; /*0x9804d5*/
      }
      if ( v18 >= v10 ) /*0x9804e4*/
      {
        v14 = v11; /*0x9804ee*/
      }
      else
      {
        v12 = v11; /*0x9804e6*/
        v13 = v10; /*0x9804e6*/
        v14 = v12; /*0x9804e6*/
        v18 = v13; /*0x9804e8*/
      }
      if ( v14 < v7 ) /*0x9804f7*/
      {
        v17 = v14; /*0x9804fb*/
        v7 = v17; /*0x9804ff*/
      }
      if ( v18 > v7 || v7 < 0.0 ) /*0x98051d*/
        return 0; /*0x98052d*/
    }
    ++v4; /*0x98054d*/
    v6 += 3; /*0x980550*/
  }
  while ( v4 < 3 ); /*0x980556*/
  return 1; /*0x98052a*/
}
