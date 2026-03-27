void __cdecl sub_A17D80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B051EC);
  if ( off_B051F0[0] )
  {
    if ( *off_B051F0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B051F0[0]);
  }
}
