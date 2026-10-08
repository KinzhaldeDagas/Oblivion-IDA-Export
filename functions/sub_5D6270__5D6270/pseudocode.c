// Sidecar decode: creates chargen skill row; writes skill/AV to tile trait 0xFB0 and selection state to 0xFB1.
BSStringT *__userpurge SkillsMenu_CreateSkillRow@<eax>(int a1@<ecx>, double st7_0@<st0>, char *arg0, signed int a4)
{
  BSStringT *v5; // esi
  int i; // edx
  char *v7; // eax
  char v8; // cl
  float a2; // [esp+0h] [ebp-118h]
  float a3; // [esp+10h] [ebp-108h]
  char v12[255]; // [esp+14h] [ebp-104h] BYREF
  char v13; // [esp+113h] [ebp-5h]

  v5 = (BSStringT *)Menu::RenderTemplate((Menu *)a1, *(Tile **)(a1 + 0x28), "chargen_skill_template", 0); /*0x5d62a0*/
  if ( !v5 ) /*0x5d62a4*/
    return 0; /*0x5d6372*/
  Tile_GetFloat(*(_DWORD **)(a1 + 0x28), 0xFD0); /*0x5d62b2*/
  a3 = (float)Double_To_SInt32(st7_0 - dbl_A2F928); /*0x5d62cd*/
  Tile_SetFloat((Tile *)v5, 0xFAAu, a3); /*0x5d62dd*/
  Tile_SetFloat((Tile *)v5, 0xFAEu, a3); /*0x5d62f1*/
  for ( i = 0; i < 0x100; ++i ) /*0x5d62fc*/
  {
    v7 = &v12[i]; /*0x5d6300*/
    v8 = v12[i + arg0 - v12]; /*0x5d6304*/
    v12[i] = v8; /*0x5d630a*/
    if ( v8 == 0x20 ) /*0x5d630c*/
      *v7 = 0x5F; /*0x5d630e*/
    if ( !*v7 ) /*0x5d6311*/
      break; /*0x5d6314*/
  }
  v13 = 0; /*0x5d632b*/
  BSStringT_Set(v5 + 1, v12, 0); /*0x5d6333*/
  Tile_SetString(v5, (_DWORD *)0xFAF, arg0); /*0x5d6340*/
  a2 = (float)a4; /*0x5d634f*/
  Tile_SetFloat((Tile *)v5, 0xFB0u, a2); /*0x5d6357*/
  Tile_SetFloat((Tile *)v5, 0xFB1u, 1.0); /*0x5d6369*/
  return v5; /*0x5d6374*/
}
