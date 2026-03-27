double __usercall sub_5932B0@<st0>(char a1@<bpl>, double a2@<st2>, double result@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v5; // edi
  int ParentMenu; // esi
  double v7; // st6
  int v8; // edx
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x410);
  v5 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      v7 = fConstant_2;
      Tile_SetFloat(v5, (_DWORD *)0x1772, fConstant_2);
      v9 = *(_DWORD *)(ParentMenu + 0x78);
      if ( v9 )
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(ParentMenu + 0x78), v8);
        FormHeapFree(v9);
      }
      v10 = *(_DWORD *)(ParentMenu + 0x80);
      if ( v10 )
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(ParentMenu + 0x80), v8);
        FormHeapFree(v10);
      }
      v11 = *(_DWORD *)(ParentMenu + 0x7C);
      if ( v11 )
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(ParentMenu + 0x7C), v8);
        FormHeapFree(v11);
      }
      v12 = *(_DWORD *)(ParentMenu + 0x84);
      if ( v12 )
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(ParentMenu + 0x84), v8);
        FormHeapFree(v12);
      }
      sub_584740((_DWORD *)ParentMenu, a2, v7);
      if ( sub_578FE0() == 1 )
        return sub_57CAC0(a1, v7, result, a2);
    }
  }
  return result;
}
