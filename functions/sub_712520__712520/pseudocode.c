int __cdecl sub_712520(int a1)
{
  int (*v1)(void); // ecx
  int (*v3)(void); // [esp+0h] [ebp-4h] BYREF

  v3 = v1; /*0x712520*/
  if ( NiTMap_GetAt((_DWORD *)unk_B3FB80, a1, &v3) ) /*0x712530*/
    return v3(); /*0x71253d*/
  else
    return 0; /*0x712539*/
}
