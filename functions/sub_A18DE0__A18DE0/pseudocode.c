void __cdecl sub_A18DE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CCC);
  if ( off_B06CD0 )
  {
    if ( *off_B06CD0 == 0x53 )
      FormHeapFree((unsigned int)off_B06CD0);
  }
}
