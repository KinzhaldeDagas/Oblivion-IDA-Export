void __cdecl sub_A242B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B12DB4); /*0xa242ba*/
  if ( off_B12DB8 ) /*0xa242c6*/
  {
    if ( *off_B12DB8 == 0x53 ) /*0xa242cb*/
      FormHeapFree((unsigned int)off_B12DB8); /*0xa242ce*/
  }
}
