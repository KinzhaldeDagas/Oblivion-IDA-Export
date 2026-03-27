void __cdecl sub_A263A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16274);
  if ( off_B16278 )
  {
    if ( *off_B16278 == 0x53 )
      FormHeapFree((unsigned int)off_B16278);
  }
}
