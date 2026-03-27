void __cdecl sub_A25CB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14F40);
  if ( off_B14F44 )
  {
    if ( *off_B14F44 == 0x53 )
      FormHeapFree((unsigned int)off_B14F44);
  }
}
