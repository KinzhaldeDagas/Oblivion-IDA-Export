void __cdecl sub_A180C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B0555C);
  if ( off_B05560[0] )
  {
    if ( *off_B05560[0] == 0x53 )
      FormHeapFree((unsigned int)off_B05560[0]);
  }
}
