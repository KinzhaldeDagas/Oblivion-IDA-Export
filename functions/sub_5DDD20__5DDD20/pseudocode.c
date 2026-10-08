void __thiscall sub_5DDD20(int this)
{
  char **v1; // eax

  v1 = *(char ***)(4 * *(_DWORD *)(this + 0xEC) + 0xB147D8); /*0x5ddd26*/
  if ( v1 ) /*0x5ddd2f*/
    Tile_SetString(*(_DWORD **)(this + 0x74), (_DWORD *)0xFDE, *v1); /*0x5ddd3c*/
  else
    Tile_SetString(*(_DWORD **)(this + 0x74), (_DWORD *)0xFDE, 0); /*0x5ddd4d*/
}
