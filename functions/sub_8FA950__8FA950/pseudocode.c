int __cdecl sub_8FA950(int *a1)
{
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  char v4; // [esp+11h] [ebp-7h]

  v3 = 0; /*0x8fa95b*/
  v4 = 0; /*0x8fa95f*/
  v2[0] = sub_8FA110; /*0x8fa96a*/
  v2[1] = sub_8FA750; /*0x8fa972*/
  v2[2] = sub_8FA580; /*0x8fa97a*/
  v2[3] = sub_935CC0; /*0x8fa982*/
  return sub_8DADD0(a1, (int)v2, 8, 8); /*0x8fa98f*/
}
