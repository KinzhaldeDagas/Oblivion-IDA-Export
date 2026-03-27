int __cdecl sub_8FEFD0(int a1)
{
  _DWORD v2[11]; // [esp+4h] [ebp-34h] BYREF
  char v3; // [esp+30h] [ebp-8h]
  char v4; // [esp+31h] [ebp-7h]

  memset(&v2[6], 0, 0xC);
  v2[0] = sub_8FE280;
  v2[0xA] = sub_8FE2D0;
  v2[9] = sub_8FF1C0;
  v2[2] = sub_8FF180;
  v2[3] = sub_8FF060;
  v2[4] = sub_8FF0A0;
  v2[5] = sub_8FF0D0;
  v2[1] = sub_8FF100;
  v3 = 1;
  v4 = 1;
  sub_8DAEB0(a1, v2, 5, 1);
  return sub_8DAEB0(a1, v2, 1, 5);
}
