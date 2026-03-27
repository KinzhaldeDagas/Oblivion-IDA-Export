void __cdecl sub_A243A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B12E3C);
  if ( off_B12E40 )
  {
    if ( *off_B12E40 == 0x53 )
      FormHeapFree((unsigned int)off_B12E40);
  }
}
