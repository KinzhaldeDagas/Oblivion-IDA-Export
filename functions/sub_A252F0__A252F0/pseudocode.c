void __cdecl sub_A252F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B148CC);
  if ( off_B148D0 )
  {
    if ( *off_B148D0 == 0x53 )
      FormHeapFree((unsigned int)off_B148D0);
  }
}
