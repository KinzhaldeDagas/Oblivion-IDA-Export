int __thiscall sub_8F9EA0(float *this, __m128 **a2, __m128 **a3, int a4, int a5)
{
  int (__stdcall **v6)(char); // [esp+0h] [ebp-Ch] BYREF
  char v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  v8 = a5;
  v7 = 0;
  v6 = &off_A9B4F0;
  return sub_8F9AF0(this, a3, a2, a4, (int)&v6);
}
