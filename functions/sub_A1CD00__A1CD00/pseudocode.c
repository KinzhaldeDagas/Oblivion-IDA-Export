void __cdecl sub_A1CD00()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B34);
  if ( off_B11B38[0] )
  {
    if ( *off_B11B38[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B38[0]);
  }
}
