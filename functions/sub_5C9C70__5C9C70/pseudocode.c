void __usercall sub_5C9C70(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  float *v5; // esi
  TESForm *v6; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v5 = (float *)OblivionDynamicCast(
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &RaceSexMenu `RTTI Type Descriptor',
                    0);
    if ( v5 )
    {
      v6 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
      sub_521E40(v6);
      sub_5C91E0(a1, a2, a3);
      sub_5C7BA0(v5, 0);
    }
  }
}
