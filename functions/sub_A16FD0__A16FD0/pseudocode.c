void __cdecl sub_A16FD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bShowMenuTextureUse); /*0xa16fda*/
  if ( off_B02E18 ) /*0xa16fe6*/
  {
    if ( *off_B02E18 == 0x53 ) /*0xa16feb*/
      FormHeapFree((unsigned int)off_B02E18); /*0xa16fee*/
  }
}
