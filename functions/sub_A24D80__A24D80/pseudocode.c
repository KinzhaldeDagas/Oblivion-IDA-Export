void __cdecl sub_A24D80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B14374);
  if ( off_B14378 )
  {
    if ( *off_B14378 == 0x53 )
      FormHeapFree((unsigned int)off_B14378);
  }
}
