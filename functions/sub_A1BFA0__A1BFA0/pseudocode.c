void __cdecl sub_A1BFA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B09B48);
  if ( off_B09B4C[0] )
  {
    if ( *off_B09B4C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B09B4C[0]);
  }
}
