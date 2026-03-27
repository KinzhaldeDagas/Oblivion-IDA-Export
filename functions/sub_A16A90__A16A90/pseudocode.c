void __cdecl sub_A16A90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D28);
  if ( off_B02D2C )
  {
    if ( *off_B02D2C == 0x53 )
      FormHeapFree((unsigned int)off_B02D2C);
  }
}
