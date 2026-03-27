int __cdecl sub_8F7210(int *a1)
{
  _DWORD *(__cdecl *v2)(int, int, _DWORD *, int); // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_8F7140;
  v3 = sub_8F6410;
  v4 = sub_8F6450;
  v5 = sub_8F6490;
  v6 = 1;
  v7 = 1;
  sub_8DADD0(a1, (int)&v2, 3, 0xD);
  v2 = sub_8F6780;
  v3 = sub_9091D0;
  v4 = sub_908DE0;
  v5 = sub_908A40;
  v6 = 0;
  v7 = 1;
  return sub_8DADD0(a1, (int)&v2, 0xD, 3);
}
