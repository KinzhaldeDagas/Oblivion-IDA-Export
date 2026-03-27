void __cdecl sub_A16730()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02C98);
  if ( off_B02C9C )
  {
    if ( *off_B02C9C == 0x53 )
      FormHeapFree((unsigned int)off_B02C9C);
  }
}
