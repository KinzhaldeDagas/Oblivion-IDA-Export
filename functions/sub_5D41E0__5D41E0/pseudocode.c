double __usercall sub_5D41E0@<st0>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double result@<st0>)
{
  Tile *OpenMenuTile; // esi
  void *ParentMenu; // eax
  _DWORD *v6; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x418);
  if ( OpenMenuTile )
  {
    sub_668CC0((Concurrency::details::SchedulerBase *)TESDataHandler_g_PlayerRef, a1, a2, a3, result);
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v6 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &SigilStoneMenu `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      a3 = fConstant_2;
      Tile_SetFloat(OpenMenuTile, (_DWORD *)0x1772, fConstant_2);
      sub_584740(v6, a2, a3);
    }
    if ( byte_B3B720 == 3 || byte_B3B720 == 2 )
      return sub_57CAC0(a1, a3, result, a2);
  }
  return result;
}
