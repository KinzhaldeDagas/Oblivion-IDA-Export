int __thiscall sub_8FBF90(void *this, __m128 **a2, int *a3, int a4, int a5)
{
  int (__stdcall **v6)(char); // [esp+0h] [ebp-Ch] BYREF
  char v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  v8 = a5;
  v7 = 0;
  v6 = &off_A9B4F0;
  return sub_8FBCE0(this, a3, a2, a4, (int)&v6);
}
