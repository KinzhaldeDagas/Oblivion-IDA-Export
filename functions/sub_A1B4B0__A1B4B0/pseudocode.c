void __cdecl sub_A1B4B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08160);
  if ( off_B08164 )
  {
    if ( *off_B08164 == 0x53 )
      FormHeapFree((unsigned int)off_B08164);
  }
}
