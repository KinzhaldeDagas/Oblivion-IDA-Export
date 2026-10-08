void __cdecl sub_596550(float a1)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v3; // esi
  int v4; // eax
  Tile *v5; // ecx
  float a2; // [esp+0h] [ebp-Ch]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x415); /*0x596556*/
  if ( OpenMenuTile ) /*0x596560*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x596573*/
    v3 = OblivionDynamicCast( /*0x59658b*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &BreathMenu `RTTI Type Descriptor',
           0);
    v4 = Double_To_SInt32(a1 * fCostant_100); /*0x59658d*/
    if ( *((_DWORD *)v3 + 0xC) != v4 ) /*0x596599*/
    {
      v5 = *((Tile **)v3 + 0xB); /*0x5965a0*/
      *((_DWORD *)v3 + 0xC) = v4; /*0x5965a3*/
      a2 = (float)v4; /*0x5965a6*/
      Tile_SetFloat(v5, 0xFAFu, a2); /*0x5965ae*/
    }
  }
}
