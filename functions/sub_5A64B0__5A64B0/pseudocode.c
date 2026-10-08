void __cdecl sub_5A64B0(int a1)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v2; // esi
  void *ParentMenu; // eax
  _DWORD *v4; // edi
  char *v5; // eax
  float Float; // [esp+0h] [ebp-14h]
  float v7; // [esp+0h] [ebp-14h]
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+8h] [ebp-Ch]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x5a64b6*/
  v2 = OpenMenuTile; /*0x5a64bb*/
  if ( OpenMenuTile ) /*0x5a64c2*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5a64d9*/
    v4 = OblivionDynamicCast( /*0x5a64e4*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &HUDMainMenu `RTTI Type Descriptor',
           0);
    if ( v4 ) /*0x5a64eb*/
    {
      if ( *(_BYTE *)(a1 + 0xC) ) /*0x5a64f5*/
      {
        if ( *(_DWORD *)a1 == dword_B3B0B4[0xA3] ) /*0x5a6504*/
          return; /*0x5a6504*/
        dword_B3B0B4[0xA3] = *(_DWORD *)a1; /*0x5a6510*/
      }
      v5 = *(char **)(a1 + 4); /*0x5a6515*/
      if ( v5 ) /*0x5a651c*/
      {
        Tile_SetString(v2, (_DWORD *)0xFB6, v5); /*0x5a6524*/
        v9 = flt_A41304; /*0x5a6532*/
        v8 = flt_A6BED0; /*0x5a653e*/
        Float = Tile_GetFloat(v2, 0xFB5); /*0x5a654c*/
        sub_589980(v2, 0xFB5, Float, v8, v9); /*0x5a6556*/
        v4[0x1D] = GetTickCount() + 0x1388; /*0x5a6566*/
      }
      else
      {
        v10 = flt_A41304; /*0x5a6575*/
        v7 = Tile_GetFloat(v2, 0xFB5); /*0x5a6589*/
        sub_589980(v2, 0xFB5, v7, 0.0, v10); /*0x5a6593*/
        v4[0x1D] = 0; /*0x5a6598*/
      }
    }
  }
}
