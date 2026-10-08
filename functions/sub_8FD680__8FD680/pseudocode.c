int __cdecl sub_8FD680(int *a1)
{
  _DWORD v2[4]; // [esp+0h] [ebp-14h] BYREF
  char v3; // [esp+10h] [ebp-4h]
  char v4; // [esp+11h] [ebp-3h]

  v3 = 0; /*0x8fd68b*/
  v4 = 0; /*0x8fd68f*/
  v2[0] = sub_8FCF50; /*0x8fd69a*/
  v2[1] = sub_8FD590; /*0x8fd6a2*/
  v2[2] = sub_8FD300; /*0x8fd6aa*/
  v2[3] = sub_935CC0; /*0x8fd6b2*/
  return sub_8DADD0(a1, (int)v2, 4, 4); /*0x8fd6bf*/
}
