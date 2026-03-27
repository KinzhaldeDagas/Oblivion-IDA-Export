int __cdecl sub_901A80(int *a1)
{
  void *v2; // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_901A40;
  v3 = sub_901060;
  v4 = sub_9010A0;
  v5 = sub_9010E0;
  v6 = 1;
  v7 = 1;
  sub_8DADD0(a1, (int)&v2, 0x12, 0x15);
  v2 = sub_901730;
  v3 = sub_900420;
  v4 = sub_900770;
  v5 = sub_900CA0;
  v6 = 0;
  v7 = 1;
  return sub_8DADD0(a1, (int)&v2, 0x15, 0x12);
}
