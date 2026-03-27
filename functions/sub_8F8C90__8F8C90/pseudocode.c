int __cdecl sub_8F8C90(int *a1)
{
  void *v2; // [esp+4h] [ebp-18h] BYREF
  void (__cdecl *v3)(__m128 **, __m128 **, int, int); // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_8F8090;
  v3 = sub_8F8B30;
  v4 = sub_8F8BB0;
  v5 = sub_8F9320;
  v6 = 1;
  v7 = 0;
  sub_8DADD0(a1, (int)&v2, 6, 0xB);
  v2 = sub_8F8030;
  v3 = sub_8F8980;
  v4 = sub_8F85C0;
  v5 = sub_935CC0;
  v6 = 0;
  v7 = 0;
  return sub_8DADD0(a1, (int)&v2, 0xB, 6);
}
