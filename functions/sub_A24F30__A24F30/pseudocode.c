void __cdecl sub_A24F30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14814); /*0xa24f3a*/
  if ( off_B14818 ) /*0xa24f46*/
  {
    if ( *off_B14818 == 0x53 ) /*0xa24f4b*/
      FormHeapFree((unsigned int)off_B14818); /*0xa24f4e*/
  }
}
