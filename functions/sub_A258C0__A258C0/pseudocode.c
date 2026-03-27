void __cdecl sub_A258C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14E98);
  if ( off_B14E9C )
  {
    if ( *off_B14E9C == 0x53 )
      FormHeapFree((unsigned int)off_B14E9C);
  }
}
