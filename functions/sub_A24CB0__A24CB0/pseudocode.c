void __cdecl sub_A24CB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14160);
  if ( off_B14164 )
  {
    if ( *off_B14164 == 0x53 )
      FormHeapFree((unsigned int)off_B14164);
  }
}
