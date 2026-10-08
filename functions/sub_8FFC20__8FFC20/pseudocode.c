int __cdecl sub_8FFC20(int *a1)
{
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  char v4; // [esp+11h] [ebp-7h]

  v2[0] = sub_8FFBB0; /*0x8ffc30*/
  v2[1] = sub_93F800; /*0x8ffc38*/
  v2[2] = sub_93F250; /*0x8ffc40*/
  v2[3] = sub_935CC0; /*0x8ffc48*/
  v3 = 0; /*0x8ffc50*/
  v4 = 1; /*0x8ffc55*/
  return sub_8DADD0(a1, (int)v2, 1, 1); /*0x8ffc5f*/
}
