void __thiscall sub_5DDD60(int this)
{
  char **v1; // eax

  v1 = *(char ***)(4 * *(_DWORD *)(this + 0xF0) + 0xB147E4); /*0x5ddd66*/
  if ( v1 ) /*0x5ddd6f*/
    Tile_SetString(*(_DWORD **)(this + 0xD0), (_DWORD *)0xFDE, *v1); /*0x5ddd7f*/
  else
    Tile_SetString(*(_DWORD **)(this + 0xD0), (_DWORD *)0xFDE, 0); /*0x5ddd93*/
}
