void __thiscall sub_5A9280(int this)
{
  _DWORD *v4; // edi
  unsigned int *v5; // esi
  unsigned int v6; // ebx
  int v7; // esi

  v4 = (_DWORD *)(this + 0x2C);
  v5 = (unsigned int *)(this + 0x2C);
  if ( this != 0xFFFFFFD4 )
  {
    do
    {
      if ( !v5[1] && !*v5 )
        break;
      v6 = *v5;
      if ( *v5 )
      {
        sub_5A9060((unsigned int *)*v5);
        FormHeapFree(v6);
      }
      v5 = (unsigned int *)v5[1];
    }
    while ( v5 );
  }
  if ( v4[1] )
  {
    do
    {
      v7 = *(_DWORD *)(v4[1] + 4);
      FormHeapFree(v4[1]);
      v4[1] = v7;
    }
    while ( v7 );
  }
  *v4 = 0;
  Tile_SetString(*(_DWORD **)(this + 0x34), (_DWORD *)0xFDE, word_A36430);
  Tile_SetFloat(*(Tile **)(this + 0x34), (_DWORD *)0xFB0, 1.0);
  Tile_SetFloat(*(Tile **)(this + 0x34), (_DWORD *)0xFA1, 1.0);
  sub_5A8F30((float *)this);
}
