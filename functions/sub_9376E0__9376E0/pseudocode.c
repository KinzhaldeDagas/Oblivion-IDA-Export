void __thiscall sub_9376E0(__m128 *this, unsigned __int8 *a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  unsigned __int8 *v10; // edx
  char v11; // al
  int v12; // ebx
  unsigned __int8 v13; // [esp+10h] [ebp-4h] BYREF
  char v14; // [esp+11h] [ebp-3h]
  __int16 v15; // [esp+12h] [ebp-2h]
  char v16; // [esp+1Ch] [ebp+8h]

  v15 = 0; /*0x9376fd*/
  sub_936790(a8, &v13, a4, a7, a3); /*0x937704*/
  sub_937470(this, a2, v10, a9); /*0x937719*/
  v11 = a5; /*0x93771e*/
  if ( a5 ) /*0x937724*/
    v11 = (a5 != 1) + 1; /*0x93772f*/
  v12 = 1 << (v11 + 4); /*0x93773d*/
  if ( a6 ) /*0x937741*/
    v16 = (a6 != 1) + 1; /*0x937752*/
  else
    v16 = 0; /*0x937743*/
  v13 ^= v12; /*0x937762*/
  sub_937470(this, a2, &v13, a9); /*0x937769*/
  v14 ^= 1 << (v16 + 4); /*0x937785*/
  sub_937470(this, a2, &v13, a9); /*0x93778c*/
  v13 ^= v12; /*0x9377a0*/
  sub_937470(this, a2, &v13, a9); /*0x9377a4*/
}
