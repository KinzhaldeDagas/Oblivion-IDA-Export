void __cdecl sub_A1C200()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B10CA0);
  if ( off_B10CA4[0] )
  {
    if ( *off_B10CA4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B10CA4[0]);
  }
}
