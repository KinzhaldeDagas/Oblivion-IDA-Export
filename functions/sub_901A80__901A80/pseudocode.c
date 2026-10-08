int __cdecl sub_901A80(int *a1)
{
  void *v2; // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_901A40; /*0x901a93*/
  v3 = sub_901060; /*0x901a9b*/
  v4 = sub_9010A0; /*0x901aa3*/
  v5 = sub_9010E0; /*0x901aab*/
  v6 = 1; /*0x901ab3*/
  v7 = 1; /*0x901ab8*/
  sub_8DADD0(a1, (int)&v2, 0x12, 0x15); /*0x901abd*/
  v2 = sub_901730; /*0x901acd*/
  v3 = sub_900420; /*0x901ad5*/
  v4 = sub_900770; /*0x901add*/
  v5 = sub_900CA0; /*0x901ae5*/
  v6 = 0; /*0x901aed*/
  v7 = 1; /*0x901af2*/
  return sub_8DADD0(a1, (int)&v2, 0x15, 0x12); /*0x901afc*/
}
