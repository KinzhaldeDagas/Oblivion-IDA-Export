TESForm *__stdcall sub_596BC0(_DWORD *a1)
{
  double Float; // st7
  int v2; // eax
  int v3; // ebx
  TESForm *item; // edi
  OblivionTESFormListNode *p_classList; // esi
  int v6; // ebp

  Float = Tile_GetFloat(a1, 0xFAA); /*0x596bcd*/
  v2 = Double_To_SInt32(Float); /*0x596bd2*/
  v3 = 0; /*0x596bdd*/
  item = 0; /*0x596bdf*/
  p_classList = &g_TESDataHandler->classList; /*0x596be1*/
  v6 = v2; /*0x596be4*/
  if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFFAC ) /*0x596be6*/
  {
    do /*0x596c07*/
    {
      if ( !p_classList->item ) /*0x596be8*/
        break; /*0x596bec*/
      if ( v3 > v6 ) /*0x596bf0*/
        break; /*0x596bf0*/
      item = p_classList->item; /*0x596bf2*/
      if ( TESClass_IsPlayable(p_classList->item) ) /*0x596bf6*/
        ++v3; /*0x596bff*/
      p_classList = p_classList->next; /*0x596c02*/
    }
    while ( p_classList ); /*0x596c07*/
  }
  return item; /*0x596c0b*/
}
