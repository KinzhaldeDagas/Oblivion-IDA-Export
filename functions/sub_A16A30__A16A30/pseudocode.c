void __cdecl sub_A16A30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D18);
  if ( off_B02D1C )
  {
    if ( *off_B02D1C == 0x53 )
      FormHeapFree((unsigned int)off_B02D1C);
  }
}
