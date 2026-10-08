char sub_4C9300()
{
  char v0; // bl
  OblivionTESFormListNode *p_landTextureList; // esi

  v0 = 0; /*0x4c9308*/
  p_landTextureList = &g_TESDataHandler->landTextureList; /*0x4c930a*/
  if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFFB4 ) /*0x4c930d*/
  {
    do /*0x4c932d*/
    {
      if ( !p_landTextureList->next && !p_landTextureList->item ) /*0x4c9316*/
        break; /*0x4c9319*/
      if ( sub_4C9230((int *)p_landTextureList->item) ) /*0x4c931d*/
        v0 = 1; /*0x4c9326*/
      p_landTextureList = p_landTextureList->next; /*0x4c9328*/
    }
    while ( p_landTextureList ); /*0x4c932d*/
  }
  return v0; /*0x4c932f*/
}
