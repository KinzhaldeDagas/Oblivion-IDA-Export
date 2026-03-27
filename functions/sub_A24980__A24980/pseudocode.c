void __cdecl sub_A24980()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1398C);
  if ( off_B13990 )
  {
    if ( *off_B13990 == 0x53 )
      FormHeapFree((unsigned int)off_B13990);
  }
}
