void __userpurge sub_5A1E10(int a1@<ecx>, double a2@<st1>, double a3@<st0>, _DWORD *a4)
{
  int v5; // ebx
  _DWORD *ItemByIndex2; // edi
  unsigned int i; // esi
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  double Float; // st5

  v5 = *(_DWORD *)(a1 + 0x28);
  ItemByIndex2 = 0;
  if ( v5 )
  {
    for ( i = 0; ; ++i )
    {
      v8 = (_DWORD *)(v5 + 0x28);
      v9 = 0;
      if ( v5 == 0xFFFFFFD8 )
        break;
      do
      {
        if ( *v8 )
          ++v9;
        v8 = (_DWORD *)v8[1];
      }
      while ( v8 );
      if ( i >= v9 )
        break;
      Float = Tile_GetFloat(a4, 0xFAE);
      if ( i == (unsigned int)(__int64)Float )
        ItemByIndex2 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v5 + 0x24), i);
      if ( ItemByIndex2 )
        EffectSettingsMenu_Create(Float, a2, a3, ItemByIndex2, 0);
    }
  }
}
