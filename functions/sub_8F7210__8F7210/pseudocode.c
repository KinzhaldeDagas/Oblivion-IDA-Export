int __cdecl sub_8F7210(int *a1)
{
  _DWORD *(__cdecl *v2)(int, int, _DWORD *, int); // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_8F7140; /*0x8f7223*/
  v3 = sub_8F6410; /*0x8f722b*/
  v4 = sub_8F6450; /*0x8f7233*/
  v5 = sub_8F6490; /*0x8f723b*/
  v6 = 1; /*0x8f7243*/
  v7 = 1; /*0x8f7248*/
  sub_8DADD0(a1, (int)&v2, 3, 0xD); /*0x8f724d*/
  v2 = sub_8F6780; /*0x8f725d*/
  v3 = sub_9091D0; /*0x8f7265*/
  v4 = sub_908DE0; /*0x8f726d*/
  v5 = sub_908A40; /*0x8f7275*/
  v6 = 0; /*0x8f727d*/
  v7 = 1; /*0x8f7282*/
  return sub_8DADD0(a1, (int)&v2, 0xD, 3); /*0x8f728c*/
}
