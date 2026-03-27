void __cdecl sub_A1C3E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)mp3String);
  if ( off_B10D64[0] )
  {
    if ( *off_B10D64[0] == 0x53 )
      FormHeapFree((unsigned int)off_B10D64[0]);
  }
}
