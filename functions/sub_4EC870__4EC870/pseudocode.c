double __stdcall sub_4EC870(float a1, float a2, float a3, float a4, float a5)
{
  double v5; // st5
  double v6; // st5
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  float v13; // [esp+0h] [ebp-4h]
  float v14; // [esp+10h] [ebp+Ch]
  float v15; // [esp+10h] [ebp+Ch]

  v13 = 0.0;
  v5 = a1;
  if ( a1 >= (double)a4 )
  {
    v7 = a3;
    v13 = v5 - a4;
  }
  else
  {
    v6 = v5 + a3;
    v7 = a3;
    if ( a4 > v6 )
      v13 = a4 - v6;
  }
  v8 = v7;
  v14 = 0.0;
  v9 = a5;
  v10 = a2;
  if ( a2 >= (double)a5 )
  {
    v14 = v10 - v9;
  }
  else
  {
    v11 = v8 + v10;
    if ( v9 > v11 )
      v14 = v9 - v11;
  }
  v15 = v14 * v14 + v13 * v13;
  return (float)sqrt(v15);
}
