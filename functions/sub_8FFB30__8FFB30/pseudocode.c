int __cdecl sub_8FFB30(int a1, int a2, int a3)
{
  _DWORD v4[11]; // [esp+0h] [ebp-30h] BYREF
  char v5; // [esp+2Ch] [ebp-4h]
  char v6; // [esp+2Dh] [ebp-3h]

  memset(&v4[6], 0, 0xC);
  v6 = 0;
  v4[0] = sub_8FF120;
  v4[0xA] = sub_8FF2C0;
  v4[9] = sub_8FF1C0;
  v4[2] = sub_8FF180;
  v4[3] = sub_8FF060;
  v4[4] = sub_8FF0A0;
  v4[5] = sub_8FF0D0;
  v4[1] = sub_8FF100;
  v5 = 1;
  return sub_8DAEB0(a1, v4, a2, a3);
}
