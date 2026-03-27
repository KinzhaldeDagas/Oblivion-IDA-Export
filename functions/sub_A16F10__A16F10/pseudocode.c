void __cdecl sub_A16F10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpDefault);
  if ( off_B02DEC[0] )
  {
    if ( *off_B02DEC[0] == 0x53 )
      FormHeapFree((unsigned int)off_B02DEC[0]);
  }
}
