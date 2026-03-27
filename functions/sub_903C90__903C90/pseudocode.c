int __cdecl sub_903C90(int *a1)
{
  void *v2; // [esp+4h] [ebp-18h] BYREF
  int (__cdecl *v3)(int *, _DWORD *, int, int); // [esp+8h] [ebp-14h]
  int (__cdecl *v4)(int *, _DWORD *, int, int); // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_903C50;
  v3 = sub_901DC0;
  v4 = sub_901E00;
  v5 = sub_901E40;
  v6 = 1;
  v7 = 1;
  sub_8DADD0(a1, (int)&v2, 0xFFFFFFFF, 0xC);
  v2 = sub_903AA0;
  v3 = sub_905630;
  v4 = sub_9050F0;
  v5 = sub_905370;
  v6 = 0;
  v7 = 1;
  return sub_8DADD0(a1, (int)&v2, 0xC, 0xFFFFFFFF);
}
