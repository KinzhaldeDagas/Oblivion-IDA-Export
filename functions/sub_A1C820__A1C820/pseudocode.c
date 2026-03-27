void __cdecl sub_A1C820()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)off_B11A64);
  if ( off_B11A68[0] )
  {
    if ( *off_B11A68[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11A68[0]);
  }
}
