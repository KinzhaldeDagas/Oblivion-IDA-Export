int __cdecl sub_8FFB30(int a1, int a2, int a3)
{
  _DWORD v4[11]; // [esp+0h] [ebp-30h] BYREF
  char v5; // [esp+2Ch] [ebp-4h]
  char v6; // [esp+2Dh] [ebp-3h]

  memset(&v4[6], 0, 0xC); /*0x8ffb39*/
  v6 = 0; /*0x8ffb45*/
  v4[0] = sub_8FF120; /*0x8ffb58*/
  v4[0xA] = sub_8FF2C0; /*0x8ffb60*/
  v4[9] = sub_8FF1C0; /*0x8ffb68*/
  v4[2] = sub_8FF180; /*0x8ffb70*/
  v4[3] = sub_8FF060; /*0x8ffb78*/
  v4[4] = sub_8FF0A0; /*0x8ffb80*/
  v4[5] = sub_8FF0D0; /*0x8ffb88*/
  v4[1] = sub_8FF100; /*0x8ffb90*/
  v5 = 1; /*0x8ffb98*/
  return sub_8DAEB0(a1, v4, a2, a3); /*0x8ffba2*/
}
