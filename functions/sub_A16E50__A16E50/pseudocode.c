void __cdecl sub_A16E50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DC8);
  if ( off_B02DCC )
  {
    if ( *off_B02DCC == 0x53 )
      FormHeapFree((unsigned int)off_B02DCC);
  }
}
