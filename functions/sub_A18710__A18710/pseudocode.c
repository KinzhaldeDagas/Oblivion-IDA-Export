void __cdecl sub_A18710()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B068D0); /*0xa1871a*/
  if ( off_B068D4 ) /*0xa18726*/
  {
    if ( *off_B068D4 == 0x53 ) /*0xa1872b*/
      FormHeapFree((unsigned int)off_B068D4); /*0xa1872e*/
  }
}
