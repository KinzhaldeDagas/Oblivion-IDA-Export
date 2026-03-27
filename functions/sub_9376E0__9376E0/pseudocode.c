void __thiscall sub_9376E0(__m128 *this, unsigned __int8 *a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  unsigned __int8 *v10; // edx
  char v11; // al
  int v12; // ebx
  unsigned __int8 v13; // [esp+10h] [ebp-4h] BYREF
  char v14; // [esp+11h] [ebp-3h]
  __int16 v15; // [esp+12h] [ebp-2h]
  char v16; // [esp+1Ch] [ebp+8h]

  v15 = 0;
  sub_936790(a8, &v13, a4, a7, a3);
  sub_937470(this, a2, v10, a9);
  v11 = a5;
  if ( a5 )
    v11 = (a5 != 1) + 1;
  v12 = 1 << (v11 + 4);
  if ( a6 )
    v16 = (a6 != 1) + 1;
  else
    v16 = 0;
  v13 ^= v12;
  sub_937470(this, a2, &v13, a9);
  v14 ^= 1 << (v16 + 4);
  sub_937470(this, a2, &v13, a9);
  v13 ^= v12;
  sub_937470(this, a2, &v13, a9);
}
