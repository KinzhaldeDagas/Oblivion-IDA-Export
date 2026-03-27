void __cdecl sub_A23630()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B125F0);
  if ( off_B125F4 )
  {
    if ( *off_B125F4 == 0x53 )
      FormHeapFree((unsigned int)off_B125F4);
  }
}
