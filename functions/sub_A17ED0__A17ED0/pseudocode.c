void __cdecl sub_A17ED0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iMaxPickHavok);
  if ( off_B05228 )
  {
    if ( *off_B05228 == 0x53 )
      FormHeapFree((unsigned int)off_B05228);
  }
}
