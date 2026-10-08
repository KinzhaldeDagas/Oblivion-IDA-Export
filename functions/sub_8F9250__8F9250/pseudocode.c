int __cdecl sub_8F9250(int a1)
{
  _DWORD v2[11]; // [esp+0h] [ebp-30h] BYREF
  char v3; // [esp+2Ch] [ebp-4h]
  char v4; // [esp+2Dh] [ebp-3h]

  v4 = 0; /*0x8f9263*/
  memset(&v2[6], 0, 0xC); /*0x8f9267*/
  v3 = 0; /*0x8f926b*/
  v2[0] = sub_8F8D70; /*0x8f9276*/
  v2[0xA] = sub_8F8F50; /*0x8f927e*/
  v2[9] = sub_8F8E00; /*0x8f9286*/
  v2[2] = sub_8F8DB0; /*0x8f928e*/
  v2[3] = sub_8F8D20; /*0x8f9296*/
  v2[4] = sub_8F8D50; /*0x8f929e*/
  v2[5] = Shared_NoOpVirtual_60D0A0; /*0x8f92a6*/
  v2[1] = sub_8F8DF0; /*0x8f92ae*/
  return sub_8DAEB0(a1, v2, 8, 6); /*0x8f92bb*/
}
