void __cdecl sub_A257E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14E3C); /*0xa257ea*/
  if ( off_B14E40 ) /*0xa257f6*/
  {
    if ( *off_B14E40 == 0x53 ) /*0xa257fb*/
      FormHeapFree((unsigned int)off_B14E40); /*0xa257fe*/
  }
}
