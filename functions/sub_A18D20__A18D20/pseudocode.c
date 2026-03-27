void __cdecl sub_A18D20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CAC);
  if ( off_B06CB0 )
  {
    if ( *off_B06CB0 == 0x53 )
      FormHeapFree((unsigned int)off_B06CB0);
  }
}
