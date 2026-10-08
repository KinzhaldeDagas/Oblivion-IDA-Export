void __userpurge sub_5A1E10(int a1@<ecx>, double a2@<st1>, double a3@<st0>, _DWORD *a4)
{
  int v4; // ebx
  _DWORD *ItemByIndex2; // edi
  unsigned int i; // esi
  _DWORD *v7; // eax
  unsigned int v8; // ecx
  double Float; // st5

  v4 = *(_DWORD *)(a1 + 0x28); /*0x5a1e14*/
  ItemByIndex2 = 0; /*0x5a1e18*/
  if ( v4 ) /*0x5a1e1c*/
  {
    for ( i = 0; ; ++i ) /*0x5a1e20*/
    {
      v7 = (_DWORD *)(v4 + 0x28); /*0x5a1e25*/
      v8 = 0; /*0x5a1e27*/
      if ( v4 == 0xFFFFFFD8 ) /*0x5a1e2b*/
        break; /*0x5a1e2b*/
      do /*0x5a1e3d*/
      {
        if ( *v7 ) /*0x5a1e30*/
          ++v8; /*0x5a1e35*/
        v7 = (_DWORD *)v7[1]; /*0x5a1e38*/
      }
      while ( v7 ); /*0x5a1e3d*/
      if ( i >= v8 ) /*0x5a1e41*/
        break; /*0x5a1e41*/
      Float = Tile_GetFloat(a4, 0xFAE); /*0x5a1e4c*/
      if ( i == (unsigned int)(__int64)Float ) /*0x5a1e75*/
        ItemByIndex2 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v4 + 0x24), i); /*0x5a1e80*/
      if ( ItemByIndex2 ) /*0x5a1e84*/
        EffectSettingsMenu_Create(Float, a2, a3, ItemByIndex2, 0); /*0x5a1e89*/
    }
  }
}
