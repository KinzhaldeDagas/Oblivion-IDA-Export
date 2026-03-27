void __cdecl sub_A25580()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14BAC);
  if ( off_B14BB0 )
  {
    if ( *off_B14BB0 == 0x53 )
      FormHeapFree((unsigned int)off_B14BB0);
  }
}
