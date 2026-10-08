int __cdecl sub_917820(int *a1, const void **a2, const void **a3)
{
  int v3; // edx
  const void *v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v10[3]; // [esp+4h] [ebp-30h] BYREF
  const void *v11; // [esp+10h] [ebp-24h] BYREF
  int v12; // [esp+14h] [ebp-20h]
  unsigned int v13; // [esp+18h] [ebp-1Ch]
  int v14; // [esp+1Ch] [ebp-18h]
  int v15; // [esp+20h] [ebp-14h]
  unsigned int v16; // [esp+24h] [ebp-10h]
  unsigned int v17; // [esp+30h] [ebp-4h]

  v3 = a1[1]; /*0x917849*/
  v10[0] = *a1; /*0x91784e*/
  v10[1] = v3; /*0x917857*/
  v10[2] = 0x10; /*0x91785b*/
  v11 = 0; /*0x917863*/
  v12 = 0; /*0x917867*/
  v13 = 0x80000000; /*0x91786b*/
  v14 = 0; /*0x91786f*/
  v15 = 0; /*0x917873*/
  v16 = 0x80000000; /*0x917877*/
  v17 = 0; /*0x91787b*/
  sub_8F2010(v10, &v11, a2, 1); /*0x917890*/
  v4 = v11; /*0x91789b*/
  v11 = *a3; /*0x91789f*/
  v5 = (int)a3[1]; /*0x9178a3*/
  *a3 = v4; /*0x9178a6*/
  v6 = v12; /*0x9178a8*/
  v12 = v5; /*0x9178ac*/
  v7 = (int)a3[2]; /*0x9178b0*/
  a3[1] = (const void *)v6; /*0x9178b3*/
  v8 = v13; /*0x9178b6*/
  v13 = v7; /*0x9178ba*/
  a3[2] = (const void *)v8; /*0x9178c5*/
  v17 = 0xFFFFFFFF; /*0x9178c8*/
  return sub_8B44C0(&v11); /*0x9178d5*/
}
