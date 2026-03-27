void __cdecl sub_A1B7E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B08960);
  if ( off_B08964[0] )
  {
    if ( *off_B08964[0] == 0x53 )
      FormHeapFree((unsigned int)off_B08964[0]);
  }
}
