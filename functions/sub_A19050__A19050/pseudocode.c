void __cdecl sub_A19050()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06D34);
  if ( off_B06D38 )
  {
    if ( *off_B06D38 == 0x53 )
      FormHeapFree((unsigned int)off_B06D38);
  }
}
