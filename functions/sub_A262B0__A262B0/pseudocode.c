void __cdecl sub_A262B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1624C);
  if ( off_B16250 )
  {
    if ( *off_B16250 == 0x53 )
      FormHeapFree((unsigned int)off_B16250);
  }
}
