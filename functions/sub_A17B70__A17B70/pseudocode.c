void __cdecl sub_A17B70()
{
  BSSimpleList_Remove((int *)&unk_B07E34, (int)off_B0472C);
  if ( off_B04730[0] )
  {
    if ( *off_B04730[0] == 0x53 )
      FormHeapFree((unsigned int)off_B04730[0]);
  }
}
