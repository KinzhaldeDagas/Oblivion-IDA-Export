void __cdecl sub_A16490()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBackgroundMouse); /*0xa1649a*/
  if ( off_B02C40 ) /*0xa164a6*/
  {
    if ( *off_B02C40 == 0x53 ) /*0xa164ab*/
      FormHeapFree((unsigned int)off_B02C40); /*0xa164ae*/
  }
}
