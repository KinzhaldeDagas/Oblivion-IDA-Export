int __cdecl sub_906400(int *a1)
{
  __m128 *(__cdecl *v2)(int, int, int, int); // [esp+8h] [ebp-18h] BYREF
  void *v3; // [esp+Ch] [ebp-14h]
  void *v4; // [esp+10h] [ebp-10h]
  void *v5; // [esp+14h] [ebp-Ch]
  char v6; // [esp+18h] [ebp-8h]
  char v7; // [esp+19h] [ebp-7h]

  v2 = sub_9068E0; /*0x906416*/
  v3 = sub_8F6410; /*0x90641e*/
  v4 = sub_8F6450; /*0x906426*/
  v5 = sub_905EE0; /*0x90642e*/
  v6 = 1; /*0x906436*/
  v7 = 0; /*0x90643b*/
  sub_8DADD0(a1, (int)&v2, 0x18, 0xFFFFFFFF); /*0x90643f*/
  v2 = sub_906780; /*0x90644f*/
  v3 = sub_9091D0; /*0x906457*/
  v4 = sub_908DE0; /*0x90645f*/
  v5 = sub_906090; /*0x906467*/
  v6 = 0; /*0x90646f*/
  v7 = 0; /*0x906473*/
  sub_8DADD0(a1, (int)&v2, 0xFFFFFFFF, 0x18); /*0x906477*/
  v2 = sub_906390; /*0x906487*/
  v3 = sub_9091D0; /*0x90648f*/
  v4 = sub_908DE0; /*0x906497*/
  v5 = sub_906090; /*0x90649f*/
  v6 = 0; /*0x9064a7*/
  v7 = 1; /*0x9064ab*/
  return sub_8DADD0(a1, (int)&v2, 0x18, 0x18); /*0x9064b5*/
}
