void __cdecl sub_A18AE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBlockMessageBoxes_MESSAGES);
  if ( off_B06B3C )
  {
    if ( *off_B06B3C == 0x53 )
      FormHeapFree((unsigned int)off_B06B3C);
  }
}
