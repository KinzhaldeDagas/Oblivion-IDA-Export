void __cdecl sub_A24880()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13608);
  if ( off_B1360C )
  {
    if ( *off_B1360C == 0x53 )
      FormHeapFree((unsigned int)off_B1360C);
  }
}
