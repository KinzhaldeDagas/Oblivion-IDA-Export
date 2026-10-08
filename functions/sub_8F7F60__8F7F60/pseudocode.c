int __cdecl sub_8F7F60(int *a1)
{
  _DWORD *(__cdecl *v2)(int, int, int, int); // [esp+4h] [ebp-18h] BYREF
  void (*v3)(); // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_8F7F20; /*0x8f7f73*/
  v3 = nullsub_5; /*0x8f7f7b*/
  v4 = sub_8F78B0; /*0x8f7f83*/
  v5 = sub_8F9320; /*0x8f7f8b*/
  v6 = 1; /*0x8f7f93*/
  v7 = 1; /*0x8f7f98*/
  sub_8DADD0(a1, (int)&v2, 1, 0x11); /*0x8f7f9d*/
  v2 = sub_8F7C30; /*0x8f7fad*/
  v3 = nullsub_5; /*0x8f7fb5*/
  v4 = sub_8F7610; /*0x8f7fbd*/
  v5 = sub_935CC0; /*0x8f7fc5*/
  v6 = 0; /*0x8f7fcd*/
  v7 = 1; /*0x8f7fd2*/
  return sub_8DADD0(a1, (int)&v2, 0x11, 1); /*0x8f7fdc*/
}
