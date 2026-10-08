int __cdecl sub_8F72A0(int *a1)
{
  _DWORD *(__cdecl *v2)(int, int, _DWORD *, int); // [esp+4h] [ebp-18h] BYREF
  void *v3; // [esp+8h] [ebp-14h]
  void *v4; // [esp+Ch] [ebp-10h]
  void *v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+14h] [ebp-8h]
  char v7; // [esp+15h] [ebp-7h]

  v2 = sub_8F7140; /*0x8f72b3*/
  v3 = sub_8F6410; /*0x8f72bb*/
  v4 = sub_8F6450; /*0x8f72c3*/
  v5 = sub_8F6490; /*0x8f72cb*/
  v6 = 1; /*0x8f72d3*/
  v7 = 1; /*0x8f72d8*/
  sub_8DADD0(a1, (int)&v2, 3, 0x11); /*0x8f72dd*/
  v2 = sub_8F6780; /*0x8f72ed*/
  v3 = sub_9091D0; /*0x8f72f5*/
  v4 = sub_908DE0; /*0x8f72fd*/
  v5 = sub_908A40; /*0x8f7305*/
  v6 = 0; /*0x8f730d*/
  v7 = 1; /*0x8f7312*/
  return sub_8DADD0(a1, (int)&v2, 0x11, 3); /*0x8f731c*/
}
