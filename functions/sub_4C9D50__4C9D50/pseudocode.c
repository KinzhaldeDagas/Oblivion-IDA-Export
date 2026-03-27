double __cdecl sub_4C9D50(float a1, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st7
  float v8; // [esp+4h] [ebp+4h]
  float v9; // [esp+4h] [ebp+4h]
  float v10; // [esp+4h] [ebp+4h]
  float v11; // [esp+4h] [ebp+4h]
  float v13; // [esp+Ch] [ebp+Ch]

  v13 = a1 - a3;
  v8 = a2 - a4;
  v4 = v8;
  v9 = v13 * v13;
  v5 = v4 * v4;
  v6 = v9;
  v10 = v5;
  v11 = v6 + v10;
  return (float)sqrt(v11);
}
