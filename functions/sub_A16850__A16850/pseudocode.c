void __cdecl sub_A16850()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CC8);
  if ( off_B02CCC )
  {
    if ( *off_B02CCC == 0x53 )
      FormHeapFree((unsigned int)off_B02CCC);
  }
}
