void __cdecl sub_A23690()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B12600);
  if ( off_B12604 )
  {
    if ( *off_B12604 == 0x53 )
      FormHeapFree((unsigned int)off_B12604);
  }
}
