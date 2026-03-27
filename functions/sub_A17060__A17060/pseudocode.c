void __cdecl sub_A17060()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpParameter);
  if ( off_B03088[0] )
  {
    if ( *off_B03088[0] == 0x53 )
      FormHeapFree((unsigned int)off_B03088[0]);
  }
}
