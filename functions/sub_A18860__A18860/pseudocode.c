void __cdecl sub_A18860()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06AA0);
  if ( off_B06AA4 )
  {
    if ( *off_B06AA4 == 0x53 )
      FormHeapFree((unsigned int)off_B06AA4);
  }
}
