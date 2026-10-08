BSStringT *__thiscall sub_5971E0(int this, char *arg0, int a3, signed int a4, signed int a5)
{
  BSStringT *v9; // esi
  int i; // edx
  char *v11; // eax
  char v12; // cl
  char *v13; // eax
  float a2; // [esp+0h] [ebp-11Ch]
  float a2a; // [esp+0h] [ebp-11Ch]
  char v17[255]; // [esp+18h] [ebp-104h] BYREF
  char v18; // [esp+117h] [ebp-5h]

  v9 = (BSStringT *)Menu::RenderTemplate((Menu *)this, *(Tile **)(this + 0x28), "class_template", 0); /*0x59721d*/
  if ( !v9 ) /*0x597221*/
    return 0; /*0x59731a*/
  for ( i = 0; i < 0x100; ++i ) /*0x59722e*/
  {
    v11 = &v17[i]; /*0x597232*/
    v12 = v17[i + arg0 - v17]; /*0x597236*/
    v17[i] = v12; /*0x59723c*/
    if ( v12 == 0x20 ) /*0x59723e*/
      *v11 = 0x5F; /*0x597240*/
    if ( !*v11 ) /*0x597243*/
      break; /*0x597246*/
  }
  v18 = 0; /*0x59725d*/
  BSStringT_Set(v9 + 1, v17, 0); /*0x597265*/
  a2 = (float)a4; /*0x597274*/
  Tile_SetFloat((Tile *)v9, 0xFAAu, a2); /*0x59727c*/
  Tile_SetString(v9, (_DWORD *)0xFAF, arg0); /*0x597289*/
  if ( a3 == *(_DWORD *)(this + 0x40) ) /*0x597295*/
    *(_DWORD *)(this + 0x34) = v9; /*0x597297*/
  if ( !a5 ) /*0x5972a5*/
  {
    Tile_SetFloat((Tile *)v9, 0xFB0u, 1.0); /*0x5972fe*/
    Tile_SetFloat((Tile *)v9, 0xFF0u, 1.0); /*0x597310*/
    return v9; /*0x597310*/
  }
  a2a = (float)a5; /*0x5972ae*/
  Tile_SetFloat((Tile *)v9, 0xFF0u, a2a); /*0x5972b6*/
  Tile_SetFloat((Tile *)v9, 0xFB0u, fConstant_2); /*0x5972cc*/
  if ( !a3 ) /*0x5972d3*/
    return v9; /*0x597318*/
  v13 = *(char **)(a3 + 0x30); /*0x5972d5*/
  if ( !v13 ) /*0x5972da*/
    v13 = EmptyString; /*0x5972dc*/
  Tile_SetString(*(_DWORD **)(this + 4), (_DWORD *)0xFC3, v13); /*0x5972ea*/
  return v9; /*0x59731c*/
}
