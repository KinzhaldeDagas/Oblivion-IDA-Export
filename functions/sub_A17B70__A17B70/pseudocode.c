void __cdecl sub_A17B70()
{
  BSSimpleList_Remove((int *)&unk_B07E34, (int)off_B0472C); /*0xa17b7a*/
  if ( off_B04730[0] ) /*0xa17b86*/
  {
    if ( *off_B04730[0] == 0x53 ) /*0xa17b8b*/
      FormHeapFree((unsigned int)off_B04730[0]); /*0xa17b8e*/
  }
}
