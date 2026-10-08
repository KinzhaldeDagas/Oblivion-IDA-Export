void __userpurge sub_5BD490(
        double a1@<st2>,
        double a2@<st1>,
        double a3@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        int a8,
        int a9)
{
  _DWORD *OpenMenuTile; // esi
  void *ParentMenu; // eax
  _DWORD *v11; // eax
  void *v12; // eax
  void *v13; // eax
  signed int v14; // [esp-10h] [ebp-10h]

  if ( a8 == 6 ) /*0x5bd497*/
  {
    sub_57DE50(1); /*0x5bd4a0*/
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0); /*0x5bd4b5*/
    v14 = unk_B3B410; /*0x5bd4bc*/
    reference->unk11C = unk_B3B410; /*0x5bd4bd*/
    sub_597CA0(v14); /*0x5bd4c3*/
    if ( OpenMenuTile ) /*0x5bd4cd*/
    {
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5bd4df*/
      OblivionDynamicCast( /*0x5bd4e5*/
        ParentMenu,
        0,
        (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
        &ContainerMenu `RTTI Type Descriptor',
        0);
      ContainerMenu_Update(a1, a2); /*0x5bd4ed*/
    }
    else
    {
      v11 = (_DWORD *)Menu_GetOpenMenuTile(0x40D); /*0x5bd500*/
      v12 = (void *)Tile_GetParentMenu(v11); /*0x5bd518*/
      v13 = OblivionDynamicCast( /*0x5bd51e*/
              v12,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
              &SpellPurchaseMenu `RTTI Type Descriptor',
              0);
      SpellPurchaseMenu_Update((int)v13, a1, a2, a3); /*0x5bd528*/
    }
    sub_5BD440(a1, a4, a5, a6, a7); /*0x5bd4f2*/
  }
  else if ( a8 == 7 ) /*0x5bd539*/
  {
    sub_57DE50(2); /*0x5bd53d*/
    sub_5BD440(a1, a4, a5, a6, a7); /*0x5bd545*/
  }
}
