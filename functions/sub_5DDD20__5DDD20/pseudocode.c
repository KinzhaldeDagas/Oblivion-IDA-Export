void __thiscall sub_5DDD20(int this)
{
  char **v1; // eax

  v1 = *(char ***)(4 * *(_DWORD *)(this + 0xEC) + 0xB147D8);
  if ( v1 )
    Tile_SetString(*(_DWORD **)(this + 0x74), (_DWORD *)0xFDE, *v1);
  else
    Tile_SetString(*(_DWORD **)(this + 0x74), (_DWORD *)0xFDE, 0);
}
