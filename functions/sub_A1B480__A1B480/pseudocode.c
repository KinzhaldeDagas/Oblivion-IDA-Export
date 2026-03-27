void __cdecl sub_A1B480()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08158);
  if ( off_B0815C )
  {
    if ( *off_B0815C == 0x53 )
      FormHeapFree((unsigned int)off_B0815C);
  }
}
