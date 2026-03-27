void __cdecl sub_A257E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14E3C);
  if ( off_B14E40 )
  {
    if ( *off_B14E40 == 0x53 )
      FormHeapFree((unsigned int)off_B14E40);
  }
}
