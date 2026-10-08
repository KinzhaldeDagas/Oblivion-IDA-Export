int __cdecl sub_47FB10(int *a1)
{
  int v1; // esi
  NiRTTI *v3; // eax
  int v4; // [esp+4h] [ebp-8h] BYREF

  if ( !a1 ) /*0x47fb1a*/
    return 0; /*0x47fb1a*/
  v1 = *sub_47F990(a1, &v4, (int)&stru_BA7B80); /*0x47fb2b*/
  if ( !v1 ) /*0x47fb2f*/
    return 0; /*0x47fb31*/
  v3 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1); /*0x47fb3f*/
  if ( !v3 ) /*0x47fb43*/
    return 0; /*0x47fb53*/
  while ( v3 != &stru_BA7D2C ) /*0x47fb4a*/
  {
    v3 = v3->parent; /*0x47fb4c*/
    if ( !v3 ) /*0x47fb51*/
      return 0; /*0x47fb51*/
  }
  return v1; /*0x47fb33*/
}
