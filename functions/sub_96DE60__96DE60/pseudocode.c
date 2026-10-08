int *__cdecl sub_96DE60(int a1, int *a2)
{
  void (__cdecl *v2)(int, int *, int, int *, int); // edx
  int *result; // eax
  int v4; // ecx
  int v5; // [esp+0h] [ebp-4h] BYREF

  v4 = a1; /*0x96de60*/
  a1 = *(_DWORD *)(a1 + 0x21C); /*0x96de6a*/
  v5 = v4; /*0x96db20*/
  v2 = *(void (__cdecl **)(int, int *, int, int *, int))(a1 + 4); /*0x96db2c*/
  v5 = 4; /*0x96db37*/
  v2(a1, &a1, 4, &v5, 1); /*0x96db3f*/
  result = a2; /*0x96db41*/
  *a2 = a1; /*0x96db49*/
  return result; /*0x96db4e*/
}
