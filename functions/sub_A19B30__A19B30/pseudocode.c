void __cdecl sub_A19B30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_iActorShadowCountInteriorSetting); /*0xa19b3a*/
  if ( off_B06F08 ) /*0xa19b46*/
  {
    if ( *off_B06F08 == 0x53 ) /*0xa19b4b*/
      FormHeapFree((unsigned int)off_B06F08); /*0xa19b4e*/
  }
}
