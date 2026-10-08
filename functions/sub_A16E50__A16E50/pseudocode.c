void __cdecl sub_A16E50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DC8); /*0xa16e5a*/
  if ( off_B02DCC ) /*0xa16e66*/
  {
    if ( *off_B02DCC == 0x53 ) /*0xa16e6b*/
      FormHeapFree((unsigned int)off_B02DCC); /*0xa16e6e*/
  }
}
