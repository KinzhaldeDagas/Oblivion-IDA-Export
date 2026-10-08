bool __fastcall EffectItemList_HasSelfEffect(int a1)
{
  bool result; // al
  int v2; // edx
  int v3; // ecx

  if ( !*(_DWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 4) ) /*0x415086*/
    return 0; /*0x41508c*/
  for ( result = 0; a1; a1 = v3 - 4 ) /*0x415093*/
  {
    if ( result ) /*0x415097*/
      break; /*0x415097*/
    v2 = *(_DWORD *)(a1 + 4); /*0x415099*/
    if ( v2 ) /*0x41509e*/
    {
      if ( !*(_DWORD *)(v2 + 0x10) ) /*0x4150a0*/
        result = (*(_DWORD *)(*(_DWORD *)(v2 + 0x1C) + 0x58) & 0x400000) == 0; /*0x4150b4*/
    }
    v3 = *(_DWORD *)(a1 + 8); /*0x4150b6*/
    if ( !v3 ) /*0x4150bb*/
      break; /*0x4150bb*/
  }
  return result; /*0x41508e*/
}
