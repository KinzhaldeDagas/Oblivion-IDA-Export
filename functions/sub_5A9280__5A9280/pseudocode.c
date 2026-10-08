double __thiscall sub_5A9280(int this)
{
  _DWORD *v2; // edi
  unsigned int *v3; // esi
  unsigned int v4; // ebx
  int v5; // esi

  v2 = (_DWORD *)(this + 0x2C); /*0x5a9285*/
  v3 = (unsigned int *)(this + 0x2C); /*0x5a9288*/
  if ( this != 0xFFFFFFD4 ) /*0x5a928c*/
  {
    do /*0x5a92b6*/
    {
      if ( !v3[1] && !*v3 ) /*0x5a9296*/
        break; /*0x5a9299*/
      v4 = *v3; /*0x5a929b*/
      if ( *v3 ) /*0x5a929b*/
      {
        sub_5A9060((unsigned int *)*v3); /*0x5a92a3*/
        FormHeapFree(v4); /*0x5a92a9*/
      }
      v3 = (unsigned int *)v3[1]; /*0x5a92b1*/
    }
    while ( v3 ); /*0x5a92b6*/
  }
  if ( v2[1] ) /*0x5a92b9*/
  {
    do /*0x5a92d4*/
    {
      v5 = *(_DWORD *)(v2[1] + 4); /*0x5a92c3*/
      FormHeapFree(v2[1]); /*0x5a92c7*/
      v2[1] = v5; /*0x5a92d1*/
    }
    while ( v5 ); /*0x5a92d4*/
  }
  *v2 = 0; /*0x5a92db*/
  Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFDE, word_A36430); /*0x5a92e9*/
  Tile_SetFloat(*(Tile **)(this + 0x34), 0xFB0u, 1.0); /*0x5a92fc*/
  Tile_SetFloat(*(Tile **)(this + 0x34), 0xFA1u, 1.0); /*0x5a930f*/
  sub_5A8F30((float *)this); /*0x5a9319*/
  return 1.0; /*0x5a9314*/
}
