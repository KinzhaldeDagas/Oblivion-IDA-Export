void __cdecl sub_A16BB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D58); /*0xa16bba*/
  if ( off_B02D5C ) /*0xa16bc6*/
  {
    if ( *off_B02D5C == 0x53 ) /*0xa16bcb*/
      FormHeapFree((unsigned int)off_B02D5C); /*0xa16bce*/
  }
}
