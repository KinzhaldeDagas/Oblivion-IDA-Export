void __cdecl sub_A180F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpString2);
  if ( off_B05568 )
  {
    if ( *off_B05568 == 0x53 )
      FormHeapFree((unsigned int)off_B05568);
  }
}
