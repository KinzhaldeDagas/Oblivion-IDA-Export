int __cdecl sub_8FA040(int *a1)
{
  void *v2; // [esp+4h] [ebp-18h] BYREF
  int (__cdecl *v3)(__m128 **, __m128 **, int, int); // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_8F9410; /*0x8fa053*/
  v3 = sub_8F9EE0; /*0x8fa05b*/
  v4 = sub_8F9F60; /*0x8fa063*/
  v5 = sub_8F9320; /*0x8fa06b*/
  v6 = 1; /*0x8fa073*/
  v7 = 0; /*0x8fa078*/
  sub_8DADD0(a1, (int)&v2, 6, 8); /*0x8fa07d*/
  v2 = sub_8F92C0; /*0x8fa08d*/
  v3 = sub_8F9CC0; /*0x8fa095*/
  v4 = sub_8F98C0; /*0x8fa09d*/
  v5 = sub_935CC0; /*0x8fa0a5*/
  v6 = 0; /*0x8fa0ad*/
  v7 = 0; /*0x8fa0b2*/
  return sub_8DADD0(a1, (int)&v2, 8, 6); /*0x8fa0bc*/
}
