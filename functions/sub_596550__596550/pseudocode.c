void __cdecl sub_596550(float a1)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v3; // esi
  int v4; // eax
  Tile *v5; // ecx
  float a2; // [esp+0h] [ebp-Ch]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x415);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v3 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &BreathMenu `RTTI Type Descriptor',
           0);
    v4 = Double_To_SInt32(a1 * fCostant_100);
    if ( *((_DWORD *)v3 + 0xC) != v4 )
    {
      v5 = *((Tile **)v3 + 0xB);
      *((_DWORD *)v3 + 0xC) = v4;
      a2 = (float)v4;
      Tile_SetFloat(v5, (_DWORD *)0xFAF, a2);
    }
  }
}
