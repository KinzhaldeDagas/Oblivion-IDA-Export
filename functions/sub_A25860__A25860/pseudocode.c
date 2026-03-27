void __cdecl sub_A25860()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14E88);
  if ( off_B14E8C )
  {
    if ( *off_B14E8C == 0x53 )
      FormHeapFree((unsigned int)off_B14E8C);
  }
}
