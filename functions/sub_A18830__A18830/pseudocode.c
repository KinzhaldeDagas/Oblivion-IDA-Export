void __cdecl sub_A18830()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06A98);
  if ( off_B06A9C )
  {
    if ( *off_B06A9C == 0x53 )
      FormHeapFree((unsigned int)off_B06A9C);
  }
}
