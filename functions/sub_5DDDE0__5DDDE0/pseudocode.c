void __thiscall sub_5DDDE0(int this)
{
  char **v1; // eax

  v1 = *(char ***)(4 * *(_DWORD *)(this + 0xF4) + 0xB147E4);
  if ( v1 )
    Tile_SetString(*(_DWORD **)(this + 0xE4), (_DWORD *)0xFDE, *v1);
  else
    Tile_SetString(*(_DWORD **)(this + 0xE4), (_DWORD *)0xFDE, 0);
}
