void __stdcall sub_612860(void **source)
{
  void **FormID; // eax
  TESSaveLoadGame_SerializationView *v2; // ecx
  TESSaveLoadGame_SerializationView *v3; // ecx

  if ( source && *source ) /*0x612868*/
  {
    FormID = (void **)MagicItem_GetFormID(*source); /*0x61286e*/
    v2 = g_TESSaveLoadGame; /*0x612873*/
    source = FormID; /*0x612879*/
    SaveLoad_SaveFormID(v2, (const unsigned int *)&source, 4u); /*0x612884*/
  }
  else
  {
    v3 = g_TESSaveLoadGame; /*0x61288c*/
    source = 0; /*0x612899*/
    SaveLoad_SaveFormID(v3, (const unsigned int *)&source, 4u); /*0x6128a1*/
  }
}
