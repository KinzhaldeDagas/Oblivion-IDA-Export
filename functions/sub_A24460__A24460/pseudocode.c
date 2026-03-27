void __cdecl sub_A24460()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13218);
  if ( off_B1321C )
  {
    if ( *off_B1321C == 0x53 )
      FormHeapFree((unsigned int)off_B1321C);
  }
}
