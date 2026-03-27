int __cdecl sub_8F7F60(int *a1)
{
  _DWORD *(__cdecl *v2)(int, int, int, int); // [esp+4h] [ebp-18h] BYREF
  int (__cdecl *v3)(_DWORD); // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_8F7F20;
  v3 = nullsub_5;
  v4 = sub_8F78B0;
  v5 = sub_8F9320;
  v6 = 1;
  v7 = 1;
  sub_8DADD0(a1, (int)&v2, 1, 0x11);
  v2 = sub_8F7C30;
  v3 = nullsub_5;
  v4 = sub_8F7610;
  v5 = sub_935CC0;
  v6 = 0;
  v7 = 1;
  return sub_8DADD0(a1, (int)&v2, 0x11, 1);
}
