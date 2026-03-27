void __cdecl sub_A23660()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B125F8);
  if ( off_B125FC )
  {
    if ( *off_B125FC == 0x53 )
      FormHeapFree((unsigned int)off_B125FC);
  }
}
