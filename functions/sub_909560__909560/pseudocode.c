int __cdecl sub_909560(int *a1)
{
  __m128 *(__cdecl *v2)(int, int, int, int); // [esp+8h] [ebp-18h] BYREF
  void *v3; // [esp+Ch] [ebp-14h]
  void *v4; // [esp+10h] [ebp-10h]
  void *v5; // [esp+14h] [ebp-Ch]
  char v6; // [esp+18h] [ebp-8h]
  char v7; // [esp+19h] [ebp-7h]

  v2 = sub_9068E0; /*0x909576*/
  v3 = sub_8F6410; /*0x90957e*/
  v4 = sub_8F6450; /*0x909586*/
  v5 = sub_8F6490; /*0x90958e*/
  v6 = 1; /*0x909596*/
  v7 = 1; /*0x90959a*/
  sub_8DADD0(a1, (int)&v2, 3, 0xFFFFFFFF); /*0x90959e*/
  v2 = sub_906780; /*0x9095ae*/
  v3 = sub_9091D0; /*0x9095b6*/
  v4 = sub_908DE0; /*0x9095be*/
  v5 = sub_908A40; /*0x9095c6*/
  v6 = 0; /*0x9095ce*/
  v7 = 1; /*0x9095d3*/
  sub_8DADD0(a1, (int)&v2, 0xFFFFFFFF, 3); /*0x9095d7*/
  v2 = sub_906940; /*0x9095e7*/
  v3 = sub_9091D0; /*0x9095ef*/
  v4 = sub_908DE0; /*0x9095f7*/
  v5 = sub_908A40; /*0x9095ff*/
  v6 = 0; /*0x909607*/
  v7 = 1; /*0x90960c*/
  return sub_8DADD0(a1, (int)&v2, 3, 3); /*0x909615*/
}
