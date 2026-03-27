void __cdecl sub_A259E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14EC8);
  if ( off_B14ECC )
  {
    if ( *off_B14ECC == 0x53 )
      FormHeapFree((unsigned int)off_B14ECC);
  }
}
