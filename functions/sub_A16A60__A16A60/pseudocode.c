void __cdecl sub_A16A60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUSeThreadedMorhper); /*0xa16a6a*/
  if ( off_B02D24 ) /*0xa16a76*/
  {
    if ( *off_B02D24 == 0x53 ) /*0xa16a7b*/
      FormHeapFree((unsigned int)off_B02D24); /*0xa16a7e*/
  }
}
