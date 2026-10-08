// Consumes owned BSStringT category/control names, resolves the cached category Tile, then recursively finds the named descendant control.
Tile *__thiscall RaceSexMenu_FindControlTile(void *this, BSStringT categoryName, BSStringT controlName)
{
  Tile *CategoryTileByName; // eax
  Tile *DescendantByName; // esi
  BSStringT v7; // [esp-Ch] [ebp-2Ch] BYREF
  char *m_data; // [esp-4h] [ebp-24h]
  BSStringT *v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+1Ch] [ebp-4h]

  m_data = controlName.m_data; /*0x5c346e*/
  v9 = &v7; /*0x5c3476*/
  v10 = 1; /*0x5c347c*/
  v7.m_data = 0; /*0x5c3484*/
  v7.m_dataLen = 0; /*0x5c3486*/
  v7.m_bufLen = 0; /*0x5c348a*/
  BSStringT_Set(&v7, categoryName.m_data, 0); /*0x5c348e*/
  CategoryTileByName = (Tile *)RaceSexMenu_GetCategoryTileByName( /*0x5c3495*/
                                 this,
                                 (unsigned __int8 *)v7.m_data,
                                 *(int *)&v7.m_dataLen);
  DescendantByName = Tile_FindDescendantByName(CategoryTileByName, m_data);// Instruction is MOV ESI,EAX after the Tile_FindDescendantByName call. Earlier PF constant erroneously targeted this address as a CALL; correct call is 0x5C349C. Missing category crash arises at callee 0x589932 if root ECX=null. /*0x5c34a2*/
  FormHeapFree((unsigned int)categoryName.m_data); /*0x5c34a4*/
  FormHeapFree((unsigned int)controlName.m_data); /*0x5c34aa*/
  return DescendantByName; /*0x5c34b4*/
}
