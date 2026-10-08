int __cdecl sub_95DB10(signed int a1)
{
  unsigned int v2; // [esp+4h] [ebp-4h] BYREF

  sub_6BE990(a1, &v2); /*0x95db1c*/
  if ( v2 > 5 ) /*0x95db2b*/
    return 0; /*0x95db3d*/
  else
    return ((int (__cdecl *)(signed int))MEMORY[0xBA9A88][v2])(a1); /*0x95db35*/
}
