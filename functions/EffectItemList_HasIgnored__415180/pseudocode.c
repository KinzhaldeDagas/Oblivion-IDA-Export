bool __fastcall EffectItemList_HasIgnored(int a1)
{
  bool result; // al
  int v2; // edx
  int v3; // ecx

  result = 0; /*0x415180*/
  if ( *(_DWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4) ) /*0x415188*/
  {
    for ( ; a1; a1 = v3 - 4 ) /*0x415191*/
    {
      if ( result ) /*0x415195*/
        break; /*0x415195*/
      v2 = *(_DWORD *)(a1 + 4); /*0x415197*/
      if ( v2 ) /*0x41519c*/
        result = (*(_DWORD *)(*(_DWORD *)(v2 + 0x1C) + 0x58) & 0x400000) != 0; /*0x4151ac*/
      v3 = *(_DWORD *)(a1 + 8); /*0x4151ae*/
      if ( !v3 ) /*0x4151b3*/
        break; /*0x4151b3*/
    }
  }
  return result; /*0x41518e*/
}
