void __cdecl sub_A188F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06AB8);
  if ( off_B06ABC[0] )
  {
    if ( *off_B06ABC[0] == 0x53 )
      FormHeapFree((unsigned int)off_B06ABC[0]);
  }
}
