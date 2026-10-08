void __cdecl sub_A25200()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1488C); /*0xa2520a*/
  if ( off_B14890 ) /*0xa25216*/
  {
    if ( *off_B14890 == 0x53 ) /*0xa2521b*/
      FormHeapFree((unsigned int)off_B14890); /*0xa2521e*/
  }
}
