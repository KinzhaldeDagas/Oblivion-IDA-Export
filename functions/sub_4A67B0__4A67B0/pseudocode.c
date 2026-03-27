int __thiscall sub_4A67B0(int *this, int a2, float a3, float a4, int a5, int a6)
{
  float v8[2]; // [esp+4h] [ebp-8h] BYREF

  sub_4A6920(v8);
  v8[0] = a3;
  v8[1] = a4;
  return sub_4A6460(this, a2, v8, a6);
}
