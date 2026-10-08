void __cdecl sub_5A65B0(int a1)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v2; // esi
  int ParentMenu; // eax
  int v4; // edx
  int v5; // ebx
  _BYTE *v6; // ecx
  TESModel *v7; // eax
  char *ModelPath; // eax
  float Float; // [esp+0h] [ebp-18h]
  float v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+8h] [ebp-10h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x5a65b6*/
  v2 = OpenMenuTile; /*0x5a65bb*/
  if ( OpenMenuTile && Tile_GetParentMenu(OpenMenuTile) ) /*0x5a65ca*/
  {
    ParentMenu = Tile_GetParentMenu(v2); /*0x5a65db*/
    v4 = dword_B3B0B4[0xA4]; /*0x5a65e4*/
    v5 = ParentMenu; /*0x5a65ea*/
    if ( *(_BYTE *)(a1 + 4) ) /*0x5a65ec*/
    {
      v6 = *(_BYTE **)a1; /*0x5a65f7*/
      if ( *(_DWORD *)a1 != v4 ) /*0x5a65fb*/
      {
        dword_B3B0B4[0xA4] = (int)v6; /*0x5a65ff*/
        if ( v6 ) /*0x5a6605*/
        {
          if ( sub_4D7730(v6) ) /*0x5a660b*/
          {
            v7 = (TESModel *)sub_4D7730(*(_BYTE **)a1); /*0x5a661a*/
            ModelPath = TESModel_GetModelPath(v7); /*0x5a6621*/
            Tile_SetString(v2, (_DWORD *)0xFB6, ModelPath); /*0x5a662e*/
            v11 = flt_A41304; /*0x5a663c*/
            v10 = flt_A6BED0; /*0x5a6648*/
            Float = Tile_GetFloat(v2, 0xFB5); /*0x5a6656*/
            sub_589980(v2, 0xFB5, Float, v10, v11); /*0x5a6660*/
            *(_DWORD *)(v5 + 0x74) = GetTickCount() + 0x1388; /*0x5a6671*/
          }
        }
        return; /*0x5a6676*/
      }
    }
    else if ( *(_DWORD *)a1 == v4 ) /*0x5a667d*/
    {
      dword_B3B0B4[0xA4] = 0; /*0x5a6681*/
      return; /*0x5a668c*/
    }
    if ( *(_BYTE *)(a1 + 5) ) /*0x5a668d*/
      dword_B3B0B4[0xA4] = *(_DWORD *)a1; /*0x5a6695*/
  }
}
