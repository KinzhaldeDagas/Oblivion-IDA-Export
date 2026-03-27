void __cdecl sub_A251A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1487C);
  if ( off_B14880 )
  {
    if ( *off_B14880 == 0x53 )
      FormHeapFree((unsigned int)off_B14880);
  }
}
