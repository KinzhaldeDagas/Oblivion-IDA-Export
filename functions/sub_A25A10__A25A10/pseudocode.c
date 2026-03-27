void __cdecl sub_A25A10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14ED0);
  if ( off_B14ED4 )
  {
    if ( *off_B14ED4 == 0x53 )
      FormHeapFree((unsigned int)off_B14ED4);
  }
}
