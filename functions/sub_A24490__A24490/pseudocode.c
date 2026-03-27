void __cdecl sub_A24490()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13220);
  if ( off_B13224 )
  {
    if ( *off_B13224 == 0x53 )
      FormHeapFree((unsigned int)off_B13224);
  }
}
