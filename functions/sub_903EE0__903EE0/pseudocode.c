int __cdecl sub_903EE0(int *a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-14h] BYREF
  char v3; // [esp+14h] [ebp-4h]
  char v4; // [esp+15h] [ebp-3h]

  v3 = 0;
  v4 = 0;
  v2[0] = sub_903E20;
  v2[1] = sub_903D80;
  v2[2] = nullsub_5;
  v2[3] = nullsub_5;
  sub_8DADD0(a1, (int)v2, 0x1A, 0xFFFFFFFF);
  return sub_8DADD0(a1, (int)v2, 0xFFFFFFFF, 0x1A);
}
