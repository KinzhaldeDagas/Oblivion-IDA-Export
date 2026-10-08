void __cdecl sub_A19B00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_iActorShadowCountExteriorSetting); /*0xa19b0a*/
  if ( off_B06F00 ) /*0xa19b16*/
  {
    if ( *off_B06F00 == 0x53 ) /*0xa19b1b*/
      FormHeapFree((unsigned int)off_B06F00); /*0xa19b1e*/
  }
}
