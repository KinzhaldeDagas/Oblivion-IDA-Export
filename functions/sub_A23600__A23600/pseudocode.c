void __cdecl sub_A23600()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B125E8);
  if ( off_B125EC )
  {
    if ( *off_B125EC == 0x53 )
      FormHeapFree((unsigned int)off_B125EC);
  }
}
