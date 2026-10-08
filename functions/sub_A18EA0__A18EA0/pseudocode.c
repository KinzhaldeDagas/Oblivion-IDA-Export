void __cdecl sub_A18EA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_bDoActorShadowsSetting); /*0xa18eaa*/
  if ( off_B06CF0 ) /*0xa18eb6*/
  {
    if ( *off_B06CF0 == 0x53 ) /*0xa18ebb*/
      FormHeapFree((unsigned int)off_B06CF0); /*0xa18ebe*/
  }
}
