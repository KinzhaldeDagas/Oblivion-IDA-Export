int __cdecl sub_903EE0(int *a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-14h] BYREF
  char v3; // [esp+14h] [ebp-4h]
  char v4; // [esp+15h] [ebp-3h]

  v3 = 0; /*0x903eec*/
  v4 = 0; /*0x903ef0*/
  v2[0] = sub_903E20; /*0x903efd*/
  v2[1] = sub_903D80; /*0x903f05*/
  v2[2] = nullsub_5; /*0x903f0d*/
  v2[3] = nullsub_5; /*0x903f15*/
  sub_8DADD0(a1, (int)v2, 0x1A, 0xFFFFFFFF); /*0x903f1d*/
  return sub_8DADD0(a1, (int)v2, 0xFFFFFFFF, 0x1A); /*0x903f32*/
}
