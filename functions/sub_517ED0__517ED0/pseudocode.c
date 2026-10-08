TESForm *__cdecl sub_517ED0(char *Str2)
{
  OblivionTESFormListNode *p_soundList; // esi
  TESForm *item; // edi
  const char *data; // eax

  if ( !Str2 ) /*0x517eda*/
    return 0; /*0x517f30*/
  p_soundList = &g_TESDataHandler->soundList; /*0x517ee3*/
  if ( g_TESDataHandler == (TESDataHandler *)0xFFFFFF94 ) /*0x517ee6*/
    return 0; /*0x517f2b*/
  while ( 1 ) /*0x517ef0*/
  {
    if ( !p_soundList->next && !p_soundList->item ) /*0x517ef7*/
      return 0; /*0x517f22*/
    item = p_soundList->item; /*0x517ef9*/
    data = (const char *)p_soundList->item[1].member.modlist.data; /*0x517efb*/
    if ( !data ) /*0x517f00*/
      data = EmptyString; /*0x517f02*/
    if ( !CRT_StricmpLocaleDispatch(data, Str2) ) /*0x517f09*/
      break; /*0x517f09*/
    p_soundList = p_soundList->next; /*0x517f15*/
    if ( !p_soundList ) /*0x517f1a*/
      return 0; /*0x517f1a*/
  }
  return item; /*0x517f20*/
}
