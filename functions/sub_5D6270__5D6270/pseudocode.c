BSStringT *__userpurge sub_5D6270@<eax>(
        int a1@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        char *a5,
        signed int a6)
{
  BSStringT *TileFromTemplate; // esi
  double Float; // st7
  int i; // edx
  char *v10; // eax
  char v11; // cl
  float a2; // [esp+0h] [ebp-118h]
  float a3; // [esp+10h] [ebp-108h]
  char v15[255]; // [esp+14h] [ebp-104h] BYREF
  char v16; // [esp+113h] [ebp-5h]

  TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate(
                                    (_DWORD *)a1,
                                    st5_0,
                                    st6_0,
                                    a4,
                                    *(TileWindow **)(a1 + 0x28),
                                    "chargen_skill_template",
                                    0);
  if ( !TileFromTemplate )
    return 0;
  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFD0);
  a3 = (float)Double_To_SInt32(Float - dbl_A2F928);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, a3);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, a3);
  for ( i = 0; i < 0x100; ++i )
  {
    v10 = &v15[i];
    v11 = v15[i + a5 - v15];
    v15[i] = v11;
    if ( v11 == 0x20 )
      *v10 = 0x5F;
    if ( !*v10 )
      break;
  }
  v16 = 0;
  BSStringT_Set(TileFromTemplate + 1, v15, 0);
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, a5);
  a2 = (float)a6;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB0, a2);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 1.0);
  return TileFromTemplate;
}
