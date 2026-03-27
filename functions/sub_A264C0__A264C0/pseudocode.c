void __cdecl sub_A264C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162A4);
  if ( off_B162A8 )
  {
    if ( *off_B162A8 == 0x53 )
      FormHeapFree((unsigned int)off_B162A8);
  }
}
