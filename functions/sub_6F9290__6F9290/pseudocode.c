float *__cdecl sub_6F9290(float *a1, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st3
  float v7; // [esp+0h] [ebp-24h] BYREF
  float v8; // [esp+4h] [ebp-20h]
  float v9; // [esp+8h] [ebp-1Ch]
  float v10; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+18h] [ebp-Ch]
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]

  v8 = a3; /*0x6f929f*/
  v7 = a2; /*0x6f92a6*/
  v9 = a4; /*0x6f92a9*/
  Vector3_NormalizeInPlace(&v7); /*0x6f92ad*/
  v4 = v7; /*0x6f92b4*/
  a2 = fabs(v7); /*0x6f92bb*/
  v10 = a2; /*0x6f92c3*/
  a2 = fabs(v8); /*0x6f92cf*/
  v11 = a2; /*0x6f92d7*/
  a2 = fabs(v9); /*0x6f92e3*/
  v12 = a2; /*0x6f92eb*/
  v5 = v11; /*0x6f92f3*/
  if ( v11 < (double)v10 || a2 < (double)v10 ) /*0x6f930b*/
  {
    if ( v10 < v5 || v5 > a2 ) /*0x6f9337*/
    {
      v10 = -v8; /*0x6f9351*/
      v11 = v7; /*0x6f9355*/
      v4 = 0.0; /*0x6f9359*/
    }
    else
    {
      v10 = -v9; /*0x6f933d*/
      v11 = 0.0; /*0x6f9343*/
    }
  }
  else
  {
    v10 = 0.0; /*0x6f9317*/
    v4 = v8; /*0x6f931b*/
    v11 = -v9; /*0x6f931f*/
  }
  v12 = v4; /*0x6f935f*/
  a3 = v11; /*0x6f936b*/
  a2 = v10; /*0x6f9373*/
  a4 = v12; /*0x6f9377*/
  Vector3_NormalizeInPlace(&a2); /*0x6f937b*/
  v13 = a3 * v9 - a4 * v8; /*0x6f93a2*/
  v10 = v13; /*0x6f93ad*/
  v14 = a4 * v7 - v9 * a2; /*0x6f93c3*/
  v11 = v14; /*0x6f93cb*/
  v15 = v8 * a2 - a3 * v7; /*0x6f93d9*/
  v12 = v15; /*0x6f93e1*/
  Vector3_NormalizeInPlace(&v10); /*0x6f93e5*/
  v13 = v11 * v9 - v12 * v8; /*0x6f940c*/
  a2 = v13; /*0x6f9417*/
  v14 = v12 * v7 - v9 * v10; /*0x6f942d*/
  a3 = v14; /*0x6f9435*/
  v15 = v8 * v10 - v11 * v7; /*0x6f9443*/
  a4 = v15; /*0x6f944b*/
  Vector3_NormalizeInPlace(&a2); /*0x6f944f*/
  *a1 = a2; /*0x6f945e*/
  a1[1] = a3; /*0x6f9464*/
  a1[2] = a4; /*0x6f946b*/
  a1[3] = v10; /*0x6f9472*/
  a1[4] = v11; /*0x6f9479*/
  a1[5] = v12; /*0x6f9480*/
  a1[6] = v7; /*0x6f9486*/
  a1[7] = v8; /*0x6f948d*/
  a1[8] = v9; /*0x6f9494*/
  return a1; /*0x6f9497*/
}
