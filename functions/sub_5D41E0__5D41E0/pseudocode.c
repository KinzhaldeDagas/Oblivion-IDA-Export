double __usercall sub_5D41E0@<st0>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double result@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>)
{
  Tile *OpenMenuTile; // esi
  void *ParentMenu; // eax
  _DWORD *v10; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x418); /*0x5d41eb*/
  if ( OpenMenuTile ) /*0x5d41f2*/
  {
    sub_668CC0((Concurrency::details::SchedulerBase *)reference, a1, a2, a3); /*0x5d41fb*/
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d4210*/
    v10 = OblivionDynamicCast( /*0x5d421b*/
            ParentMenu,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &SigilStoneMenu `RTTI Type Descriptor',
            0);
    if ( v10 ) /*0x5d4222*/
    {
      a3 = fConstant_2; /*0x5d4224*/
      Tile_SetFloat(OpenMenuTile, 0x1772u, fConstant_2); /*0x5d4235*/
      result = Menu::StartFadeOut(v10, a5, a6, a7, a8, a2, result); /*0x5d423c*/
    }
    if ( unk_B3B720 == 3 || unk_B3B720 == 2 ) /*0x5d424d*/
      return sub_57CAC0(a1, a3, result, a2); /*0x5d4250*/
  }
  return result; /*0x5d424f*/
}
