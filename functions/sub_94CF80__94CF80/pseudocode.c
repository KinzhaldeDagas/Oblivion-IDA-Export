int __thiscall sub_94CF80(void *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // [esp+14h] [ebp-6Ch]
  int v7; // [esp+18h] [ebp-68h]
  int v8; // [esp+1Ch] [ebp-64h]
  __m128 v9; // [esp+20h] [ebp-60h] BYREF
  __m128 v10; // [esp+30h] [ebp-50h] BYREF
  __m128 v11; // [esp+40h] [ebp-40h] BYREF
  __m128 v12; // [esp+50h] [ebp-30h] BYREF
  __m128 v13; // [esp+60h] [ebp-20h] BYREF
  __m128 v14; // [esp+70h] [ebp-10h] BYREF

  v6 = sub_8AEBB0(1.0, 1.0, 0.0, 1.0); /*0x94cfb5*/
  v7 = sub_8AEBB0(1.0, 0.5, 0.0, 1.0); /*0x94cfcf*/
  v3 = sub_8AEBB0(1.0, 0.0, 1.0, 1.0); /*0x94cfd3*/
  v4 = *((_DWORD *)this + 3); /*0x94cfdf*/
  v10 = *((__m128 *)this + 6); /*0x94cfe6*/
  v9 = *((__m128 *)this + 7); /*0x94cff0*/
  v11 = *((__m128 *)this + 8); /*0x94d001*/
  v13 = *((__m128 *)this + 9); /*0x94d012*/
  v8 = v3; /*0x94d022*/
  v12 = *((__m128 *)this + 0xA); /*0x94d02a*/
  v14 = *((__m128 *)this + 0xB); /*0x94d03f*/
  sub_958750((int **)this + 0x30, (__m128 *)this + 2, &v10, &v9, 0xFFFF0000, v4, a2); /*0x94d047*/
  sub_958750((int **)this + 0x30, (__m128 *)this + 2, &v9, &v11, 0xFF008000, *((_DWORD *)this + 3), a2); /*0x94d066*/
  sub_958750((int **)this + 0x30, (__m128 *)this + 2, &v11, &v10, 0xFF0000FF, *((_DWORD *)this + 3), a2); /*0x94d085*/
  sub_958750((int **)this + 0x30, (__m128 *)this + 3, &v13, &v12, v6, *((_DWORD *)this + 3), a2); /*0x94d0a8*/
  sub_958750((int **)this + 0x30, (__m128 *)this + 3, &v12, &v14, v7, *((_DWORD *)this + 3), a2); /*0x94d0c8*/
  return sub_958750((int **)this + 0x30, (__m128 *)this + 3, &v14, &v13, v8, *((_DWORD *)this + 3), a2); /*0x94d0f0*/
}
