int __cdecl sub_8FEFD0(int a1)
{
  _DWORD v2[11]; // [esp+4h] [ebp-34h] BYREF
  char v3; // [esp+30h] [ebp-8h]
  char v4; // [esp+31h] [ebp-7h]

  memset(&v2[6], 0, 0xC); /*0x8fefdc*/
  v2[0] = sub_8FE280; /*0x8feff1*/
  v2[0xA] = sub_8FE2D0; /*0x8feff9*/
  v2[9] = sub_8FF1C0; /*0x8ff001*/
  v2[2] = sub_8FF180; /*0x8ff009*/
  v2[3] = sub_8FF060; /*0x8ff011*/
  v2[4] = sub_8FF0A0; /*0x8ff019*/
  v2[5] = sub_8FF0D0; /*0x8ff021*/
  v2[1] = sub_8FF100; /*0x8ff029*/
  v3 = 1; /*0x8ff031*/
  v4 = 1; /*0x8ff036*/
  sub_8DAEB0(a1, v2, 5, 1); /*0x8ff03b*/
  return sub_8DAEB0(a1, v2, 1, 5); /*0x8ff050*/
}
