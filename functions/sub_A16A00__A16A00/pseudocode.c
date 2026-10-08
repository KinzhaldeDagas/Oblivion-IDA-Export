void __cdecl sub_A16A00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D10); /*0xa16a0a*/
  if ( off_B02D14 ) /*0xa16a16*/
  {
    if ( *off_B02D14 == 0x53 ) /*0xa16a1b*/
      FormHeapFree((unsigned int)off_B02D14); /*0xa16a1e*/
  }
}
