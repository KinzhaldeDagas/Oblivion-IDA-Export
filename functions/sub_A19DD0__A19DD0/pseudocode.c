void __cdecl sub_A19DD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06F74);
  if ( off_B06F78 )
  {
    if ( *off_B06F78 == 0x53 )
      FormHeapFree((unsigned int)off_B06F78);
  }
}
