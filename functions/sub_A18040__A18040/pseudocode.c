void __cdecl sub_A18040()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B0525C);
  if ( off_B05260[0] )
  {
    if ( *off_B05260[0] == 0x53 )
      FormHeapFree((unsigned int)off_B05260[0]);
  }
}
