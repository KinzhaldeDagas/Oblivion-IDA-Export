double __usercall sub_5932B0@<st0>(
        char a1@<bpl>,
        double a2@<st2>,
        double result@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>)
{
  Tile *OpenMenuTile; // eax
  Tile *v8; // edi
  int ParentMenu; // esi
  double v10; // st6
  int v11; // edx
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x410); /*0x5932b6*/
  v8 = OpenMenuTile; /*0x5932bb*/
  if ( OpenMenuTile ) /*0x5932c2*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5932d0*/
    if ( ParentMenu ) /*0x5932d4*/
    {
      v10 = fConstant_2; /*0x5932da*/
      Tile_SetFloat(v8, 0x1772u, fConstant_2); /*0x5932eb*/
      v12 = *(_DWORD *)(ParentMenu + 0x78); /*0x5932f0*/
      if ( v12 ) /*0x5932f5*/
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(ParentMenu + 0x78), v11); /*0x5932f9*/
        FormHeapFree(v12); /*0x5932ff*/
      }
      v13 = *(_DWORD *)(ParentMenu + 0x80); /*0x593307*/
      if ( v13 ) /*0x59330f*/
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(ParentMenu + 0x80), v11); /*0x593313*/
        FormHeapFree(v13); /*0x593319*/
      }
      v14 = *(_DWORD *)(ParentMenu + 0x7C); /*0x593321*/
      if ( v14 ) /*0x593326*/
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(ParentMenu + 0x7C), v11); /*0x59332a*/
        FormHeapFree(v14); /*0x593330*/
      }
      v15 = *(_DWORD *)(ParentMenu + 0x84); /*0x593338*/
      if ( v15 ) /*0x593340*/
      {
        ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(ParentMenu + 0x84), v11); /*0x593344*/
        FormHeapFree(v15); /*0x59334a*/
      }
      result = Menu::StartFadeOut((_DWORD *)ParentMenu, a4, a5, a6, a7, a2, result); /*0x593354*/
      if ( sub_578FE0() == 1 ) /*0x593361*/
        return sub_57CAC0(a1, v10, result, a2); /*0x593365*/
    }
  }
  return result; /*0x593364*/
}
