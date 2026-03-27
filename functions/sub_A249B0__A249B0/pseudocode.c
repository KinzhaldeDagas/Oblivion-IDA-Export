void __cdecl sub_A249B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13994);
  if ( off_B13998 )
  {
    if ( *off_B13998 == 0x53 )
      FormHeapFree((unsigned int)off_B13998);
  }
}
