int __cdecl sub_90A720(int *a1)
{
  _DWORD *(__cdecl *v2)(_DWORD *, int *, int *, int); // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_90A6E0;
  v3 = sub_90A0F0;
  v4 = sub_90A130;
  v5 = sub_90A170;
  v6 = 1;
  v7 = 1;
  sub_8DADD0(a1, (int)&v2, 0xFFFFFFFF, 0xB);
  v2 = sub_90A5A0;
  v3 = sub_909F50;
  v4 = sub_909940;
  v5 = sub_909C40;
  v6 = 0;
  v7 = 1;
  return sub_8DADD0(a1, (int)&v2, 0xB, 0xFFFFFFFF);
}
