void __cdecl sub_A18610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06548);
  if ( off_B0654C[0] )
  {
    if ( *off_B0654C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B0654C[0]);
  }
}
