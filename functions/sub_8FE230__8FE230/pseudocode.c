int __cdecl sub_8FE230(int *a1)
{
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  char v4; // [esp+11h] [ebp-7h]

  v3 = 0; /*0x8fe23b*/
  v4 = 0; /*0x8fe23f*/
  v2[0] = sub_8FDA70; /*0x8fe24a*/
  v2[1] = sub_8FDFF0; /*0x8fe252*/
  v2[2] = sub_8FDD90; /*0x8fe25a*/
  v2[3] = sub_935CC0; /*0x8fe262*/
  return sub_8DADD0(a1, (int)v2, 7, 7); /*0x8fe26f*/
}
