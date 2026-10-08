void __cdecl sub_A16FA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iDebugText); /*0xa16faa*/
  if ( off_B02E10 ) /*0xa16fb6*/
  {
    if ( *off_B02E10 == 0x53 ) /*0xa16fbb*/
      FormHeapFree((unsigned int)off_B02E10); /*0xa16fbe*/
  }
}
