void __cdecl sub_A190B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06D44);
  if ( off_B06D48 )
  {
    if ( *off_B06D48 == 0x53 )
      FormHeapFree((unsigned int)off_B06D48);
  }
}
