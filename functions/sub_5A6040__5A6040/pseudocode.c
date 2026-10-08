double __usercall sub_5A6040@<st0>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double result@<st0>,
        char a7,
        char a8)
{
  Tile *OpenMenuTile; // eax
  Tile *v10; // edi
  void *ParentMenu; // eax
  Tile **v12; // eax
  Tile **v13; // esi
  Tile *v14; // eax
  Tile *v15; // eax
  Tile *v16; // eax

  if ( !reference ) /*0x5a6040*/
    return result; /*0x5a6040*/
  if ( reference->unk5C0 ) /*0x5a604d*/
    return result; /*0x5a604d*/
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EC); /*0x5a6060*/
  v10 = OpenMenuTile; /*0x5a6065*/
  if ( !OpenMenuTile ) /*0x5a606c*/
    return result; /*0x5a606c*/
  if ( !Tile_GetParentMenu(OpenMenuTile) ) /*0x5a6074*/
    return result; /*0x5a6074*/
  ParentMenu = (void *)Tile_GetParentMenu(v10); /*0x5a6092*/
  v12 = (Tile **)OblivionDynamicCast( /*0x5a6098*/
                   ParentMenu,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &HUDMainMenu `RTTI Type Descriptor',
                   0);
  v13 = v12; /*0x5a609d*/
  if ( !v12 ) /*0x5a60a4*/
    return result; /*0x5a60a4*/
  if ( !a7 ) /*0x5a60af*/
  {
    Tile_SetFloat(v12[1], 0xFB1u, 1.0); /*0x5a61c5*/
    v16 = v13[9]; /*0x5a61ca*/
    if ( v16 != (Tile *)1 && v16 != (Tile *)8 ) /*0x5a61d5*/
    {
      if ( a8 ) /*0x5a61dc*/
        Tile_SetFloat(v10, 0xFA1u, fConstant_2); /*0x5a61ef*/
      else
        Menu::StartFadeIn(v13); /*0x5a61f8*/
    }
    goto LABEL_27; /*0x5a61f4*/
  }
  Menu_GetB3A708(1); /*0x5a60bc*/
  if ( sub_5878B0(0x3EB) /*0x5a611c*/
    || (Menu_GetB3A708(1), sub_5878B0(0x3EA))
    || (Menu_GetB3A708(1), sub_5878B0(0x3FE))
    || (Menu_GetB3A708(1), sub_5878B0(0x3FF)) )
  {
    Tile_SetFloat(v13[1], 0xFB1u, 0.0); /*0x5a6195*/
    v15 = v13[9]; /*0x5a619a*/
    if ( v15 == (Tile *)1 || v15 == (Tile *)8 ) /*0x5a61a5*/
      return result; /*0x5a61a5*/
    if ( !a8 ) /*0x5a61ac*/
    {
      Menu::StartFadeIn(v13); /*0x5a61b2*/
      return result; /*0x5a61b2*/
    }
LABEL_27:
    Tile_SetFloat(v10, 0xFA1u, fConstant_2); /*0x5a61fd*/
    return result; /*0x5a620e*/
  }
  v14 = v13[9]; /*0x5a6125*/
  if ( v14 != (Tile *)4 && v14 != (Tile *)2 && sub_578FE0() ) /*0x5a6132*/
  {
    if ( a8 ) /*0x5a6140*/
    {
      Tile_SetFloat(v10, 0xFA1u, 1.0); /*0x5a614f*/
      Tile_SetFloat(v13[1], 0xFB1u, 1.0); /*0x5a6162*/
      return result; /*0x5a6169*/
    }
    result = Menu::StartFadeOut(v13, a2, a3, a4, a5, a1, result); /*0x5a616c*/
  }
  Tile_SetFloat(v13[1], 0xFB1u, 1.0); /*0x5a617f*/
  return result; /*0x5a6169*/
}
