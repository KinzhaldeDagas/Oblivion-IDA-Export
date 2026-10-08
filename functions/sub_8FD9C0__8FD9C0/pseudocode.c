int __cdecl sub_8FD9C0(int a1)
{
  _DWORD v2[11]; // [esp+0h] [ebp-30h] BYREF
  char v3; // [esp+2Ch] [ebp-4h]
  char v4; // [esp+2Dh] [ebp-3h]

  v4 = 0; /*0x8fd9d3*/
  memset(&v2[6], 0, 0x10); /*0x8fd9db*/
  v3 = 0; /*0x8fd9df*/
  v2[0] = sub_8FD740; /*0x8fd9ea*/
  v2[0xA] = sub_8FD7D0; /*0x8fd9f2*/
  v2[2] = sub_8FD760; /*0x8fd9fa*/
  v2[3] = sub_8FD6D0; /*0x8fda02*/
  v2[4] = sub_8FD710; /*0x8fda0a*/
  v2[5] = Shared_NoOpVirtual_60D0A0; /*0x8fda12*/
  v2[1] = sub_8FD7C0; /*0x8fda1a*/
  return sub_8DAEB0(a1, v2, 7, 7); /*0x8fda27*/
}
