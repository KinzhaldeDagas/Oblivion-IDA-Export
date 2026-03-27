void __cdecl sub_A16FA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iDebugText);
  if ( off_B02E10 )
  {
    if ( *off_B02E10 == 0x53 )
      FormHeapFree((unsigned int)off_B02E10);
  }
}
