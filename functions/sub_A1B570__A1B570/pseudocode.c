void __cdecl sub_A1B570()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bOutQuadInLinearAttenuation); /*0xa1b57a*/
  if ( off_B08184 ) /*0xa1b586*/
  {
    if ( *off_B08184 == 0x53 ) /*0xa1b58b*/
      FormHeapFree((unsigned int)off_B08184); /*0xa1b58e*/
  }
}
