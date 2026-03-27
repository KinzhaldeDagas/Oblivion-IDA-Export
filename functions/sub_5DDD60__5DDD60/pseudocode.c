void __thiscall sub_5DDD60(int this)
{
  char **v1; // eax

  v1 = *(char ***)(4 * *(_DWORD *)(this + 0xF0) + 0xB147E4);
  if ( v1 )
    Tile_SetString(*(_DWORD **)(this + 0xD0), (_DWORD *)0xFDE, *v1);
  else
    Tile_SetString(*(_DWORD **)(this + 0xD0), (_DWORD *)0xFDE, 0);
}
