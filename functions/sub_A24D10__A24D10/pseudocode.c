void __cdecl sub_A24D10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14170);
  if ( off_B14174[0] )
  {
    if ( *off_B14174[0] == 0x53 )
      FormHeapFree((unsigned int)off_B14174[0]);
  }
}
