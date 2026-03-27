int __cdecl sub_9029A0(int *a1)
{
  void *v2; // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  int (__cdecl *v5)(int *, int *, __m128 *, int, int); // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_902930;
  v3 = sub_902780;
  v4 = sub_902800;
  v5 = sub_902840;
  v6 = 1;
  v7 = 1;
  sub_8DADD0(a1, (int)&v2, 0xD, 1);
  v2 = sub_902100;
  v3 = sub_9023F0;
  v4 = sub_902160;
  v5 = sub_902590;
  v6 = 0;
  v7 = 1;
  return sub_8DADD0(a1, (int)&v2, 1, 0xD);
}
