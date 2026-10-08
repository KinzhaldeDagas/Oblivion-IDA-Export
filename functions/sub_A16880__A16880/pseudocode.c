void __cdecl sub_A16880()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CD0); /*0xa1688a*/
  if ( off_B02CD4 ) /*0xa16896*/
  {
    if ( *off_B02CD4 == 0x53 ) /*0xa1689b*/
      FormHeapFree((unsigned int)off_B02CD4); /*0xa1689e*/
  }
}
