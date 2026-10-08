bool __fastcall EffectItemList_HasAssocActorEffect(int a1)
{
  bool result; // al
  int v2; // edx
  int v3; // ecx

  result = 0; /*0x414cd0*/
  if ( *(_DWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4) ) /*0x414cd8*/
  {
    for ( ; a1; a1 = v3 - 4 ) /*0x414ce1*/
    {
      if ( result ) /*0x414ce5*/
        break; /*0x414ce5*/
      v2 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 0x1C); /*0x414cea*/
      if ( v2 ) /*0x414cef*/
        result = (*(_DWORD *)(v2 + 0x58) & 0x40000) != 0; /*0x414cfc*/
      v3 = *(_DWORD *)(a1 + 8); /*0x414cfe*/
      if ( !v3 ) /*0x414d03*/
        break; /*0x414d03*/
    }
  }
  return result; /*0x414cde*/
}
