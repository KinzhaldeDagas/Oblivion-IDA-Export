void __cdecl sub_A25C80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14F38);
  if ( off_B14F3C )
  {
    if ( *off_B14F3C == 0x53 )
      FormHeapFree((unsigned int)off_B14F3C);
  }
}
