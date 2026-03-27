void __cdecl sub_A24430()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13210);
  if ( off_B13214 )
  {
    if ( *off_B13214 == 0x53 )
      FormHeapFree((unsigned int)off_B13214);
  }
}
