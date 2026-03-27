void __cdecl sub_A237B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B12630);
  if ( off_B12634 )
  {
    if ( *off_B12634 == 0x53 )
      FormHeapFree((unsigned int)off_B12634);
  }
}
