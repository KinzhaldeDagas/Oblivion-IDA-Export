void __cdecl sub_A242B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B12DB4);
  if ( off_B12DB8 )
  {
    if ( *off_B12DB8 == 0x53 )
      FormHeapFree((unsigned int)off_B12DB8);
  }
}
