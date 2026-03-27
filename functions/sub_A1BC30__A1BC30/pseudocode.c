void __cdecl sub_A1BC30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&preventHavokAddClutter);
  if ( off_B0986C )
  {
    if ( *off_B0986C == 0x53 )
      FormHeapFree((unsigned int)off_B0986C);
  }
}
