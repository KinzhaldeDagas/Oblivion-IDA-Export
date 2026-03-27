void __cdecl sub_A18EA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CEC);
  if ( off_B06CF0 )
  {
    if ( *off_B06CF0 == 0x53 )
      FormHeapFree((unsigned int)off_B06CF0);
  }
}
