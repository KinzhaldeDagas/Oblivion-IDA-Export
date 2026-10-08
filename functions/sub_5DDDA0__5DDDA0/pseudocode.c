void __thiscall sub_5DDDA0(int this)
{
  char **v1; // eax

  v1 = *(char ***)(4 * *(_DWORD *)(this + 0xF8) + 0xB147F0); /*0x5ddda6*/
  if ( v1 ) /*0x5dddaf*/
    Tile_SetString(*(_DWORD **)(this + 0xC0), (_DWORD *)0xFDE, *v1); /*0x5dddbf*/
  else
    Tile_SetString(*(_DWORD **)(this + 0xC0), (_DWORD *)0xFDE, 0); /*0x5dddd3*/
}
