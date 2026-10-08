int __cdecl sub_47FA60(int *a1)
{
  int v1; // esi
  NiRTTI *v3; // eax
  int v4; // [esp+4h] [ebp-8h] BYREF

  if ( !a1 ) /*0x47fa6a*/
    return 0; /*0x47fa6a*/
  v1 = *sub_47F990(a1, &v4, (int)&stru_BA7B80); /*0x47fa7b*/
  if ( !v1 ) /*0x47fa7f*/
    return 0; /*0x47fa81*/
  v3 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1); /*0x47fa8f*/
  if ( !v3 ) /*0x47fa93*/
    return 0; /*0x47faa3*/
  while ( v3 != &MEMORY[0xBA7D24] ) /*0x47fa9a*/
  {
    v3 = v3->parent; /*0x47fa9c*/
    if ( !v3 ) /*0x47faa1*/
      return 0; /*0x47faa1*/
  }
  return v1; /*0x47fa83*/
}
