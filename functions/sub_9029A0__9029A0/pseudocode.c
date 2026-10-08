int __cdecl sub_9029A0(int *a1)
{
  void *v2; // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  int (__cdecl *v5)(int *, int *, __m128 *, int, int); // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_902930; /*0x9029b3*/
  v3 = sub_902780; /*0x9029bb*/
  v4 = sub_902800; /*0x9029c3*/
  v5 = sub_902840; /*0x9029cb*/
  v6 = 1; /*0x9029d3*/
  v7 = 1; /*0x9029d8*/
  sub_8DADD0(a1, (int)&v2, 0xD, 1); /*0x9029dd*/
  v2 = sub_902100; /*0x9029ed*/
  v3 = sub_9023F0; /*0x9029f5*/
  v4 = sub_902160; /*0x9029fd*/
  v5 = sub_902590; /*0x902a05*/
  v6 = 0; /*0x902a0d*/
  v7 = 1; /*0x902a12*/
  return sub_8DADD0(a1, (int)&v2, 1, 0xD); /*0x902a1c*/
}
