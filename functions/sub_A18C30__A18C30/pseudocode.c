void __cdecl sub_A18C30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&Y); /*0xa18c3a*/
  if ( off_B06C88 ) /*0xa18c46*/
  {
    if ( *off_B06C88 == 0x53 ) /*0xa18c4b*/
      FormHeapFree((unsigned int)off_B06C88); /*0xa18c4e*/
  }
}
