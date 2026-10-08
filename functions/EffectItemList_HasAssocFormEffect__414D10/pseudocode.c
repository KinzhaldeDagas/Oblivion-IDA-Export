bool __fastcall EffectItemList_HasAssocFormEffect(int a1)
{
  bool result; // al
  int v2; // edx
  int v3; // ecx

  result = 0; /*0x414d10*/
  if ( *(_DWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4) ) /*0x414d18*/
  {
    for ( ; a1; a1 = v3 - 4 ) /*0x414d21*/
    {
      if ( result ) /*0x414d25*/
        break; /*0x414d25*/
      v2 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 0x1C); /*0x414d2a*/
      if ( v2 ) /*0x414d2f*/
        result = (*(_DWORD *)(v2 + 0x58) & 0x70000) != 0; /*0x414d3a*/
      v3 = *(_DWORD *)(a1 + 8); /*0x414d3c*/
      if ( !v3 ) /*0x414d41*/
        break; /*0x414d41*/
    }
  }
  return result; /*0x414d1e*/
}
