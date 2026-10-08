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

  v13 = a1 - a3; /*0x4c9d58*/
  v8 = a2 - a4; /*0x4c9d64*/
  v4 = v8; /*0x4c9d68*/
  v9 = v13 * v13; /*0x4c9d72*/
  v5 = v4 * v4; /*0x4c9d7e*/
  v6 = v9; /*0x4c9d7e*/
  v10 = v5; /*0x4c9d80*/
  v11 = v6 + v10; /*0x4c9d88*/
  return (float)sqrt(v11); /*0x4c9d9d*/
}
