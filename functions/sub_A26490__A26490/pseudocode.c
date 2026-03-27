void __cdecl sub_A26490()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1629C);
  if ( off_B162A0 )
  {
    if ( *off_B162A0 == 0x53 )
      FormHeapFree((unsigned int)off_B162A0);
  }
}
