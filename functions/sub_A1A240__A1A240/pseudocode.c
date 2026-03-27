void __cdecl sub_A1A240()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07050);
  if ( off_B07054 )
  {
    if ( *off_B07054 == 0x53 )
      FormHeapFree((unsigned int)off_B07054);
  }
}
