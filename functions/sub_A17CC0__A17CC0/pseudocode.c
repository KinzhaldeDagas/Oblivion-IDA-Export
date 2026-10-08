void __cdecl sub_A17CC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bPreemptivelyUnloadCells); /*0xa17cca*/
  if ( off_B051D0 ) /*0xa17cd6*/
  {
    if ( *off_B051D0 == 0x53 ) /*0xa17cdb*/
      FormHeapFree((unsigned int)off_B051D0); /*0xa17cde*/
  }
}
