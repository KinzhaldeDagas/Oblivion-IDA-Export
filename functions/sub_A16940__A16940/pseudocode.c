void __cdecl sub_A16940()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&right); /*0xa1694a*/
  if ( off_B02CF4 ) /*0xa16956*/
  {
    if ( *off_B02CF4 == 0x53 ) /*0xa1695b*/
      FormHeapFree((unsigned int)off_B02CF4); /*0xa1695e*/
  }
}
