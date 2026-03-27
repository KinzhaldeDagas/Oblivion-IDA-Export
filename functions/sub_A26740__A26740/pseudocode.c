void __cdecl sub_A26740()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B23C50);
  if ( off_B23C54 )
  {
    if ( *off_B23C54 == 0x53 )
      FormHeapFree((unsigned int)off_B23C54);
  }
}
