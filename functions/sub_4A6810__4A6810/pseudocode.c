double __cdecl sub_4A6810(float a1, float a2, float a3)
{
  float v4[2]; // [esp+0h] [ebp-Ch] BYREF
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+10h] [ebp+4h]
  float v7; // [esp+10h] [ebp+4h]

  v4[1] = a2;
  v4[0] = a1;
  v5 = a3;
  v6 = sub_43F350(v4);
  v7 = v5 / v6;
  return (float)acos(v7);
}
