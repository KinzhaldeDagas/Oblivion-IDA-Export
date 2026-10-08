void __cdecl sub_A246A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135B8); /*0xa246aa*/
  if ( off_B135BC ) /*0xa246b6*/
  {
    if ( *off_B135BC == 0x53 ) /*0xa246bb*/
      FormHeapFree((unsigned int)off_B135BC); /*0xa246be*/
  }
}
