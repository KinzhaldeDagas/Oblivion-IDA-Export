int __thiscall sub_94CF80(void *this, int a2)
{
  int v3; // eax
  float v4; // ecx
  int v6; // [esp+14h] [ebp-6Ch]
  int v7; // [esp+18h] [ebp-68h]
  int v8; // [esp+1Ch] [ebp-64h]
  __m128 v9; // [esp+20h] [ebp-60h] BYREF
  __m128 v10; // [esp+30h] [ebp-50h] BYREF
  __m128 v11; // [esp+40h] [ebp-40h] BYREF
  __m128 v12; // [esp+50h] [ebp-30h] BYREF
  __m128 v13; // [esp+60h] [ebp-20h] BYREF
  __m128 v14; // [esp+70h] [ebp-10h] BYREF

  v6 = sub_8AEBB0(1.0, 1.0, 0.0, 1.0);
  v7 = sub_8AEBB0(1.0, 0.5, 0.0, 1.0);
  v3 = sub_8AEBB0(1.0, 0.0, 1.0, 1.0);
  v4 = *((float *)this + 3);
  v10 = *((__m128 *)this + 6);
  v9 = *((__m128 *)this + 7);
  v11 = *((__m128 *)this + 8);
  v13 = *((__m128 *)this + 9);
  v8 = v3;
  v12 = *((__m128 *)this + 0xA);
  v14 = *((__m128 *)this + 0xB);
  sub_958750((int **)this + 0x30, (__m128 *)this + 2, &v10, (int)&v9, 0xFFFF0000, v4, a2);
  sub_958750((int **)this + 0x30, (__m128 *)this + 2, &v9, (int)&v11, 0xFF008000, *((float *)this + 3), a2);
  sub_958750((int **)this + 0x30, (__m128 *)this + 2, &v11, (int)&v10, 0xFF0000FF, *((float *)this + 3), a2);
  sub_958750((int **)this + 0x30, (__m128 *)this + 3, &v13, (int)&v12, v6, *((float *)this + 3), a2);
  sub_958750((int **)this + 0x30, (__m128 *)this + 3, &v12, (int)&v14, v7, *((float *)this + 3), a2);
  return sub_958750((int **)this + 0x30, (__m128 *)this + 3, &v14, (int)&v13, v8, *((float *)this + 3), a2);
}
