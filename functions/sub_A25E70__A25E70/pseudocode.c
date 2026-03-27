void __cdecl sub_A25E70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bSnapToAngle);
  if ( off_B15818 )
  {
    if ( *off_B15818 == 0x53 )
      FormHeapFree((unsigned int)off_B15818);
  }
}
