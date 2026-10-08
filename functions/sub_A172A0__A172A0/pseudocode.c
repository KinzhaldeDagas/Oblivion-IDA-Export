void __cdecl sub_A172A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&NearDistance); /*0xa172aa*/
  if ( off_B03138 ) /*0xa172b6*/
  {
    if ( *off_B03138 == 0x53 ) /*0xa172bb*/
      FormHeapFree((unsigned int)off_B03138); /*0xa172be*/
  }
}
