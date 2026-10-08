int __cdecl sub_8F8C90(int *a1)
{
  void *v2; // [esp+4h] [ebp-18h] BYREF
  void (__cdecl *v3)(__m128 **, __m128 **, int, int); // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_8F8090; /*0x8f8ca3*/
  v3 = sub_8F8B30; /*0x8f8cab*/
  v4 = sub_8F8BB0; /*0x8f8cb3*/
  v5 = sub_8F9320; /*0x8f8cbb*/
  v6 = 1; /*0x8f8cc3*/
  v7 = 0; /*0x8f8cc8*/
  sub_8DADD0(a1, (int)&v2, 6, 0xB); /*0x8f8ccd*/
  v2 = sub_8F8030; /*0x8f8cdd*/
  v3 = sub_8F8980; /*0x8f8ce5*/
  v4 = sub_8F85C0; /*0x8f8ced*/
  v5 = sub_935CC0; /*0x8f8cf5*/
  v6 = 0; /*0x8f8cfd*/
  v7 = 0; /*0x8f8d02*/
  return sub_8DADD0(a1, (int)&v2, 0xB, 6); /*0x8f8d0c*/
}
