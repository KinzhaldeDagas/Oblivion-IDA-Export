int __cdecl sub_90B8F0(int *a1)
{
  _DWORD *(__cdecl *v2)(_DWORD *, int *, int *, int); // [esp+4h] [ebp-18h] BYREF
  int (__cdecl *v3)(_DWORD *, int *, _DWORD *, int); // [esp+8h] [ebp-14h]
  int (__cdecl *v4)(_DWORD *, _DWORD *, _DWORD *, int); // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_90B8B0;
  v3 = sub_90B530;
  v4 = sub_90B570;
  v5 = sub_90B5B0;
  v6 = 1;
  v7 = 0;
  sub_8DADD0(a1, (int)&v2, 0xFFFFFFFF, 0x16);
  v2 = sub_90A960;
  v3 = sub_90B3C0;
  v4 = sub_90B150;
  v5 = sub_90ADA0;
  v6 = 0;
  v7 = 0;
  return sub_8DADD0(a1, (int)&v2, 0x16, 0xFFFFFFFF);
}
