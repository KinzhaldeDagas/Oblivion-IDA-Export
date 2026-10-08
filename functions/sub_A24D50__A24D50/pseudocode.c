void __cdecl sub_A24D50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B1436C); /*0xa24d5a*/
  if ( off_B14370[0] ) /*0xa24d66*/
  {
    if ( *off_B14370[0] == 0x53 ) /*0xa24d6b*/
      FormHeapFree((unsigned int)off_B14370[0]); /*0xa24d6e*/
  }
}
