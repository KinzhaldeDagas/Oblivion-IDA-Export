void __cdecl sub_A251A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1487C); /*0xa251aa*/
  if ( off_B14880 ) /*0xa251b6*/
  {
    if ( *off_B14880 == 0x53 ) /*0xa251bb*/
      FormHeapFree((unsigned int)off_B14880); /*0xa251be*/
  }
}
