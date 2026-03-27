void __cdecl sub_A25C20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14F28);
  if ( off_B14F2C )
  {
    if ( *off_B14F2C == 0x53 )
      FormHeapFree((unsigned int)off_B14F2C);
  }
}
