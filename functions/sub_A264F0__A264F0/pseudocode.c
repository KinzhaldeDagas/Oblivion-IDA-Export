void __cdecl sub_A264F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162AC);
  if ( off_B162B0 )
  {
    if ( *off_B162B0 == 0x53 )
      FormHeapFree((unsigned int)off_B162B0);
  }
}
