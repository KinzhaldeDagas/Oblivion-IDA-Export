char __userpurge sub_5C9AB0@<al>(_DWORD *a1@<ecx>, double a2@<st1>, double a3@<st0>, int a4)
{
  _DWORD *v4; // edi
  Tile *v5; // ebp
  Tile *v7; // esi
  double Float; // st5
  int v9; // eax
  char v11; // [esp+Eh] [ebp-Ah]
  char v12; // [esp+Fh] [ebp-9h]
  double v13; // [esp+10h] [ebp-8h]

  v4 = *(_DWORD **)(a4 + 0x34); /*0x5c9aba*/
  v5 = 0; /*0x5c9abd*/
  v11 = 0; /*0x5c9ac3*/
  v12 = 0; /*0x5c9ac8*/
  if ( !v4 ) /*0x5c9acd*/
    return 0; /*0x5c9acd*/
  do /*0x5c9b59*/
  {
    v7 = (Tile *)v4[2]; /*0x5c9ad4*/
    Float = Tile_GetFloat(v7, 0xFC2); /*0x5c9ade*/
    if ( Float == fConstant_1 ) /*0x5c9aee*/
    {
      v13 = Tile_GetFloat(v7, 0xFAE); /*0x5c9afc*/
      Float = Tile_GetFloat(v7, 0xFB8); /*0x5c9b07*/
      if ( Float != v13 ) /*0x5c9b15*/
      {
        Tile_GetFloat(v7, 0xFB4); /*0x5c9b1e*/
        v9 = Double_To_SInt32(a3); /*0x5c9b23*/
        sub_5C6390(a1, v9); /*0x5c9b2b*/
        v12 = 1; /*0x5c9b37*/
        v5 = v7; /*0x5c9b3c*/
        Float = Tile_GetFloat(v7, 0xFB6); /*0x5c9b3e*/
        if ( Float == fConstant_1 ) /*0x5c9b4e*/
          v11 = 1; /*0x5c9b50*/
      }
    }
    v4 = (_DWORD *)*v4; /*0x5c9b55*/
  }
  while ( v4 ); /*0x5c9b59*/
  if ( v11 ) /*0x5c9b65*/
  {
    sub_5C7800(); /*0x5c9b67*/
    UpdatePlayerHead(Float, a2, a3); /*0x5c9b6c*/
  }
  if ( !v12 ) /*0x5c9b76*/
    return 0; /*0x5c9b92*/
  sub_5C6AF0(a1, a4, v5); /*0x5c9b80*/
  return 1; /*0x5c9b85*/
}
