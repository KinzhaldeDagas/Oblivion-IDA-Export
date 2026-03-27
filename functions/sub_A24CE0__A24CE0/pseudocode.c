void __cdecl sub_A24CE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14168);
  if ( off_B1416C )
  {
    if ( *off_B1416C == 0x53 )
      FormHeapFree((unsigned int)off_B1416C);
  }
}
