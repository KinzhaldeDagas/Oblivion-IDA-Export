void __cdecl sub_A19B60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_bShadowSourceAsReceiverSetting); /*0xa19b6a*/
  if ( off_B06F10 ) /*0xa19b76*/
  {
    if ( *off_B06F10 == 0x53 ) /*0xa19b7b*/
      FormHeapFree((unsigned int)off_B06F10); /*0xa19b7e*/
  }
}
