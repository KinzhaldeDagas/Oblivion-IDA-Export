int __cdecl sub_909560(int *a1)
{
  __m128 *(__cdecl *v2)(int, int, int, int); // [esp+8h] [ebp-18h] BYREF
  void *v3; // [esp+Ch] [ebp-14h]
  void *v4; // [esp+10h] [ebp-10h]
  void *v5; // [esp+14h] [ebp-Ch]
  char v6; // [esp+18h] [ebp-8h]
  char v7; // [esp+19h] [ebp-7h]

  v2 = sub_9068E0;
  v3 = sub_8F6410;
  v4 = sub_8F6450;
  v5 = sub_8F6490;
  v6 = 1;
  v7 = 1;
  sub_8DADD0(a1, (int)&v2, 3, 0xFFFFFFFF);
  v2 = sub_906780;
  v3 = sub_9091D0;
  v4 = sub_908DE0;
  v5 = sub_908A40;
  v6 = 0;
  v7 = 1;
  sub_8DADD0(a1, (int)&v2, 0xFFFFFFFF, 3);
  v2 = sub_906940;
  v3 = sub_9091D0;
  v4 = sub_908DE0;
  v5 = sub_908A40;
  v6 = 0;
  v7 = 1;
  return sub_8DADD0(a1, (int)&v2, 3, 3);
}
