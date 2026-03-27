void __stdcall sub_59B640(_DWORD *a1, char a2)
{
  char *v2; // eax

  if ( a1 )
  {
    v2 = (char *)sOnButtonText;
    if ( !a2 )
      v2 = (char *)sOffButtonText;
    Tile_SetString(a1, (_DWORD *)0xFDE, v2);
  }
}
